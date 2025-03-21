# rocksdb library build notes

## Windows

### Windows x86_64

```sh
cmake ^
-DCMAKE_BUILD_TYPE=RelWithDebInfo ^
-S . ^
-B build ^
-G Ninja ^
-DFAIL_ON_WARNINGS=OFF ^
-DROCKSDB_BUILD_SHARED=OFF ^
-DROCKSDB_LITE=OFF ^
-DWITH_ALL_TESTS=OFF ^
-DWITH_BENCHMARK_TOOLS=OFF ^
-DWITH_CORE_TOOLS=OFF ^
-DWITH_GFLAGS=OFF ^
-DWITH_TOOLS=OFF ^
-DWITH_PERF_CONTEXT=OFF ^
-DPORTABLE=ON
```

## Linux

Make sure to use the osquery-toolchain so that settings are correctly detected.
You will have to edit the main CMakeLists.txt of RocksDB. Take a look at
`cmake/toolchain.cmake` to see how to do it.

### Linux x86_64

```sh
cmake \
	-DCMAKE_BUILD_TYPE=RelWithDebInfo \
	-S . \
	-B build \
	-G Ninja \
	-DFAIL_ON_WARNINGS=OFF \
	-DROCKSDB_BUILD_SHARED=OFF \
	-DROCKSDB_LITE=OFF \
	-DWITH_ALL_TESTS=OFF \
	-DWITH_BENCHMARK_TOOLS=OFF \
	-DWITH_CORE_TOOLS=OFF \
	-DWITH_GFLAGS=OFF \
	-DWITH_TOOLS=OFF \
	-DWITH_PERF_CONTEXT=OFF \
	-DPORTABLE=ON \
	-DFORCE_SSE42=ON \
	-DWITH_LIBURING=OFF
```

### Linux AArch64

```bash
cmake \
	-DCMAKE_BUILD_TYPE=RelWithDebInfo \
	-S . \
	-B build \
	-G Ninja \
	-DFAIL_ON_WARNINGS=OFF \
	-DROCKSDB_BUILD_SHARED=OFF \
	-DROCKSDB_LITE=OFF \
	-DWITH_ALL_TESTS=OFF \
	-DWITH_BENCHMARK_TOOLS=OFF \
	-DWITH_CORE_TOOLS=OFF \
	-DWITH_GFLAGS=OFF \
	-DWITH_TOOLS=OFF \
	-DWITH_PERF_CONTEXT=OFF \
	-DWITH_LIBURING=OFF \
	-DPORTABLE=ON \
	-DHAS_ARMV8_CRC:BOOL=OFF \
	-DWITH_IOSTATS_CONTEXT=OFF
```

## macOS

### macOS x86_64

```sh
cmake \
	-DCMAKE_BUILD_TYPE=RelWithDebInfo \
	-S . \
	-B build \
	-G Ninja \
	-DFAIL_ON_WARNINGS=OFF \
	-DROCKSDB_BUILD_SHARED=OFF \
	-DROCKSDB_LITE=OFF \
	-DWITH_ALL_TESTS=OFF \
	-DWITH_BENCHMARK_TOOLS=OFF \
	-DWITH_CORE_TOOLS=OFF \
	-DWITH_GFLAGS=OFF \
	-DWITH_TOOLS=OFF \
	-DWITH_PERF_CONTEXT=OFF \
	-DPORTABLE=ON \
	-DFORCE_SSE42=ON \
	-DCMAKE_OSX_SYSROOT=/Applications/Xcode_13.0.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk \
	-DCMAKE_OSX_DEPLOYMENT_TARGET=10.14 \
	-DCMAKE_OSX_ARCHITECTURES=x86_64
```

### macOS ARM (M1, M2, etc.)

```sh
cmake \
	-DCMAKE_BUILD_TYPE=RelWithDebInfo \
	-S . \
	-B build \
	-G Ninja \
	-DFAIL_ON_WARNINGS=OFF \
	-DROCKSDB_BUILD_SHARED=OFF \
	-DROCKSDB_LITE=OFF \
	-DWITH_ALL_TESTS=OFF \
	-DWITH_BENCHMARK_TOOLS=OFF \
	-DWITH_CORE_TOOLS=OFF \
	-DWITH_GFLAGS=OFF \
	-DWITH_TOOLS=OFF \
	-DWITH_PERF_CONTEXT=OFF \
	-DPORTABLE=ON \
	-DHAVE_SSE42:BOOL=OFF \
	-DWITH_IOSTATS_CONTEXT=OFF \
	-DCMAKE_OSX_SYSROOT=/Applications/Xcode_13.0.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk \
	-DCMAKE_OSX_DEPLOYMENT_TARGET=10.15 \
	-DCMAKE_OSX_ARCHITECTURES=arm64
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
