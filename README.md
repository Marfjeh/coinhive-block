# Coinhive-Block
To block the Malware domains of coin-hive.
or related JS bitcoin miners.

## Why?
We think that using a JavaScript Bitcoin miner on your site is Malware.
Web-Masters will and are abusing it, running it in the background without any the user knowledge.

For example, The PirateBay is using the Bitcoin miner on the search list page. 
without ANY of the user knowledge. they stated that they're testing it. A lot of the administrators didn't like it.
They removed it after, but as of now they re-added it on their site.

## I'm using coinhive on my site. what now?
We suggest to stop using that and add a donation button / ads on your site instead.

You need to think about that you're draining people's battery because **YOU** need that few extra cents. Do you like it when a website drains your laptops/phones battery to generate money for the webmaster because muh money? And you need to use the phone/laptop for the rest of the day, and don't have a charger? Yes, that's why you don't add this kind of malware to your site. Please don't be that guy.

Even people using antimalwarebytes even blocks crypto mining js files so far i know. So a big shoutout to those people they're **AWESOME!** 
[Antimalware statement about the coin-hive block][1]

## How to install (Linux)
```BASH
git clone https://github.com/Marfjeh/coinhive-block.git or git clone git@github.com:Marfjeh/coinhive-block.git
cd coinhive-block
sudo make
sudo make install
```

[1]: https://blog.malwarebytes.com/security-world/2017/10/why-is-malwarebytes-blocking-coinhive/
