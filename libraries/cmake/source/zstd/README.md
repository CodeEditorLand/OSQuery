# zstd library build notes

## Linux

### Common

Make sure you are working on a clean source folder

```bash
git reset --hard
git clean -ffdx
```

Integrate the osquery-toolchain in the main CMakeLists.txt file (see the
following file in osquery: `cmake/toolchain.cmake`). Then configure the project.

```sh
cmake \
	-DCMAKE_BUILD_TYPE=RelWithDebInfo \
	-S build/cmake \
	-B build/cmake/output \
	-G Ninja \
	-DOSQUERY_TOOLCHAIN_SYSROOT=/usr/local/osquery-toolchain \
	-DZSTD_BUILD_CONTRIB=OFF \
	-DZSTD_BUILD_PROGRAMS=OFF \
	-DZSTD_BUILD_SHARED=OFF \
	-DZSTD_BUILD_STATIC=ON \
	-DZSTD_BUILD_TESTS=OFF \
	-DZSTD_LEGACY_SUPPORT=OFF \
	-DZSTD_LZMA_SUPPORT=OFF \
	-DZSTD_MULTITHREAD_SUPPORT=ON \
	-DZSTD_ZLIB_SUPPORT=OFF
```

Build the project

```bash
cmake \
	--build build \
	-j $(nproc)
```

## macOS

### Intel, Apple Silicon

TARGET: Either x86_64 or arm64 DEPLOYMENT: 10.14 for x86_64, 10.15 for arm64

```sh
cmake \
	-DCMAKE_BUILD_TYPE=RelWithDebInfo \
	-DCMAKE_OSX_ARCHITECTURES= \
	-DCMAKE_OSX_DEPLOYMENT_TARGET= \
	build/cmake \
	-B build/cmake/output \
	-G Ninja \
	-DZSTD_BUILD_CONTRIB=OFF \
	-DZSTD_BUILD_PROGRAMS=OFF \
	-DZSTD_BUILD_SHARED=OFF \
	-DZSTD_BUILD_STATIC=ON \
	-DZSTD_BUILD_TESTS=OFF \
	-DZSTD_LEGACY_SUPPORT=OFF \
	-DZSTD_LZMA_SUPPORT=OFF \
	-DZSTD_MULTITHREAD_SUPPORT=ON \
	-DZSTD_ZLIB_SUPPORT=OFF < TARGET > -DCMAKE_OSX_SYSROOT=/Applications/Xcode_13.0.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk \
	< DEPLOYMENT > -S
```

## Windows

```sh
cmake ^
-G "Visual Studio 16 2019" ^
-A x64 ^
-S build/cmake ^
-B build/cmake/output ^
-DZSTD_BUILD_CONTRIB=OFF ^
-DZSTD_BUILD_PROGRAMS=OFF ^
-DZSTD_BUILD_SHARED=OFF ^
-DZSTD_BUILD_STATIC=ON ^
-DZSTD_BUILD_TESTS=OFF ^
-DZSTD_LEGACY_SUPPORT=OFF ^
-DZSTD_MULTITHREAD_SUPPORT=ON ^
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
