domains = open("domains", "r").read().split('\n')
output = open('hostfile', "w")
output.write("##COINHIVE DOMAINS\n")
for domain in domains:
	output.write("0.0.0.0 " + domain + "\n")
output.write("##END COINHIVE\n")