// -----------------------------------------------------------------
// Clear the given wilson_vector
#include "../include/config.h"
#include "../include/complex.h"
#include "../include/su3.h"

void clear_wvec(wilson_vector *dest) {
  register int i, j;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < DIMF; j++) {
      dest->d[i].c[j].real = 0.0;
      dest->d[i].c[j].imag = 0.0;
    }
  }
}
// -----------------------------------------------------------------
