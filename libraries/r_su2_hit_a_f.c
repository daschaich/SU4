/**************  r_su2_hit_a_f.c  (in su3.a) **********************
*									*
*  right multiply an matrix_f by the adjoint of an su2 matrix 	*
*/

#include "../include/config.h"
#include "../include/complex.h"
#include "../include/su3.h"

void right_su2_hit_a_f(su2_matrix *u,int p,int q,matrix_f *link)
{
  /* link <-  link * u adj */
  /* The 0 column of u-adjoint matches column p of the SU(3) matrix */
  /* The 1 column of u-adjoint matches column q of the SU(3) matrix */
  /* C. DeTar 18 Oct 1990 */

  register int m;

  for (m = 0; m < NCOL; m++)
    mult_su2_mat_vec_elem_a(u, &(link->e[m][p]), &(link->e[m][q]));

} /* r_su2_hit_a_f.c */

