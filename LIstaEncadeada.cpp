#include <iostream>
using namespace std;

struct Funcionario
{
	int prontuario;
	string nome;
	double salario;
};

struct Lista
{
	Funcionario dado;
	struct Lista *prox;
};

Lista* init()
{
	return NULL;
}


int isEmpty(Lista* lista)
{
	return (lista == NULL);
}


Lista* insert(Lista* lista, Funcionario i)
{
	Lista* novo = new Lista;
	novo->dado = i;
	novo->prox = lista;
	return novo;
}


void print(Lista* lista)
{
	Lista* aux;
	aux = lista;
	while (aux != NULL)
	{
		cout << "Dado: " << aux->dado.nome << endl;
		aux = aux->prox;
	}
}

Lista* find(Lista* lista, int i)
{
	Lista* aux;
	aux = lista;
	while (aux != NULL && aux->dado.prontuario != i)
	{
		aux = aux->prox;
	}
	if (aux == NULL)
	{
		aux = new Lista;
		aux->dado.prontuario = -1;
		aux->prox = NULL;
	}
	return aux;
}

Lista* remove(Lista* lista, int i)
{
	Lista *ant = NULL;
	Lista *aux;
	
	aux = lista;
	while (aux != NULL && aux->dado.prontuario != i)
	{
		ant = aux;
		aux = aux->prox;
	}
	if (aux == NULL)
	{
		return lista;
	}
	if (ant == NULL) // era primeiro
	{
		lista = aux->prox;
	}
	else // estava no meio
	{
		ant->prox = aux->prox;
	}
	free(aux);
	return lista;
}

void freeList(Lista* lista)
{
	Lista *aux;
	aux = lista;
	while (aux != NULL)
	{
		Lista *ant = aux->prox;
		free(aux);
		aux = ant;
	}
}

int main(int argc, char** argv)
{
	Lista *minhaLista;
	minhaLista = init();
	
	cout << "Lista vazia: " << (isEmpty(minhaLista)?"Sim":"Nao") << endl;
	Funcionario novoF;
	novoF.prontuario = 1;
	novoF.nome = "doug";
	novoF.salario = 100.0;
	minhaLista = insert(minhaLista, novoF);
	
	cout << "Lista vazia: " << (isEmpty(minhaLista)?"Sim":"Nao") << endl;
	
	print(minhaLista);
	
	Lista *procurado = find(minhaLista,10); 
	if (procurado->dado.prontuario > -1)
	{
  	   cout << "Resultado da busca: " << procurado->dado.prontuario << endl;		
	}
    else
    {
   	   cout <<"Nao encontrado" << endl;
    }
    
    minhaLista = remove(minhaLista, 5);
    
    print(minhaLista);  
	
	freeList(minhaLista);  
	
	return 0;
}