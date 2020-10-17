# inclui  < iostream >
usando   namespace  std ;

struct  No {
	int dado;
	struct  Não * prox;
};

struct  Pilha {
	Não * topo;
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
	Não * não = novo Não;
	no-> dado = v;
	não-> prox = p-> topo ;
	p-> topo = não;
}

int  pop (Pilha * p) {
	int ret;
	Não * não = p-> topo ;
	ret = no-> dado ;
	p-> topo = não-> prox ;
	grátis (não);
	return ret;
}

void  print (Pilha * p) {
	Não não;
	não = p-> topo ;
	enquanto (não! = NULL ) {
		cout << no-> dado << endl;
		não = não-> prox ;
	}
	cout << " ------------------------ " << endl;
}

 último int (Pilha * p) {
  int ret;
	Não não;
	não = p-> topo ;
		ret = no-> dado ;
    return ret;
}

int  contagem (Pilha * p) {
	int qtde = 0 ;
	Não não;
	não = p-> topo ;
	enquanto (não! = NULL ) {
        qtde ++;   
		não = não-> prox ;
	}
	return qtde;
}

void  freePilha (Pilha * p) {
	Não * não = p-> topo ;
	enquanto (não! = NULL ) {
		Não * temp = não-> prox ;
		grátis (não);
		não = temp;
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
	            ultimoValor = último (pilhaFloat);
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
	        cout << " Não pode finalizar até acabar a fila. " << endl;
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