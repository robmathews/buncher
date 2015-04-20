# Loads mkmf which is used to make makefiles for Ruby extensions
require 'mkmf'

# Give it a name
extension_name = 'buncher'

# The destination
dir_config(extension_name)
# add some standard template libraries (headers only)
dir_config('boost','ext/boost/1.57.0')
# Do the work
create_makefile(extension_name)