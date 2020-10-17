# inclui  < iostream >
usando   namespace  std ;

struct  No {
	int dado;
	struct  N�o * prox;
};

struct  Pilha {
	N�o * topo;
};

Pilha * init () {
	Pilha * p = nova Pilha;
	p-> topo = NULL ;
	return p;
}

int  isEmpty (Pilha * p) {
	return (p-> topo == NULL );
}

void  push (Pilha * p, int v) {
	N�o * n�o = novo N�o;
	no-> dado = v;
	n�o-> prox = p-> topo ;
	p-> topo = n�o;
}

int  pop (Pilha * p) {
	int ret;
	N�o * n�o = p-> topo ;
	ret = no-> dado ;
	p-> topo = n�o-> prox ;
	gr�tis (n�o);
	return ret;
}

void  print (Pilha * p) {
	N�o n�o;
	n�o = p-> topo ;
	enquanto (n�o! = NULL ) {
		cout << no-> dado << endl;
		n�o = n�o-> prox ;
	}
	cout << " ------------------------ " << endl;
}

 �ltimo int (Pilha * p) {
  int ret;
	N�o n�o;
	n�o = p-> topo ;
		ret = no-> dado ;
    return ret;
}

int  contagem (Pilha * p) {
	int qtde = 0 ;
	N�o n�o;
	n�o = p-> topo ;
	enquanto (n�o! = NULL ) {
        qtde ++;   
		n�o = n�o-> prox ;
	}
	return qtde;
}

void  freePilha (Pilha * p) {
	N�o * n�o = p-> topo ;
	enquanto (n�o! = NULL ) {
		N�o * temp = n�o-> prox ;
		gr�tis (n�o);
		n�o = temp;
	}
	livre (p);
}

int  main ( int argc, char ** argv)
{
	Pilha * pilhaFloat;
	pilhaFloat = init ();
	Pilha * pilhaFloatAtend;
	pilhaFloatAtend = init ();
	int ultimoValor = 0 ;
	int valorAtual = 0 ;
	status interno = 0 ;
	
	cout << " Tamanho da fila: " << contagem (pilhaFloat) << endl;
	cout << " 0. Sair. " << endl;
	cout << " 1. Gerar senha. " << endl;
	cout << " 2. Realizar atendimento. " << endl;
	cin >> status;
	
	enquanto (status! = 0 ) {
	    if (status == 1 )
	    {
	        cout << " Senha Adicionada. " << endl;
	        valorAtual = valorAtual + 1 ;
	        push (pilhaFloat, valorAtual);
	    }
	    if (status == 2 )
	    {
	        se ( isEmpty (pilhaFloat)) {
                cout << " Sem senha para atendimento. " << endl;
	        }
	        else {
	            ultimoValor = �ltimo (pilhaFloat);
	        push (pilhaFloatAtend, ultimoValor);
	        cout << " Atendimento realizado: " ;
	        cout << ultimoValor << endl;
	        pop (pilhaFloat);
	        }
	    }
	    cout << " Tamanho da fila: " << contagem (pilhaFloat) << endl;
        cout << " 0. Sair. " << endl;
	    cout << " 1. Gerar senha. " << endl;
	    cout << " 2. Realizar atendimento. " << endl;
	    cin >> status;
	    while (status == 0 && count (pilhaFloat)> 0 ) {
	        cout << " N�o pode finalizar at� acabar a fila. " << endl;
	        cout << " 0. Sair. " << endl;
	        cout << " 1. Gerar senha. " << endl;
	        cout << " 2. Realizar atendimento. " << endl;
	        cin >> status;
	    }
    }
    
    cout << " Quantidade de senhas atendidas: " << count (pilhaFloatAtend) << endl;

	freePilha (pilhaFloat);
	freePilha (pilhaFloatAtend);
	return  0 ;
}