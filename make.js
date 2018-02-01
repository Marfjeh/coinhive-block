const fs = require('fs')

const domains = fs.readFileSync('domains', 'utf8').split('\n')

domains.forEach((domain) => {
  fs.appendFile('hostfile', '0.0.0.0 ' + domain + '\n')
})
