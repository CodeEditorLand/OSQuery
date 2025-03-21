# gflags library build notes

## Linux

### x86

Configure with:

```sh
cmake ../ -DCMAKE_BUILD_TYPE=Release -DBUILD_gflags_LIB=ON -DBUILD_gflags_nothreads_LIB=OFF -DGFLAGS_NAMESPACE=gflags -DCMAKE_SYSROOT=/usr/local/osquery-toolchain -DCMAKE_CXX_COMPILER=/usr/local/osquery-toolchain/usr/bin/clang++
```

### AArch64

Configure with:

```sh
cmake ../ -DCMAKE_BUILD_TYPE=Release -DBUILD_gflags_LIB=ON -DBUILD_gflags_nothreads_LIB=OFF -DGFLAGS_NAMESPACE=gflags -DCMAKE_SYSROOT=/usr/local/osquery-toolchain -DCMAKE_CXX_COMPILER=/usr/local/osquery-toolchain/usr/bin/clang++
```

## Windows

### x86-64

Configure with

```sh
cmake -G "Visual Studio 16 2019" -A x64 ../ -DBUILD_gflags_LIB=ON -DBUILD_gflags_nothreads_LIB=OFF -DGFLAGS_NAMESPACE=gflags
```

### ARM64

```sh
cmake -G "Visual Studio 16 2019" -A ARM64 ../ -DBUILD_gflags_LIB=ON -DBUILD_gflags_nothreads_LIB=OFF -DGFLAGS_NAMESPACE=gflags
```

## macOS

Generated with the following commands:

### macOS ARM (M1, M2, etc.)

```sh
cmake ../ -DCMAKE_BUILD_TYPE=Release -DBUILD_gflags_LIB=ON -DBUILD_gflags_nothreads_LIB=OFF -DGFLAGS_NAMESPACE=gflags -DCMAKE_OSX_DEPLOYMENT_TARGET=10.15 -DCMAKE_OSX_ARCHITECTURES=arm64
```

### macOS x86-64

```sh
cmake ../ -DCMAKE_BUILD_TYPE=Release -DBUILD_gflags_LIB=ON -DBUILD_gflags_nothreads_LIB=OFF -DGFLAGS_NAMESPACE=gflags -DCMAKE_OSX_DEPLOYMENT_TARGET=10.14
```

## All platforms

Copy the generated files under `include` from the build folder, to the
respective folders in the osquery source under
`libraries/cmake/source/gflags/generated`

Copy only once (it's the same for all platforms)

```text
include/gflags/gflags_completions.h -> generated/gflags/gflags_completions.h
```

Then copy for each os

```text
include/gflags/defines.h -> generated/<os>/<arch>/private/defines.h
include/gflags/gflags_declare.h -> generated/<os>/<arch>/public/gflags/gflags_declare.h
include/gflags/gflags.h -> generated/<os>/<arch>/public/gflags/gflags.h
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
