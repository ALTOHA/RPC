#include <bits/stdc++.h>

using namespace std;

int main(){
	double A, P1, P2, R, pi = 3.1416, op1, op2;
	
	scanf("%lf %lf", &A,&P1);
	scanf("%lf %lf", &R, &P2);
	
	op1 = A/P1;
	
	op2 = pi*pow(R, 2) / P2;
	
	if(op1 < op2)
		printf("Whole pizza\n");
		
	else 
		printf("Slice of pizza\n");
	
	
	return 0;
}
