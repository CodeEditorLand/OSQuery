# popt

## Linux

Patch the configure.ac file to use the gettext version 0.17 on the system; also
remove the unsupported usage of `AM_GNU_GETTEXT_REQUIRE_VERSION`

```sh
sed -i 's/0\.19\.8/0\.17/g' configure.ac
sed -i '/AM_GNU_GETTEXT_REQUIRE_VERSION/d' configure.ac
```

Generated with the following commands:

```sh
export TOOLCHAIN=/usr/local/osquery-toolchain
export PKG_CONFIG_LIBDIR=${TOOLCHAIN}/usr/lib/pkgconfig
export PKG_CONFIG_PATH=
export PKG_CONFIG_SYSROOT_DIR=${TOOLCHAIN}
export CFLAGS="--sysroot ${TOOLCHAIN}"
export CXXFLAGS="${CFLAGS}"
export LDFLAGS="${CFLAGS}"
export CC="${TOOLCHAIN}/usr/bin/clang"

./autogen.sh
./configure --disable-shared --enable-static
```

Then build with:

```
make
```

And keep track of the preprocessor defines used, which will have to be put in
our CMakeLists.txt

Then copy

```sh
cp ./config.h ../config/linux/config.h
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
