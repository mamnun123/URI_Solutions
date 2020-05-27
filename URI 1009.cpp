#include <iostream>

using namespace std;

int main(){
    float salary, value, totalSalary;
    char name[256];

    cin.getline(name,256);
    cin >> salary;
    cin >> value;
    totalSalary = salary + (float)(15*value/100);
    printf("TOTAL = R$ %0.2f\n",totalSalary);

    return 0;
}