#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_valores, valores[200005], i, cont=0, val;
	
	while(scanf("%d", &num_valores) != EOF){
		
		for(i=1; i<=num_valores; i++){
			scanf("%d", &valores[i]);
		}
		for(i=1; i<=num_valores; i++){
			while(i != valores[i]){
				val = valores[i];
				
				valores[i] = valores[val];
				
				valores[val] = val;
				
				cont++;
			}
		}
		printf("%d\n", cont);
		cont=0;
	}
	
	return 0;
}
