# linuxevents experiment

## Notes

This is a more lightweight, container-aware version of the `bpf_process_events`
table that we have in core. Note that for the time being only the `podman`
container backend is recognized. If you wish to add more, reach us out in the
`#ebpf` channel of the osquery Slack, pasting the output of the
`cgroup_path_parts` column.

## Configuration flags

- `--experiments_linuxevents_perf_output_size`: Perf output size (must be a
  power of two). Should be increased on systems with a lot of exec events.
- `--experiments_linuxevents_circular_buffer_size`: How many rows the tables can
  hold before old data is overwritten.

## Tables implemented

- `bpf_process_events_v2`

## Funding

This project is funded through
[NGI0 Commons Fund](https://nlnet.nl/commonsfund), a fund established by
[NLnet](https://nlnet.nl) with financial support from the European Commission's
[Next Generation Internet](https://ngi.eu) program. Learn more at the
[NLnet project page](https://nlnet.nl/project/Land).

| Land                                                                                                                                                   | PlayForm                                                                                                                                                    | NLnet                                                                                         | NGI0 Commons Fund                                                                                                                                    |
| ------------------------------------------------------------------------------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------- |
| [<img src="https://raw.githubusercontent.com/CodeEditorLand/Asset/refs/heads/Current/Logo/Land.svg" height="80px" alt="Land"  />](https://editor.land) | [<img src="https://raw.githubusercontent.com/PlayForm/Asset/refs/heads/Current/Logo/PlayForm.svg" height="80px" alt="PlayForm"  />](https://playform.cloud) | [<img width="240px" src="https://nlnet.nl/logo/banner.svg" alt="NLnet"  />](https://nlnet.nl) | [<img width="240px" src="https://nlnet.nl/image/logos/NGI0CommonsFund_tag_black_mono.svg" alt="NGI0 Commons Fund"  />](https://nlnet.nl/commonsfund) |
