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

test_property_tab_src = 'test-property-tab.c'
test_rb_segmented_bar_src = 'test-rb-segmented-bar.c'

deps = [glib, gtk, libgpod, libimobiledevice, libnemo, libplist, libxml]

libideviceinfo = shared_library(
  'ideviceinfo', libideviceinfo_sources,
  dependencies : deps,
  include_directories : rootdir,
  install : false
)

libnemo_ideviceinfo = shared_library(
  'nemo-ideviceinfo', libnemo_ideviceinfo_sources,
  dependencies : deps,
  include_directories : rootdir,
  link_with : libideviceinfo,
  install : true,
  install_dir: extensiondir
)

test_property_tab = executable(
  'test-property-tab', test_property_tab_src,
  dependencies : deps,
  include_directories : rootdir,
  link_with : libideviceinfo,
  install : false
)

test_rb_segmented_bar = executable(
  'test-rb-segmented-bar', test_property_tab_src,
  dependencies : deps,
  include_directories : rootdir,
  link_with : libideviceinfo,
  install : false
)

test('test-property-tab', test_property_tab)
test('test-rb-segmented-bar', test_rb_segmented_bar)
