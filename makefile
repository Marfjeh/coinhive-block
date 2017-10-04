default: clean
	echo "##COINHIVE DOMAINS">>hostfile;
	sed 's/^/127\.0\.0\.1 /' domains >> hostfile
	echo "##END COINHIVE">>hostfile;
install:
	cp /etc/hosts hosts;
	-rm .temp
	sed '/##COINHIVE DOMAINS/,/##END COINHIVE/d' hosts >> .temp
	cat hostfile >> .temp
	mv .temp hosts
	cp hosts /etc/hosts
clean:
	if test -s "hostfile" ; \
		then \
			rm hostfile ;\
		fi
	if test -s "hosts" ; \
		then \
			rm hosts ;\
		fi
	if test -s ".temp" ; \
		then \
			rm .temp ;\
		fi