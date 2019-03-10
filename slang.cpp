#include <bits/stdc++.h>

using namespace std;

int main(){
	map <string, int> lista1;
	map <string, int> lista2;
	map <string, int> lista3;
	map <string, int> lista4;
	map <string, int> lista5;
	map <string, int> lista6;
	map <string, int> lista7;
	map <string, int> lista8;
	map <string, int> lista9;
	map <string, int> lista10;
	map <string, int> :: iterator it;
	
	int num_lista, querry, i, pos, cont, cont1, cont2, j, q;
	string palabra;
	char ritmo[10000], c;
	
	lista1.clear();
	lista2.clear();
	lista3.clear();
	lista4.clear();
	lista5.clear();	
	lista6.clear();	
	lista7.clear();
	lista8.clear();
	lista9.clear();
	lista10.clear();
					
	cin >> palabra;
	scanf("%d", &num_lista);
	
	for(i=1; i<=num_lista; i++){
		while(scanf("%s%c", ritmo, &c)){
			if(i == 1){
				lista1[ritmo];
			}

			if(i == 2){
				lista2[ritmo];
			}
			if(i == 3){
				lista3[ritmo];
			}
			if(i == 4){
				lista4[ritmo];
			}
			if(i == 5){
				lista5[ritmo];
			}
			if(i == 6){
				lista6[ritmo];
			}
			if(i == 7){
				lista7[ritmo];
			}
			if(i == 8){
				lista8[ritmo];
			}
			if(i == 9){
				lista9[ritmo];
			}
			if(i == 10){
				lista10[ritmo];
			}
			
			if(c == '\n')
				break;	
		}	
	}
	scanf("%d", &querry);
	
	while(querry--){
		
		while(scanf("%s%c", ritmo, &c)){
			if(c == '\n')
				break;
		}		
		
		string ritmo2 = ritmo;
		
			
		for(i=1; i<=num_lista; i++){
			cont = cont1 = cont2= 0;			
			if(i == 1){
				for(it = lista1.begin(); it != lista1.end(); it++){
					j = it->first.size() - 1;
					for(q=palabra.size()-1; q>=0; q--){
						if(palabra[q] != it->first[j])
							break;
							
						if(j == 0)	
							cont = 1;
						
						j--;
					}
					
					j = it->first.size() -1;
					for(q=ritmo2.size() -1; q>=0; q--){
						if(ritmo2[q] != it->first[j])
							break;
							
						if(j == 0)
							cont1 = 1;
							
						j--;
					}
					
				}
				if(cont1 == 1 &&  cont == 1){
					cont2 = 1;
					break;
				}
			}
			cont = cont1 = cont2= 0;			
			i++;
			if(i == 2){
				for(it = lista2.begin(); it != lista2.end(); it++){
									
					j = it->first.size() - 1;
					for(q=palabra.size()-1; q>=0; q--){
						if(palabra[q] != it->first[j])
							break;
							
						if(j == 0)	
							cont = 1;
						
						j--;
					}
					
					j = it->first.size() -1;
					for(q=ritmo2.size() -1; q>=0; q--){
						if(ritmo2[q] != it->first[j])
							break;
							
						if(j == 0)
							cont1 = 1;
							
						j--;
					}
					
					
				}
				if(cont1 == 1 &&  cont == 1){
					cont2 = 1;
					break;
				}
			}
			cont = cont1 = cont2= 0;			
			i++;
			if(i == 3){
				for(it = lista3.begin(); it != lista3.end(); it++){
					j = it->first.size() - 1;
					for(q=palabra.size()-1; q>=0; q--){
						if(palabra[q] != it->first[j])
							break;
							
						if(j == 0)	
							cont = 1;
						
						j--;
					}
					
					j = it->first.size() -1;
					for(q=ritmo2.size() -1; q>=0; q--){
						if(ritmo2[q] != it->first[j])
							break;
							
						if(j == 0)
							cont1 = 1;
							
						j--;
					}
					
					
				}
				if(cont1 == 1 &&  cont == 1){
					cont2 = 1;
					break;
				}
			}
			cont = cont1 = cont2= 0;			
			i++;
			if(i == 4){
				for(it = lista4.begin(); it != lista4.end(); it++){
					j = it->first.size() - 1;
					for(q=palabra.size()-1; q>=0; q--){
						if(palabra[q] != it->first[j])
							break;
							
						if(j == 0)	
							cont = 1;
						
						j--;
					}
					
					j = it->first.size() -1;
					for(q=ritmo2.size() -1; q>=0; q--){
						if(ritmo2[q] != it->first[j])
							break;
							
						if(j == 0)
							cont1 = 1;
							
						j--;
					}
					
					
				}
				if(cont1 == 1 &&  cont == 1){
					cont2 = 1;
					break;
				}
			}
			cont = cont1 = cont2= 0;			
			i++;
			if(i == 5){
				for(it = lista5.begin(); it != lista5.end(); it++){
					j = it->first.size() - 1;
					for(q=palabra.size()-1; q>=0; q--){
						if(palabra[q] != it->first[j])
							break;
							
						if(j == 0)	
							cont = 1;
						
						j--;
					}
					
					j = it->first.size() -1;
					for(q=ritmo2.size() -1; q>=0; q--){
						if(ritmo2[q] != it->first[j])
							break;
							
						if(j == 0)
							cont1 = 1;
							
						j--;
					}
					
					
				}
				if(cont1 == 1 &&  cont == 1){
					cont2 = 1;
					break;
				}
			}
			cont = cont1 = cont2= 0;			
			i++;
			if(i == 6){
				for(it = lista6.begin(); it != lista6.end(); it++){
					j = it->first.size() - 1;
					for(q=palabra.size()-1; q>=0; q--){
						if(palabra[q] != it->first[j])
							break;
							
						if(j == 0)	
							cont = 1;
						
						j--;
					}
					
					j = it->first.size() -1;
					for(q=ritmo2.size() -1; q>=0; q--){
						if(ritmo2[q] != it->first[j])
							break;
							
						if(j == 0)
							cont1 = 1;
							
						j--;
					}
					
					
				}
				if(cont1 == 1 &&  cont == 1){
					cont2 = 1;
					break;
				}
			}
			cont = cont1 = cont2= 0;			
			i++;
			if(i == 7){
				for(it = lista7.begin(); it != lista7.end(); it++){
					j = it->first.size() - 1;
					for(q=palabra.size()-1; q>=0; q--){
						if(palabra[q] != it->first[j])
							break;
							
						if(j == 0)	
							cont = 1;
						
						j--;
					}
					
					j = it->first.size() -1;
					for(q=ritmo2.size() -1; q>=0; q--){
						if(ritmo2[q] != it->first[j])
							break;
							
						if(j == 0)
							cont1 = 1;
							
						j--;
					}
					
					
				}
				if(cont1 == 1 &&  cont == 1){
					cont2 = 1;
					break;
				}
			}
			cont = cont1 = cont2= 0;			
			i++;
			if(i == 8){
				for(it = lista8.begin(); it != lista8.end(); it++){
					j = it->first.size() - 1;
					for(q=palabra.size()-1; q>=0; q--){
						if(palabra[q] != it->first[j])
							break;
							
						if(j == 0)	
							cont = 1;
						
						j--;
					}
					
					j = it->first.size() -1;
					for(q=ritmo2.size() -1; q>=0; q--){
						if(ritmo2[q] != it->first[j])
							break;
							
						if(j == 0)
							cont1 = 1;
							
						j--;
					}
					
					
				}
				if(cont1 == 1 &&  cont == 1){
					cont2 = 1;
					break;
				}
			}
			cont = cont1 = cont2= 0;			
			i++;
			if(i == 9){
				for(it = lista9.begin(); it != lista9.end(); it++){
					j = it->first.size() - 1;
					for(q=palabra.size()-1; q>=0; q--){
						if(palabra[q] != it->first[j])
							break;
							
						if(j == 0)	
							cont = 1;
						
						j--;
					}
					
					j = it->first.size() -1;
					for(q=ritmo2.size() -1; q>=0; q--){
						if(ritmo2[q] != it->first[j])
							break;
							
						if(j == 0)
							cont1 = 1;
							
						j--;
					}
					
					
				}
				if(cont1 == 1 &&  cont == 1){
					cont2 = 1;
					break;
				}
			}
			cont = cont1 = cont2= 0;			
			i++;
			if(i == 10){
				for(it = lista10.begin(); it != lista10.end(); it++){
					j = it->first.size() - 1;
					for(q=palabra.size()-1; q>=0; q--){
						if(palabra[q] != it->first[j])
							break;
							
						if(j == 0)	
							cont = 1;
						
						j--;
					}
					
					j = it->first.size() -1;
					for(q=ritmo2.size() -1; q>=0; q--){
						if(ritmo2[q] != it->first[j])
							break;
							
						if(j == 0)
							cont1 = 1;
							
						j--;
					}
					
					
				}
				if(cont1 == 1 &&  cont == 1){
					cont2 = 1;
					break;
				}
			}
			
		}
		
	
		if(cont2 == 1)
			printf("YES\n");
			
		else 
			printf("NO\n");	
		
		cont = cont1 = cont2= 0;			
				
	}
	return 0;
}
