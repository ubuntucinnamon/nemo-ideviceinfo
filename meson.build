project('nemo-ideviceinfo', 'c', version : '4.9.0')

gnome = import('gnome')

conf = configuration_data()

glib = dependency('glib-2.0', version : '>= 2.38')
gtk = dependency('gtk+-3.0', version : '>= 3.10')
libimobiledevice = dependency('libimobiledevice-1.0', version : '>= 1.1.7')
libnemo = dependency('libnemo-extension', version : '>= 3.0')
libplist = dependency('libplist', version : '>= 1.12')
libxml = dependency('libxml-2.0', version : '>= 2.6.30')

libgpod = dependency('libgpod-1.0', version : '>= 0.8.2', required : false)
if libgpod.found()
  conf.set('HAVE_LIBGPOD', 1)
endif

providerinfo = dependency('mobile-broadband-provider-info', required : false)
if providerinfo.found()
  conf.set('HAVE_MOBILE_PROVIDER_INFO', 1)
endif

datadir = join_paths(get_option('datadir'))
extensiondir = libnemo.get_pkgconfig_variable('extensiondir')
localedir = join_paths(get_option('localedir'))
rootdir = include_directories('.')

conf.set_quoted('DATADIR', datadir)
conf.set_quoted('EXTENSIONDIR', extensiondir)
conf.set_quoted('GETTEXT_PACKAGE', 'nemo-ideviceinfo')
conf.set_quoted('LOCALEDIR', localedir)
conf.set_quoted('PACKAGE_NAME', 'nemo-ideviceinfo')
configure_file(output : 'config.h',
               configuration : conf)

add_project_arguments('-DG_LOG_DOMAIN="nemo-ideviceinfo"', language : 'c')
add_project_arguments('-DHAVE_CONFIG_H', language: 'c')

subdir('data')
subdir('src')
