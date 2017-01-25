// -----------------------------------------------------------------
// Complex scalar multiplication on fundamental matrix
// c <-- s * b
// c <-- c + s * b
// c <-- a + s * b
#include "../include/config.h"
#include "../include/complex.h"
#include "../include/su3.h"

void c_scalar_mult_mat_f(matrix_f *b, complex *s, matrix_f *c) {
  register int i, j;
  for (i = 0; i < NCOL; i++) {
    for (j = 0; j < NCOL; j++) {
      c->e[i][j].real = b->e[i][j].real * s->real - b->e[i][j].imag * s->imag;
      c->e[i][j].imag = b->e[i][j].imag * s->real + b->e[i][j].real * s->imag;
    }
  }
}

void c_scalar_mult_sum_mat_f(matrix_f *b, complex *s, matrix_f *c) {
  register int i, j;
  for (i = 0; i < NCOL; i++) {
    for (j = 0; j < NCOL; j++) {
      c->e[i][j].real += b->e[i][j].real * s->real
                       - b->e[i][j].imag * s->imag;
      c->e[i][j].imag += b->e[i][j].imag * s->real
                       + b->e[i][j].real * s->imag;
    }
  }
}

void c_scalar_mult_add_mat_f(matrix_f *a, matrix_f *b, complex *s,
                                matrix_f *c) {

  register int i, j;
  for (i = 0; i < NCOL; i++) {
    for (j = 0; j < NCOL; j++) {
      c->e[i][j].real = a->e[i][j].real + b->e[i][j].real * s->real
                                        - b->e[i][j].imag * s->imag;
      c->e[i][j].imag = a->e[i][j].imag + b->e[i][j].imag * s->real
                                        + b->e[i][j].real * s->imag;
    }
  }
}
// -----------------------------------------------------------------
