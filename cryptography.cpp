#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char original[1000], cryptada[1000], desc[1000];
	int tamano, i, j=0, ascii, ori, tamano2=0;
	scanf ("%s %s", desc, cryptada); 
	
	tamano=strlen(desc);
	tamano2=strlen(cryptada);
	
	for (i=0; i<tamano; i++){
		if (i > tamano2-1){
			cryptada[i] = original[j];
			j++;
		}
		ascii=(cryptada[i]-65);
		ori=desc[i];
		
		if (ori>=ascii+65){
			original[i] = ori-ascii;
		}
		else {
			ori+=26;
			original[i] = ori-ascii;
		}
		printf ("%c", original[i]);
	}
	printf ("\n");
	return 0;
}
