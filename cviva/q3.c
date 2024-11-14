#include <stdio.h>
#include <math.h>
int main() 
{
  float x, y, z, r1, r2, dis;
  printf ("Enter coefficients x,y,z: \n ");
  scanf("%f %f %f", &x, &y, &z);
  dis =y*y-4*x*z;
  if (dis>0)
  {
    r1= (-y+sqrt(dis))/(2 * x);
    r2 = (-y-sqrt(dis))/(2 * x);
    printf("Roots are real and different \n");
    printf("Root 1: %f \n", r1);
    printf("Root 2: %f \n", r2);
  } 
  else if (dis == 0) 
  {
        r1 = r2 = -y / (2 * x);
        printf("Roots are real and equal \n");
        printf("Root: %f \n", r1);
    } 
else
 {
        printf("Roots are complex and not same \n");
  }

    return 0;
}

