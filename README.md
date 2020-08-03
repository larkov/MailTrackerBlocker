# MailTrackerBlocker

MailTrackerBlocker is a macOS Apple Mail plugin (i.e. mailbundle) to block read trackers disguised as "spy pixels" in emails.

Commercial trackers can track how often, when and where you open your emails. Most commercial trackers can be reliably blocked through a blacklist of known URL patterns. Failing that, MailTrackerBlocker will apply a generic regex filter for all 1x1 images. Disabling "load remote content" should no longer be necessary just to read your emails. [Read more about how email pixel tracking works.](https://www.gmass.co/blog/tracking-pixel-blockers/)

![](https://user-images.githubusercontent.com/3298414/88930093-f89a5980-d2b5-11ea-85f6-37020305a450.png)

```diff
<img width="0" height="0" class="mailtrack-img" alt="" style="display:flex" src=
-"https://mailtrack.io/trace/mail/0eabccbe98c98e9b8e9a8b89eab89ce9ab89e8bc.png?u=1234567"
+"https://localhost/mail/0eabccbe98c98e9b8e9a8b89eab89ce9ab89e8bc.png?u=1234567"
>
```

## Prerequisites

Apple Mail on macOS 10.11 - 11.0.

## Setup

1. Download and install the latest `.pkg` from the [releases page](https://github.com/apparition47/MailTrackerBlocker/releases).
2. Open Mail, goto `Preferences > General > Manage Plug-ins... > check "MailTrackerBlocker.mailbundle" > Apply and Restart Mail`.
3. Tap on the `ⓧ` button to find out what was blocked.

⚠️ Disabling ["load remote content in messages"](https://www.imore.com/sites/imore.com/files/styles/xlarge/public/field/image/2019/07/mac-load-remote.jpg) with MailTrackerBlocker enabled is redundant; enable both for the best experience.

### Uninstall

Delete `/Library/Mail/Bundles/MailTrackerBlocker.mailbundle`.

## Building from source

#### A. Makefile
```bash
git clone https://github.com/apparition47/MailTrackerBlocker.git
cd MailTrackerBlocker
make
```

#### B. Xcode

1. Give Xcode `Full Disk Access` from `System Preferences > Security & Privacy > Privacy > Full Disk Access` and add Xcode.
     * Need this because the plugin needs to be installed into the Mail Apps bundles at `/Library/Mail/Bundles`.
2. Open the Xcode project, hit build.


## Credits

* [GPGMail](https://github.com/GPGTools/GPGMail) team for their work on Mail.app plugins
* [@dhh](https://github.com/dhh) for the [spy pixel tracker blocking list used in HEY](https://gist.github.com/dhh/360f4dc7ddbce786f8e82b97cdad9d20)
* [@bitmanic](https://github.com/bitmanic) for the UI design