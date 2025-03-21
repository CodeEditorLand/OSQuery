# libgpg-error

## Linux

Using Ubuntu 14.04 (glibc 2.12)

```sh
ldd --version
ldd (GNU libc) 2.12.2
```

You will need to install `makeinfo`:

```sh
sudo apt-get install texinfo
```

If your `gettext` is too old then apply:

```diff
diff --git a/autogen.sh b/autogen.sh
index e5ba5bf..1c225b4 100755
--- a/autogen.sh
+++ b/autogen.sh
@@ -416,11 +416,11 @@ fi
 if check_version $AUTOMAKE $automake_vers_num $automake_vers; then
   check_version $ACLOCAL $automake_vers_num $autoconf_vers automake
 fi
-if [ "$gettext_vers" != "n/a" ]; then
-  if check_version $GETTEXT $gettext_vers_num $gettext_vers; then
-    check_version $MSGMERGE $gettext_vers_num $gettext_vers gettext
-  fi
-fi
+#if [ "$gettext_vers" != "n/a" ]; then
+#  if check_version $GETTEXT $gettext_vers_num $gettext_vers; then
+#    check_version $MSGMERGE $gettext_vers_num $gettext_vers gettext
+#  fi
+#fi

 if [ "$DIE" = "yes" ]; then
     cat <<EOF
```

Generated with the following commands:

```sh
export CC=gcc

./autogen.sh
./configure --enable-static --disable-doc --disable-tests
(cd src && make)
```

Then copy

```sh
for header in code-from-errno code-to-errno err-codes-sym err-codes err-sources-sym err-sources errnos-sym gpg-error gpgrt mkerrcodes; do
	cp ./src/${header}.h ../generated/ARCH/${header}.h
done
cp ./config.h ../config/ARCH
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
