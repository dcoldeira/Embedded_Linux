## Yocto


- **OpenEmbedded:** Build system and community 
- **Metadata:** files containing information about how to build an image
- **Recipe:** file with instructions to build one or more packages 
- **Layers:** directories containing grouped metadata (start with "meta-")
- **Board support package (BSP):** layer that defines how to build for boards 
- **Distribution:** specific implementation of linux (kernel version,rootfs, etc)
- **Machine:** defines the architecture, pins, buses BSP, etc
- **Image:** Output of the build process (bootable and executable Linux OS)


**Poky** is reference distribution system of the Yocto Project.

1) Clone poky (git clone git://git.yoctoproject.org/poky) 
   
 **Bitbake**  is the task executor that executes the task according to the (Yocto) Recipe. The **build environment** is the process of setting up bitbake and making it ready to use is called setting up the environment, the *oe-init-build-env* shell script will actually take care of these setting.



#### For the STM 32 family

The STM32 is family of 32-bit microcontrollers based on the Arm, based on an industry-standard core, comes with a vast choice of tools and software to support project development, making this family of products ideal for both small projects and end-to-end platforms. 

To check the conf file:

```Bash
less meta-poky/conf/distro/poky.conf
```

Then the board support package from the vendor needs to be downloaded, in this case: 

```Bash
git clone https://github.com/STMicroelectronics/meta-st-stm32mp.git

```

We need to make sure we are in the right branch (dunfell. checkout if not). To check the dependencies, on that folder just cloned, `less README` to find out what is needed.

For this case we install openembedded: 

```Bash
git clone git://github.com/openembedded/meta-openembedded.git
```


2) We need to make sure we are in the right branch (dunfell. checkout if not). After checking any if dependency is needed we can then run the script and building the image:

 ```Bash
source oe-init-build-env build-mp1 
 ```
 Which adds 'poky/scripts' and 'poky/bitbake/bin' paths to the environment $PATH variables in the root files, also a build folder is created with build environment related files. 

The default folder will be build, but passing another argument at the end we can rename this folder.

(for this particular process)

Within build-mp1 run

```Bash
bitbake
```

Also to see all the layers:

```Bash
bitbake-layers show -layers
```

Edit the layers:

```Bash
vi conf/bblayers.conf
```

and add whatever is needed, then we need to define the machine if needed.
After that head back to build-mp1 folder and:

```Bash
vi conf /local.conf
```

and commend `MACHINE ??= qemux86-64` and change it to `stm32mp1`


```Bash
bitbake core-image-minimal 
```

Other common targets are:
    
    core-image-full-cmdline
    core-image-sato
    core-image-weston
    meta-toolchain
    meta-ide-support

[Official docs..](https://docs.yoctoproject.org/brief-yoctoprojectqs/index.html) This process take some time, or check out ref.-manual/ images..

The image is in the tmp file/deploy

1) Running the Image on QEMU (Quick Emulator) if not running on actual board.

```Bash
runqemu 
```






#### For the Raspberry Pi [3](https://raspinterest.wordpress.com/2016/11/30/yocto-project-on-raspberry-pi-3/)

1) We need bare minimum above 3 clones for building Linux for Raspberry Pi 3
   
– poky
– meta-openembedded
– meta-raspberrypi

As Poki has been already cloned, let's only clone the meta-openembedded and the meta-raspberrypi (checking out to main):

```Bash
git clone git://github.com/openembedded/meta-openembedded.git

git clone https://github.com/agherzan/meta-raspberrypi.git
```


2) Preparing the build configuration

```Bash
source poky/oe-init-build-env raspi-build
```

3) Let add some configuration lines to Config files:


```Bash
echo 'MACHINE = "raspberrypi3"' >> conf/local.conf
echo 'PREFERRED_VERSION_linux-raspberrypi = "4.%"' >> conf/local.conf
echo 'DISTRO_FEATURES_remove = "x11 wayland"' >> conf/local.conf
echo 'DISTRO_FEATURES_append = " systemd"' >> conf/local.conf
echo 'VIRTUAL-RUNTIME_init_manager = "systemd"' >> conf/local.conf
```

4)  and we add to the bblayers.conf file following:


```Bash
  /meta-openembedded/meta-oe \
  /sources/meta-openembedded/meta-multimedia \
  /sources/meta-raspberrypi \
```

5)  We then build the image

```Bash
bitbake ..
```

## For Writing image to SD Card (they changed the image type 'sdimg' to 'wic.bz2')

```Bash
bzip2 -dk rpi-test-image-raspberrypi3.wic.bz2 (ideally this will unbzip2 this file..)
dd if=rpi-test-image-raspberrypi3.wic of=/dev/sdd bs=1M status=progress (if this doesn't work then try with Raspberry Imager with the .wic file extrated)
```


rpi-test-image-raspberrypi3.wic.bz2 

[HOWTO](https://www.emcraft.com/som/imx8m-mini-som/flash-sd-card-with-linux-image)

--- 

`source poky/oe-init-build-env build-RaspPi`, `bitbake rpi-test-image`, `runqemu qemuarm`, `runqemu qemuarm nographic`


bblayers.conf

```Bash
# POKY_BBLAYERS_CONF_VERSION is increased each time build/conf/bblayers.conf
# changes incompatibly
POKY_BBLAYERS_CONF_VERSION = "2"

BBPATH = "${TOPDIR}"
BBFILES ?= ""

BBLAYERS ?= " \
  /home/dcoldeira/NauticOS/Image/sources/poky/meta \
  /home/dcoldeira/NauticOS/Image/sources/poky/meta-poky \
  /home/dcoldeira/NauticOS/Image/sources/poky/meta-yocto-bsp \
  /home/dcoldeira/NauticOS/Image/sources/meta-openembedded/meta-oe \
  /home/dcoldeira/NauticOS/Image/sources/meta-openembedded/meta-networking \
  /home/dcoldeira/NauticOS/Image/sources/meta-openembedded/meta-multimedia \
  /home/dcoldeira/NauticOS/Image/sources/meta-openembedded/meta-python \
  /home/dcoldeira/NauticOS/Image/sources/meta-raspberrypi \
  /home/dcoldeira/NauticOS/Image/sources/meta-flutter \
  /home/dcoldeira/NauticOS/Image/sources/meta-clang \
  "
```

add 
```CLANGSDK = "1"``` into local.config
