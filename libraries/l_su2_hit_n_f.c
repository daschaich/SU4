/**************  l_su2_hit_n_f.c  (in su3.a) **********************
*									*
*  left multiply an matrix_f by an su2 matrix          		*
*/

#include "../include/config.h"
#include "../include/complex.h"
#include "../include/su3.h"

void left_su2_hit_n_f(su2_matrix *u,int p,int q,matrix_f *link)
{
  /* link <- u * link */
  /* The 0 row of the SU(2) matrix u matches row p of the SU(3) matrix */
  /* The 1 row of the SU(2) matrix u matches row q of the SU(3) matrix */
  /* C. DeTar 18 Oct 1990 */

  register int m;

  for (m = 0; m < NCOL; m++)
    mult_su2_mat_vec_elem_n(u, &(link->e[p][m]), &(link->e[q][m]));

} /* l_su2_hit_n_f.c */
