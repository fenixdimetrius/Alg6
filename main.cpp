#include <iostream>
//#include <gsl/gsl_sf_bessel.h>
#include <gsl/gsl_linalg.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_blas.h>
#include <math.h>
#include <string>
#include <vector>
//Hello git!
int n = 1000;
double eps;
 gsl_vector * norm( gsl_vector * x)
{
    if(gsl_blas_dnrm2(x)>1)
    {
        //gsl_ve
        for (int i=0; i<int(x->size); i++)
        gsl_vector_set(x,i,gsl_vector_get (x, i)/gsl_blas_dnrm2(x));   // x[i]= x[i]/gsl_blas_dnrm2(x);
    }
    return x;
}





int main (void)
{

    int I = 0;
    int k = 0;
    float S = 0;

    gsl_vector * x = gsl_vector_alloc (n);
    gsl_vector * x0 = gsl_vector_alloc (n); // создаем вектор
                                           // с размерностью n

    gsl_vector * v = gsl_vector_alloc (n); // создаем вспомогательный
                                           //вектор
                                           // с размерностью n

 for (int i = 0; i < n; i++)// заполняем вектор
    {
        gsl_vector_set (v, i, 1.23 + i);
    }

  x0 = norm(v);  // нормируем

 double Th0 = sqrt(2);
 double w=0;
 double fm=-1;
 std::string  tg = "abs";

 double e[4] = {1/2.0,1/4.0,1/6.0,1/8.0};
 std::string E[4] = {"1/2","1/4","1/6","1/8"};

 for (int i=0; i < sizeof(e); i++)
  {
     eps = e[i];
     std::cout<<E[i]<<std::endl;
     x = x0;

     while(2*pow(Th0,2/pow(eps,2)) > S+I)
     {

     }



  }

//  size_t i,j;

//  gsl_matrix *m = gsl_matrix_alloc (10, 10);

//  for (i = 0; i < 10; i++)
//    for (j = 0; j < 10; j++)
//      gsl_matrix_set (m, i, j, sin (i) + cos (j));

//  for (j = 0; j < 10; j++)
//    {
//      gsl_vector_view column = gsl_matrix_column (m, j);
//      double d;

//      d = gsl_blas_dnrm2 (&column.vector);

//      printf ("matrix column %zu, norm = %g\n", j, d);
//    }

//  std::cout<<m->size1<<std::endl;
//  gsl_matrix_free (m);

  return 0;
}
