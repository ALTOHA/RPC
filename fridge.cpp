#include <bits/stdc++.h>

using namespace std;

int main(){
	bool ac = false;
	char digitos[1005];
	int digit[10] = {0}, min = INT_MAX, digito, i, min2 = INT_MAX, digito2;
	
	scanf("%s", digitos);
	
	for(i=0; i<strlen(digitos); i++){
		digit[digitos[i] - '0']++;
	}
	
	for(i=1; i<=10; i++){
		
		if(i == 10){
			i = 0;
			ac = true;	
		}
		
		if(min > digit[i]){
			min = digit[i];
			digito = i;
		}

	
		if(ac == true)
			break;

	}
	
	if(min > 0 && digito != 0){
		for(i=0; i<min+1; i++){
			printf("%d", digito);
		}
		printf("\n");
	}
	
	else if(digito == 0){

		for(i=1; i<=9; i++){
			
			if(min2 > digit[i]){
				min2 = digit[i];
				digito2 = i;
			}
	
		}		
	
		printf("%d", digito2);
		
		for(i=0; i<min+1; i++)
			printf("0");
			
		printf("\n");
	}
	else{
		printf("%d\n", digito);
	}
	return 0;
}
