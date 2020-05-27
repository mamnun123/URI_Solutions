#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){
    
    int r;
    
    std::cin >> r;
    
    printf("VOLUME = %.3f\n", (4.0/3.0)*3.14159*pow(r,3));
    return 0;
}