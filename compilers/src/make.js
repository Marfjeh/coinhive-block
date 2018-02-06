const fs = require('fs')

const domains = fs.readFileSync('../../domains', 'utf8').split('\n')

fs.appendFile('../../hostfile', '##COINHIVE DOMAINS\n', function () {})
domains.forEach((domain) => {
  fs.appendFile('../../hostfile', '0.0.0.0 ' + domain + '\n', function () {})
})
fs.appendFile('../../hostfile', '##END COINHIVE\n', function () {})
