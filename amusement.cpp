#include <bits/stdc++.h>

using namespace std;

int main(){
	int tam_seq, val_seq[1005], i, res, res2, pos;
	
	while(scanf("%d", &tam_seq) != EOF){
		
		for(i=1; i<=tam_seq; i++){
			scanf("%d", &val_seq[i]);
		}		
		res = val_seq[tam_seq] - val_seq[tam_seq-1];
		
		if(tam_seq == 1 || tam_seq == 2)
			printf("1\n");
			
		else{
			
			for(i=tam_seq-1; i>1; i--){
				res2 = val_seq[i] - val_seq[i-1];
	
				
				if(res != res2){
					pos = i;
					break;
				}
				else if(i == 2){
					pos = 1;
				}
			}
			
			printf("%d\n", pos);
		}
	}
	return 0;
}
