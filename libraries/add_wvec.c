// -----------------------------------------------------------------
// Add or subtract two wilson_vectors
// c <-- c + b
// c <-- c - b
// c <-- a + b
// c <-- a - b
#include "../include/config.h"
#include "../include/complex.h"
#include "../include/su3.h"

void sum_wvec(wilson_vector *b, wilson_vector *c) {
   register int i;
   for (i = 0; i < 4; i++)
     sum_vector(&(b->d[i]), &(c->d[i]));
}

void dif_wvec(wilson_vector *b, wilson_vector *c) {
   register int i;
   for (i = 0; i < 4; i++)
     dif_vector(&(b->d[i]), &(c->d[i]));
}

void add_wvec(wilson_vector *a, wilson_vector *b, wilson_vector *c) {
   register int i;
   for (i = 0; i < 4; i++)
     add_vector(&(a->d[i]), &(b->d[i]), &(c->d[i]));
}

void sub_wvec(wilson_vector *a, wilson_vector *b, wilson_vector *c) {
   register int i;
   for (i = 0; i < 4; i++)
     sub_vector(&(a->d[i]), &(b->d[i]), &(c->d[i]));
}
// -----------------------------------------------------------------
