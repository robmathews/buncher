# Loads mkmf which is used to make makefiles for Ruby extensions
require 'mkmf'

# Give it a name
extension_name = 'buncher'

self.class::CONFIG['CXX'] = "#{self.class::CONFIG['CXX']} -std=c++11"
# The destination
dir_config(extension_name)
# Do the work
create_makefile(extension_name)