#include<stdio.h>
#define PI 3.14159
int main()
{
    int r;
    double v;
    scanf("%d",&r);
    r=(4.0/3)*PI*r*r*r;
    printf("VOLUME = %.3f\n",v);
    return 0;
}