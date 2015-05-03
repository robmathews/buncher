# Loads mkmf which is used to make makefiles for Ruby extensions
require 'mkmf'

# Give it a name
extension_name = 'buncher'

# still necessary in order to avoid compile errors like this:
# https://gist.github.com/48a9a212fd8f9011009f
# isnan - not a member of std:
# random library - doesn't exist
# and other incompatibilities
self.class::CONFIG['CXX'] = "#{self.class::CONFIG['CXX']} -std=c++11"
# The destination
dir_config(extension_name)
# Do the work
create_makefile('buncher/buncher')