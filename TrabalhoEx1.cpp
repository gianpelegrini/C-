#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
using namespace std;

#define VET 10

int somatoria = 0;
int *psoma = &somatoria;
	
double mediaaritmetica = 0;
double *pmedia = &mediaaritmetica;
	
int numerosmaiores = 0;
int *pmaiores = &numerosmaiores;


	
void calcula_media(int p[])
{	
    for(int i=0; i<VET; i++)
	{		
		*psoma += p[i]; 
	}
	
	*pmedia = (double)*psoma/VET;
	cout << "\nMédia: " << *pmedia << endl;
	
}

void mostra_maior(int p[], int media)
{
	cout << "Números acima da média: ";
	for(int i=0; i<VET; i++)
		
		{
			if (p[i] > media){
				*pmaiores += 1;
				cout << p[i] << ",";
			}	
		}
	cout << "\nQuantidade de números acima da média: " << *pmaiores << endl;
}

int main(){
	
	setlocale(LC_ALL,"");
	int *v1;
	
		v1 = (int*)malloc(sizeof(int)*VET);
		
		for(int i=0; i<VET; i++)
		{
	   	   	cout << "Digite o valor do elemento para inserir no vetor: ";
			cin >> v1[i];

		}
		
		 calcula_media(v1);
		 mostra_maior(v1, *pmedia);	 
		 	
		free(v1);

	return 0;
}