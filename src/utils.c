#include "R.h"
#include "R_ext/Rdynload.h"
#include "Rdefines.h"

void hello_you(char **name) {
    printf("Hello, %s!\n", name[0]);
}

void sum(int *a, int *b, int*sum)
{
	// printf("Hello %d,%d\n", *a,*b);
	// *a = *a * *b;
	// printf("Hello %d,%d\n", *a,*b);
	*sum = *a + *b;
}

void foo(int *nin, double *x)
{
	int n = nin[0];

	int i;

	for (i=0; i<n; i++)
		x[i] = x[i] * x[i];
}

void findIdenticalExons(int *exon1, int *exon2, int *identical)
{
	if ((exon1[0] == exon2[0]) & exon1[1] == exon2[1])
		identical[0] = 1;
	else
		identical[0] = 0;
}

// R_NativePrimitiveArgType hello_youArgs[1] = {STRSXP};
// R_NativePrimitiveArgType sumArgs[2] = {INTSXP,INTSXP};
// R_CMethodDef cMethods[] =
// {
//     {"hello_you", (DL_FUNC)&hello_you, 1, hello_youArgs},
//     {"sum", (DL_FUNC)&sum, 1, sumArgs},
//     {NULL,NULL, 0}
// };

// void R_init_hello_you(DllInfo *dll)
// {
//     R_registerRoutines(dll,cMethods,NULL,NULL,NULL);
// }



//dyn.load("test.so")
//.C("sum", as.integer(3), as.integer(4), as.integer(0))
