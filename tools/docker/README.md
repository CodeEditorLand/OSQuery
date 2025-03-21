# Docker Images for Osquery Testing

This configuration generates a matrix of osquery versions across different
(Linux) operating systems. These images can be used for testing query results
and osquery management servers.

## Download Images

Generated images can be accessed at
[HTTPS://hub.docker.com/r/osquery/osquery](https://hub.docker.com/r/osquery/osquery).

To run an image:

```shell
docker run --rm osquery/osquery:5.2.3-centos7 osqueryi 'select * from os_version'
```

## Build

To build the container images:

```shell
./build.sh
```

### Push

To push the generated containers:

```shell
docker push --all-tags osquery/osquery
```

Currently @directionless and @zwass have admin access and can add a single
additional user (who already has push access to the osquery repo) upon request.
Note that we are limited to 3 total users with the Docker free plan.

### Versions

To set the version/OS matrix, edit the `versions`, `deb_platforms`, and
`rpm_platforms` variables in the `build.sh` script.

## Funding

This project is funded through
[NGI0 Commons Fund](https://nlnet.nl/commonsfund), a fund established by
[NLnet](https://nlnet.nl) with financial support from the European Commission's
[Next Generation Internet](https://ngi.eu) program. Learn more at the
[NLnet project page](https://nlnet.nl/project/Land).

| Land                                                                                                                                                   | PlayForm                                                                                                                                                    | NLnet                                                                                         | NGI0 Commons Fund                                                                                                                                    |
| ------------------------------------------------------------------------------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------- |
| [<img src="https://raw.githubusercontent.com/CodeEditorLand/Asset/refs/heads/Current/Logo/Land.svg" height="80px" alt="Land"  />](https://editor.land) | [<img src="https://raw.githubusercontent.com/PlayForm/Asset/refs/heads/Current/Logo/PlayForm.svg" height="80px" alt="PlayForm"  />](https://playform.cloud) | [<img width="240px" src="https://nlnet.nl/logo/banner.svg" alt="NLnet"  />](https://nlnet.nl) | [<img width="240px" src="https://nlnet.nl/image/logos/NGI0CommonsFund_tag_black_mono.svg" alt="NGI0 Commons Fund"  />](https://nlnet.nl/commonsfund) |
