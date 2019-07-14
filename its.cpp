#include <bits/stdc++.h>

using namespace std;

int main(){
	int personajes, buenos[1005], malos[1005], i, temp = 0;
	
	scanf("%d", &personajes);
	
	for(i=0; i<personajes; i++){
		scanf("%d", &buenos[i]);
	}
	
	for(i=0; i<personajes; i++){
		scanf("%d", &malos[i]);
	}
	
	temp = malos[0] - buenos[0];
	
	if(temp < 0)
		printf("0\n");
	else{
		for(i=0; i<personajes; i++){
			buenos[i] += temp;
			
			if(buenos[i] > malos[i]){
				printf("%d\n", temp);
				break;
			}
			else if(buenos[i] < malos[i]){
				printf("%d\n", temp+1);
				break;
			}
			
			
			if(i==personajes-1)
				printf("%d\n", temp);
				
		}
	}
	return 0;
}
