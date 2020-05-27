#include<stdio.h>
int main()
{
  double salary, value, totalSalary;
  char name;
  scanf("%s %lf %lf",&name,&salary,&value);

  totalSalary = salary + value * .15;
  printf("TOTAL = R$ %.2lf\n",totalSalary);
  return 0;
}