# libudev

## Linux

Using Ubuntu 14.04 (glibc 2.12)

```sh
ldd --version
ldd (GNU libc) 2.12.2
```

You will need to install:

```sh
sudo apt-get install gtk-doc-tools gperf
```

Generated with the following commands:

```sh
export PATH=/usr/local/osquery-toolchain/usr/bin:$PATH
export CFLAGS="--sysroot /usr/local/osquery-toolchain"
export CXXFLAGS="${CFLAGS}"
export LDFLAGS="${CFLAGS}"
export CC=clang

./autogen.sh
./configure --enable-static --without-selinux --enable-gtk-doc-html=no --disable-gudev --disable-introspection
```

You should see output similar to:

```text
        udev 174
        ========

        prefix:                 /usr
        sysconfdir:             ${prefix}/etc
        sbindir:                ${exec_prefix}/sbin
        libdir:                 ${exec_prefix}/lib
        rootlibdir:             ${exec_prefix}/lib
        libexecdir:             ${exec_prefix}/libexec
        datarootdir:            ${prefix}/share
        mandir:                 ${datarootdir}/man
        includedir:             ${prefix}/include
        include_prefix:         /usr/include
        systemdsystemunitdir:
        firmware path:          \"/lib/firmware/updates/\", \"/lib/firmware/\"

        compiler:               clang
        cflags:                 --sysroot /usr/local/osquery-toolchain
        ldflags:                --sysroot /usr/local/osquery-toolchain
        xsltproc:               /usr/bin/xsltproc
        gperf:                  /usr/bin/gperf

        logging:                yes
        debug:                  no
        selinux:                no

        gudev:                  no
        gintrospection:         no
        keymap:                 yes
        hwdb:                   yes
          usb.ids:              /var/lib/usbutils/usb.ids
          pci.ids:              /usr/share/misc/pci.ids
        mtd_probe:              yes
        rule_generator:         no
        udev_acl:               no
        floppy:                 no
        edd:                    no
```

Then copy

```sh
cp ./config.h ../config/config.h
```

## Funding

This project is funded through
[NGI0 Commons Fund](https://nlnet.nl/commonsfund), a fund established by
[NLnet](https://nlnet.nl) with financial support from the European Commission's
[Next Generation Internet](https://ngi.eu) program. Learn more at the
[NLnet project page](https://nlnet.nl/project/Land).

| Land                                                                                                                                                   | PlayForm                                                                                                                                                    | NLnet                                                                                         | NGI0 Commons Fund                                                                                                                                    |
| ------------------------------------------------------------------------------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------- |
| [<img src="https://raw.githubusercontent.com/CodeEditorLand/Asset/refs/heads/Current/Logo/Land.svg" height="80px" alt="Land"  />](https://editor.land) | [<img src="https://raw.githubusercontent.com/PlayForm/Asset/refs/heads/Current/Logo/PlayForm.svg" height="80px" alt="PlayForm"  />](https://playform.cloud) | [<img width="240px" src="https://nlnet.nl/logo/banner.svg" alt="NLnet"  />](https://nlnet.nl) | [<img width="240px" src="https://nlnet.nl/image/logos/NGI0CommonsFund_tag_black_mono.svg" alt="NGI0 Commons Fund"  />](https://nlnet.nl/commonsfund) |
