# thrift library build notes

## Linux

Integrate the osquery-toolchain; you can use the `cmake/toolchain.cmake` as a
reference.

```sh
cmake \
	-S . \
	-B b \
	-DCMAKE_BUILD_TYPE=Release \
	-DBUILD_TESTING=OFF \
	-G Ninja \
	-DBoost_USE_STATIC_LIBS=ON \
	-DBoost_INCLUDE_DIR=/path/to/osquery/libraries/cmake/source/boost/src/libs/config/include/ \
	-DBUILD_SHARED_LIBS=OFF \
	-DWITH_OPENSSL=ON \
	-DWITH_ZLIB=ON \
	-DOSQUERY_TOOLCHAIN_SYSROOT=/usr/local/osquery-toolchain
```

## macOS

### macOS x86_64

```sh
cmake \
	-S . \
	-B b \
	-DBUILD_SHARED_LIBS=OFF \
	-DBoost_USE_STATIC_LIBS=ON \
	-DBoost_INCLUDE_DIR=path/to/osquery/libraries/cmake/source/boost/src/libs/config/include/ \
	-DWITH_OPENSSL=ON \
	-DWITH_ZLIB=ON \
	-DBUILD_COMPILER=OFF \
	-DBUILD_C_GLIB=OFF \
	-DBUILD_JAVA=OFF \
	-DBUILD_JAVASCRIPT=OFF \
	-DBUILD_NODEJS=OFF \
	-DBUILD_KOTLIN=OFF \
	-DBUILD_PYTHON=OFF \
	-DCMAKE_BUILD_TYPE=Release \
	-DCMAKE_OSX_SYSROOT=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.3.sdk \
	-DCMAKE_OSX_DEPLOYMENT_TARGET=10.14 \
	-DCMAKE_OSX_ARCHITECTURES=x86_64 \
	-DOPENSSL_ROOT_DIR=/usr/local/Cellar/openssl@1.1/1.1.1s
```

### macOS ARM (M1, M2, etc.)

Pre-requisite: `brew install openssl@1.1`

```sh
cmake \
	-S . \
	-B b \
	-DBUILD_SHARED_LIBS=OFF \
	-DBoost_USE_STATIC_LIBS=ON \
	-DBoost_INCLUDE_DIR=path/to/osquery/libraries/cmake/source/boost/src/libs/config/include \
	-DWITH_OPENSSL=ON \
	-DWITH_ZLIB=ON \
	-DBUILD_COMPILER=OFF \
	-DBUILD_C_GLIB=OFF \
	-DBUILD_JAVA=OFF \
	-DBUILD_JAVASCRIPT=OFF \
	-DBUILD_NODEJS=OFF \
	-DBUILD_KOTLIN=OFF \
	-DBUILD_PYTHON=OFF \
	-DCMAKE_BUILD_TYPE=Release \
	-DCMAKE_OSX_SYSROOT=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX13.sdk \
	-DCMAKE_OSX_DEPLOYMENT_TARGET=10.15 \
	-DCMAKE_OSX_ARCHITECTURES=arm64 \
	-DOPENSSL_ROOT_DIR=/opt/homebrew/Cellar/openssl@1.1/1.1.1s
```

## Windows

### Windows x86-64

```cmd
cmake ^
  -S . ^
  -B b ^
  -DBUILD_SHARED_LIBS=OFF ^
  -DBoost_USE_STATIC_LIBS=ON ^
  -DWITH_OPENSSL=ON ^
  -DWITH_ZLIB=ON ^
  -DBUILD_COMPILER=OFF ^
  -DBUILD_C_GLIB=OFF ^
  -DBUILD_JAVA=OFF ^
  -DBUILD_JAVASCRIPT=OFF ^
  -DBUILD_NODEJS=OFF ^
  -DBUILD_KOTLIN=OFF ^
  -DBUILD_PYTHON=OFF ^
  -DCMAKE_BUILD_TYPE=Release ^
  -G "Visual Studio 16 2019" ^
  -A x64
```

### Windows ARM64

```cmd
cmake ^
  -S . ^
  -B b ^
  -DBUILD_SHARED_LIBS=OFF ^
  -DBoost_USE_STATIC_LIBS=ON ^
  -DWITH_OPENSSL=ON ^
  -DWITH_ZLIB=ON ^
  -DBUILD_COMPILER=OFF ^
  -DBUILD_C_GLIB=OFF ^
  -DBUILD_JAVA=OFF ^
  -DBUILD_JAVASCRIPT=OFF ^
  -DBUILD_NODEJS=OFF ^
  -DBUILD_KOTLIN=OFF ^
  -DBUILD_PYTHON=OFF ^
  -DCMAKE_BUILD_TYPE=Release ^
  -G "Visual Studio 16 2019" ^
  -A ARM64
```
