/* file      : tests/basic/driver.c
 * license   : Apache License 2.0; see accompanying LICENSE file
 */

#include <assert.h>

#include <openssl/ssl.h>

int
main ()
{
  assert (OPENSSL_init_ssl (0 /* opts */, NULL /* settings */) == 1);

  return 0;
}
