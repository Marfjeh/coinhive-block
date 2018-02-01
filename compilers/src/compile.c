#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char** str_split(char* a_str, const char a_delim)
{
    char** result    = 0;
    size_t count     = 0;
    char* tmp        = a_str;
    char* last_comma = 0;
    char delim[2];
    delim[0] = a_delim;
    delim[1] = 0;

    while (*tmp)
    {
        if (a_delim == *tmp)
        {
            count++;
            last_comma = tmp;
        }
        tmp++;
    }
    count += last_comma < (a_str + strlen(a_str) - 1);

    count++;

    result = malloc(sizeof(char*) * count);

    if (result)
    {
        size_t idx  = 0;
        char* token = strtok(a_str, delim);

        while (token)
        {
            assert(idx < count);
            *(result + idx++) = strdup(token);
            token = strtok(0, delim);
        }
        assert(idx == count - 1);
        *(result + idx) = 0;
    }

    return result;
}

int main() {
	char* buffer = 0;
	long  length;
	FILE* f_domains = fopen ("../../domains", "rb");
	
	char* h_buffer = 0;
	long  h_length;
	FILE* h_domains = fopen ("../../hostfile", "wb+");

	if (f_domains) {
		fseek(f_domains, 0, SEEK_END);
		length = ftell(f_domains);
		fseek(f_domains, 0, SEEK_SET);
		buffer = (char*) malloc(length);
		if (buffer) {
			fread (buffer, 1, length, f_domains);
		}
		fclose (f_domains);
	}

	if (buffer) {
		char** domains = str_split(buffer, '\n'); // UNIX line ending. as saved in Git
		
		if(domains) {
			int i;
            fprintf(h_domains,  "%s", "##COINHIVE DOMAINS\r\n");
            for(i = 0; *(domains + i); i++) {
                fprintf(h_domains,  "%s%s%s", "0.0.0.0 ", domains[i], "\r\n"); // Windows line ending.
            }
            fprintf(h_domains,  "%s", "##COINHIVE DOMAINS\r\n");
		}
	}
	return 0;
}