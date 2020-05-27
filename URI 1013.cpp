#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int maior;

	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);

	maior = a;
	if(a < b || a < c){
		if(b < c){
			maior = c;
		}else{
			maior = b;
		}
	}

	printf("%i eh o maior\n", maior);

	return 0;
}