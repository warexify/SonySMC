# SonySMC

A VirtualSMC plugin provides native support for ALS, keyboard backlight and Fn keys for Sony laptops on macOS.

#### Features
- Full Fn keys support (Note: Trackpad disabling only works with VoodooI2C)
- Native ALS support
- Native keyboard backlight support (16 levels, smooth transition, auto adjusting, auto turning off) (Mojave and below only)

#### Requirements
- Sony laptop with SNC device
- Knowing how to patch DSDT (if not, read [this](https://www.tonymacx86.com/threads/guide-patching-laptop-dsdt-ssdts.152573/))

#### Boot arguments
- Add `-sonysmcdbg` to enable debug printing (available in DEBUG binaries).

#### How to install
- Instruction is available in the Wiki.

#### Credits
- [Apple](https://www.apple.com) for macOS
- [vit9696](https://github.com/vit9696) for [Lilu](https://github.com/acidanthera/Lilu) and [VirtualSMC](https://github.com/acidanthera/VirtualSMC)
- [lvs1974](https://github.com/lvs1974) and [usr-sse2](https://github.com/usr-sse2) for developing ambient light sensor support
- [EMlyDinEsHMG](https://osxlatitude.com/profile/7370-emlydinesh/) for [AsusNBFnKeys source code](https://github.com/EMlyDinEsHMG/AsusNBFnKeys)
- [Objective-See](https://objective-see.com) for [kernel-userspace communication](https://objective-see.com/blog/blog_0x0B.html)
- [Karabiner-Elements](https://github.com/tekezo/Karabiner-Elements) for VirtualHIDKeyboard
- [williambj1](https://github.com/williambj1) for testing HID support
