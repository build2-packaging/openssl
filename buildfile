# file      : buildfile
# license   : OpenSSL and SSLeay Licenses; see accompanying LICENSE file

# Glue buildfile that "pulls" all the packages.

import pkgs = {*/ -upstream/ -upstream-build/}
./: $pkgs
