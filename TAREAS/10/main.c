#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char*argv[])
{
     double a, b, c, s,w, x1, x2, n, m, i1, i2, r1, k;
     a=atoi(argv[1]);
     b=atoi(argv[2]);
     c=atoi(argv[3]);
     if(a!=0){
          s=2*a;
          w=(b*b)-(4*a*c);
          if (w>=0){
               k=sqrt(w);
               x1=(b+k)/s;
               x2=(b-k)/s;
               printf("%.2lf\n", x1);
               printf("%.2lf\n", x2);
          }
          
     } else{
          n=(4*a*c)-(b*b);
          m=sqrt(n);
          i1=m/s;
          r1=b/s;
          printf("%.2lf+%.2lfi\n", r1,i1);
          printf("%.2lf-%.2lf\n", r1, i1);


     }
	
	return 0;
}