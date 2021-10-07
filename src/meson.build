core = shared_library(
  'core',
  'core.c',
  include_directories : inc,
  install : true)

engine = executable(
  'engine',
  'main.c',
  include_directories : inc,
  link_with : core,
  install : true)
