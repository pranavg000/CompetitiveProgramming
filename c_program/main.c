#include <stdio.h>
#include <ctype.h>



int main(void)
{int count=5;
    double *p = (double*)malloc(count*sizeof(double));
double *q = NULL;
for (int i=0; i<count; i++) {
p[i] = i*10;
printf("%lf, ", p[i]);
}
p += 2;
q=p;
free(p);
printf("%lf ",*(q-2));
return 0;
}
