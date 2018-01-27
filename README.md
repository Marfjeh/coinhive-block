# CoinHive-Block

To block the Malware domains of CoinHive or related JS bitcoin miners.

This does not block AuthedMine.com because they ask for permission. This is only for the rogue implementations of it.

## Why block (rogue) JS Crypto Miners?
We think that using a JavaScript Bitcoin miner on your site without end-users explicitly opting-in is **Malware**.

Fortunately, CoinHive did realize how webmasters implemented their sites without ever asking the end-user. They concluded:

>We're a bit saddened to see that some of our customers integrate CoinHive into their pages without disclosing to their users what's going on, let alone asking for their permission. We believe there's so much more potential for our solution, but we have to be respectful to our end users.
>
>We hope we can convince website owner to integrate the miner in a way that is more meaningful and honest to their users. ...

[source][4]

In September 2017, The PirateBay secretly added the JS miner without any user disclosure. Adding secret miners is making your site behave as a malware. 

Still honestly, to me, it's a great solution for the dying ads market, but it's sad that the webmasters implemented it like a malware, without ever thinking about the end-user.

## I'm using CoinHive on my site. What now?
We suggest asking the end-user for opt-in before those operations. It's the user's choice when they want it or not, and, even they don't want it, please respect their decision.

[AuthedMine.com][3] adds a pop-up asking for permission to authorize it. That's why we won't block AuthedMine.

Even people using AntiMalwareBytes blocks crypto mining js files so far I know. They also stated that the webmaster's implementation of it is wrong:
>Why are we blocking it?
>
>We do not claim that CoinHive is malicious, or even necessarily a bad idea. The concept of allowing folks to opt-in for an alternative to advertising, which has been plagued by everything from fake news to malvertising, is a noble one. The execution of it is another story.
>
>The reason we block CoinHive is because there are site owners who do not ask for their users’ permission to start running CPU-gorging applications on their systems. A regular Bitcoin miner could be incredibly simple or a powerhouse, depending on how much computing the user running the miner wants to use. The JavaScript version of a miner allows customization of how much mining to do, per user system, but leaves that up to the site owner, who may want to slow down your computer experience to a crawl.

[source][1]


## How to install pre-compiled hostfile (ALL OS, Windows, Linux, Mac OSX, etc.)
[On this wiki page][7] there's a tutorial how to install it on Windows, Linux and Mac OSX etc.

## How to compile (Linux)
```BASH
git clone https://github.com/Marfjeh/coinhive-block.git or git clone git@github.com:Marfjeh/coinhive-block.git
cd coinhive-block
sudo make
sudo make install
```

## Contributing
1. Clone the repository `git@github.com:Marfjeh/coinhive-block.git`
2. Change directory to the coin-hice block folder `cd coinhive-block`
3. Add new domains to the `domains` and start contributing!

## License

This project is released under the [MIT License][2]

## Buy us a coffee


[![donate button][6]][5]


[1]: https://blog.malwarebytes.com/security-world/2017/10/why-is-malwarebytes-blocking-coinhive/
[2]: https://github.com/Marfjeh/coinhive-block/blob/master/LICENSE.md
[3]: https://www.authedmine.com
[4]: https://coinhive.com/blog/status-report
[5]: https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=3HWEZU54NS7GW
[6]: https://www.paypalobjects.com/en_US/NL/i/btn/btn_donateCC_LG.gif
[7]: https://github.com/Marfjeh/coinhive-block/wiki/Installation-on-windows-Linux-Mac-OSX
