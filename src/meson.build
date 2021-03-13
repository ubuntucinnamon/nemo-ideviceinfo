libideviceinfo_sources = [
  'ideviceinfo-property-page.c',
  'ideviceinfo-property-page.h',
  'nemo-ideviceinfo-resources.c',
  'nemo-ideviceinfo-resources.h',
  'rb-segmented-bar.c',
  'rb-segmented-bar.h'
]

libnemo_ideviceinfo_sources = [
  libideviceinfo_sources,
  'nemo-ideviceinfo.c',
  'nemo-ideviceinfo.h',
  'nemo-idevinfo.c',
  'nemo-afc2-warning-bar.c',
  'nemo-afc2-warning-bar.h',
]

deps = [glib, gtk, libgpod, libimobiledevice, libnemo, libplist, libxml]

libideviceinfo = shared_library(
  'ideviceinfo', libideviceinfo_sources,
  dependencies : deps,
  include_directories : rootdir,
  install: false
)

libnemo_ideviceinfo = shared_library(
  'nemo-ideviceinfo', libnemo_ideviceinfo_sources,
  dependencies : deps,
  include_directories : rootdir,
  link_with : libideviceinfo,
  install: true,
  install_dir: extensiondir
)
