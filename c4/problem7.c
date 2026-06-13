// wap to find root of qudaratic eq
#include <stdio.h>
int main(){
    float a,b,c,d=0,r1=0,r2=0,rp=0,ip=0;
   d=b*b-4*a*c;
   if (d==0)
   {
   r1= -b/(2*a);
   r2= -b/(2*a);
   }
   if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r1 = (-b - sqrt(d)) / (2 * a);
        printf("Root 1 = %.2lf\n", r1);
        printf("Root 2 = %.2lf\n", r1);
    }
    else{
        rp = -b / (2 * a);
       
        ip = sqrt(fabs(d)) / (2 * a); 
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", rp, ip);
        printf("Root 2 = %.2lf - %.2lfi\n", rp, ip);

    }
}