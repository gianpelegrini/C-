#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <locale.h>
using namespace std;

#define LIN 3
#define COL 3


void mostra_matrizes(int **x, int **y){
int i;
int j;

cout << "\n\n Matriz 1" << setw(21) << " Matriz 2" << endl;
for(i=0; i<LIN; ++i)
	{
		
	    for(j=0; j<COL; ++j)
	    {
            cout << x[i][j] << " | ";
		} 
		
		//espaço entre a primeira e a segunda matriz
		cout << setw(10);
		
	    for(j=0; j<COL; ++j)
	    {
            cout << y[i][j] << " | ";
		}
		cout << endl; 
	}	
}

void compara_matrizes(int **x, int **y){
int comparador = 1;	
	for(int i=0; i<LIN; ++i)
	{
		
	    for(int j=0; j<COL; ++j)
	    {
            if(x[i][j] != y[i][j]){
				comparador = 0;
			}
		} 

	}	
	cout << endl;
	if (comparador == 1){
		cout << " As matrizes são iguais\n";
	}
	else{
		cout << " As matrizes não são iguais\n";
	}

}

void popula_matrizes(int **x, int **y){
	cout << "Insira os valores da primeira matriz: " << endl;
	
	for(int i=0; i<LIN; ++i)
	{
		x[i] = new int[COL];
		for(int j=0; j<COL; ++j)
	    {
	    	cin >> x[i][j];
	    	
	    }
	}

	cout << "Insira os valores da segunda matriz: " << endl;	
	
	for(int i=0; i<LIN; ++i)
	{
		y[i] = new int[COL];
		for(int j=0; j<COL; ++j)
	    {
	    	cin >> y[i][j];
	    	
	    	
	    }
	}
}


int main()
{
	setlocale(LC_ALL,"");
   	
	int **mat1;
	int **mat2;
	

	mat1 = new int*[LIN];
	mat2 = new int*[LIN];
	
	
	popula_matrizes(mat1, mat2);
	mostra_matrizes(mat1, mat2);
	compara_matrizes(mat1, mat2);
	
		

	
	delete[] mat2;

	return 0;
}