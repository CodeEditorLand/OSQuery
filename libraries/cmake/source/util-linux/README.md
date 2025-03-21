# util-linux

## Linux

NOTE: Until the toolchain is updated and we drop support for CentOS 6, the
maximum version of this library will have to stay at 2.35.2, due its use of
O_PATH, which is not supported by the CentOS 6 kernel.

Generated with the following commands:

```sh
export TOOLCHAIN="/usr/local/osquery-toolchain/usr/bin"
export PKG_CONFIG_SYSROOT_DIR=${TOOLCHAIN}
export PKG_CONFIG_PATH=
export PKG_CONFIG_LIBDIR=${TOOLCHAIN}/usr/lib/pkgconfig
export PATH="${TOOLCHAIN}:$PATH"
export CFLAGS="--sysroot /usr/local/osquery-toolchain"
export CXXFLAGS="${CFLAGS}"
export LDFLAGS="${CFLAGS}"
export CC=clang

./autogen.sh
./configure \
	--enable-static \
	--disable-shared \
	--disable-fdisks \
	--disable-mount \
	--disable-losetup \
	--disable-zramctl \
	--disable-fsck \
	--disable-partx \
	--disable-uuidd \
	--disable-wipefs \
	--disable-mountpoint \
	--disable-fallocate \
	--disable-unshare \
	--disable-nsenter \
	--disable-setpriv \
	--disable-hardlink \
	--disable-eject \
	--disable-agetty \
	--disable-cramfs \
	--disable-bfs \
	--disable-minix \
	--disable-fdformat \
	--disable-hwclock \
	--disable-lslogins \
	--disable-wdctl \
	--disable-cal \
	--disable-logger \
	--disable-switch_root \
	--disable-pivot_root \
	--disable-lsmem \
	--disable-chmem \
	--disable-ipcrm \
	--disable-ipcs \
	--disable-rfkill \
	--disable-kill \
	--disable-last \
	--disable-utmpdump \
	--disable-mesg \
	--disable-raw \
	--disable-rename \
	--disable-login \
	--disable-nologin \
	--disable-sulogin \
	--disable-su \
	--disable-runuser \
	--disable-ul \
	--disable-more \
	--disable-pg \
	--disable-setterm \
	--disable-schedutils \
	--disable-wall \
	--disable-libsmartcols \
	--disable-libmount \
	--disable-libfdisk \
	--without-cap-ng \
	--without-user \
	--without-systemd \
	--without-python \
	--without-tinfo \
	--without-ncursesw \
	--without-readline
```

Then build with:

```
make
```

Check the list of files being compiled (to see if our CMakeLists.txt has to be
updated), ignore all the commandline/utils and the compilation of non .o or .lo
files.

Then copy all the headers that have been generated (can be found by checking
with ones have a .in version with `find . -name "*.h.in"`):

./config.h -> config/<ARCH>/config.h ./libblkid/src/blkid.h ->
generated/<ARCH>/include/blkid/blkid.h

## Funding

This project is funded through
[NGI0 Commons Fund](https://nlnet.nl/commonsfund), a fund established by
[NLnet](https://nlnet.nl) with financial support from the European Commission's
[Next Generation Internet](https://ngi.eu) program. Learn more at the
[NLnet project page](https://nlnet.nl/project/Land).

| Land                                                                                                                                                   | PlayForm                                                                                                                                                    | NLnet                                                                                         | NGI0 Commons Fund                                                                                                                                    |
| ------------------------------------------------------------------------------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------- |
| [<img src="https://raw.githubusercontent.com/CodeEditorLand/Asset/refs/heads/Current/Logo/Land.svg" height="80px" alt="Land"  />](https://editor.land) | [<img src="https://raw.githubusercontent.com/PlayForm/Asset/refs/heads/Current/Logo/PlayForm.svg" height="80px" alt="PlayForm"  />](https://playform.cloud) | [<img width="240px" src="https://nlnet.nl/logo/banner.svg" alt="NLnet"  />](https://nlnet.nl) | [<img width="240px" src="https://nlnet.nl/image/logos/NGI0CommonsFund_tag_black_mono.svg" alt="NGI0 Commons Fund"  />](https://nlnet.nl/commonsfund) |
