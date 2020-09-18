# inclui  < iostream >
usando  namespace  std ;
# inclui  < time.h >
# inclua  < locale.h >

classe  Data
{
	privado: 	
	   int dia;
	   int mes;
	   int ano;	
    público:
    	Dados ( int dia, int mes, int ano)
		{
			este -> dia = dia;
			this -> mes = mes;
			este -> ano = ano;
		}
		Dados ()
		{
			este -> dia = 0 ;
			este -> mes = 0 ;
			este -> ano = 0 ;
		}
    	void  setDia ( int dia)
    	{
			este -> dia = dia;
		}
		void  setMes ( int mes)
    	{
			this -> mes = mes;
		}
		void  setAno ( int ano)
    	{
			este -> ano = ano;
		}
		int  getDia ()
		{
			return  this -> dia ;
		}
		int  getMes ()
		{
			retornar  isso -> mes ;
		}
		int  getAno ()
		{
			retornar  este -> ano ;
		}
		string getData ()
		{
		    return  to_string ( this -> dia ) + " / " + to_string ( this -> mes ) + " / " + to_string ( this -> ano );
		}
		Dados * dia_seguinte ()
		{
			int diasNoMes [ 12 ] = { 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 };
			Dados * d1 = novos  Dados ( este -> dia , este -> mes , este -> ano );
			
			if (d1-> ano % 4 == 0 )
			{
				diasNoMes [ 1 ] ++;
			}
			
			d1-> dia ++;
			if (d1-> dia > diasNoMes [d1-> mes - 1 ])
			{
				d1-> dia = 1 ;
				if (++ d1-> mes > 12 )
				{
					d1-> mes = 1 ;
					d1-> ano ++;
				}
			}
			
			return d1;
		}
};

class  Contato {
    privado:
        string email;
        nome da string;
        string dtnasc;
        string telefone;

    público: 
    
    
        Contato (string email, string nome, string dtnasc, string telefone)
        {
          this -> email = email;
          this -> nome = nome;
          this -> dtnasc = dtnasc;
          este -> telefone = telefone;
        }
        
        Contato ()
        {
          this -> email = " " ;
          this -> nome = " " ;
          this -> dtnasc = " " ;
          este -> telefone = " " ;

        }
        
        void  setEmail (string email) {
          this -> email = email;  
        }
        
        void  setNome (nome da string) {
          this -> nome = nome;  
        }

        void  setDtnasc (string dtnasc) {
          this -> dtnasc = dtnasc;  
        }
        
        void  setTelefone (string telefone) {
          este -> telefone = telefone;  
        }
        
        string getEmail () {
            retornar  este -> email;
        }
        string getNome () {
            retorna  este -> nome;
        }
        
        string getDtnasc () {
            retornar  isso -> dtnasc;
        }
        
        string getTelefone () {
            devolver  este -> telefone;
        }        
        
        string getDados () {
            return  " Nome: " + this -> nome + " \ n Email: " + this -> email + " \ n Data de Nascimento " + this -> dtnasc + " \ n Telefone: " + this -> telefone ;
        }
        
        int  getIdade ( int cDia, int cMes, int cAno) {
  
            time_t mytime;
            mytime = time ( NULL );
            struct  tm  tm = * localtime (& mytime);
            int idade = 0 ;
            
            if ( tm . tm_mon + 1 > cMes)
            {
             idade = tm . ano_tm + 1900 - cAno;
            }
            else  if ( tm . tm_mon + 1 == cMes) {
                if ( tm . tm_mday > = cDia) {
                    idade = tm . ano_tm + 1900 - cAno;
                }
                else {
                    idade = tm . ano_tm + 1900 - cAno - 1 ;
                }
            }
            else  if ( tm . tm_mon + 1 <cMes) {
                idade = tm . ano_tm + 1900 - cAno;
            }
            voltar idade;
        }
};





int  main ( int argc, char ** argv)
{
	setlocale (LC_ALL, " português " );
    string email [ 10 ] = " " ;
    nome da string [ 10 ] = " " ;
    int dia [ 10 ];
    int mes [ 10 ];
    int ano [ 10 ];
    string telefone [ 10 ] = " " ;
    int idade [ 10 ];
    soma duplo = 0 ;
    mídia dupla = 0 ;
    int cont = 0 ;
    int maior = 0 ;
    int maisvelho = 0 ;
    
    
    para ( int i = 0 ; i <= 9 ; i ++) {
    cout << " Contato " << i + 1 << endl;
    cout << " Digite seu email: " ;
    cin >> email [i];
    cout << " Digite seu nome: " ;
    cin >> nome [i];
    cout << " Digite o dia em que você nasceu: " ;
    cin >> dia [i];
    cout << " Digite o mes em que você nasceu: " ;
    cin >> mes [i];  
    cout << " Digite o ano em que você nasceu: " ;
    cin >> ano [i];   
    cout << " Digite o seu telefone: " ;
    cin >> telefone [i];
    }

    // cout << nasc-> getData () << endl;


    Data * nasc = new Data [ 10 ];
    Contato * dados = novo Contato [ 10 ];
    para ( int i = 0 ; i <= 9 ; i ++) {
        
        
    
    nasc [i] = Dados (dia [i], mes [i], ano [i]);
        
    
    dados [i] = Contato ( " " + email [i] + " " , " " + nome [i] + " " , " " + nasc [i]. getData () + " " , " " + telefone [i ] + " " );
    
    
    cout << " \ n " << dados [i]. getDados () << endl;
    
    cout << " Idade: " ;
    
    idade [i] = dados [i]. getIdade (nasc [i]. getDia (), nasc [i]. getMes (), nasc [i]. getAno ());
    cout << idade [i] << endl; 
    soma + = idade [i];
    
    
    }
    mídia = soma / 10 ;
    cout << " \ n Média de idade dos contatos: " << media << endl;
    cout << " \ n Contatos com idade maior do que a média: " << endl;
    para ( int i = 0 ; i <= 9 ; i ++) {
        
        if (idade [i]> media) {
            cout << dados [i]. getNome () << endl;
            cont + = 1 ;
        } 
        
        if ((i == 9 ) && (cont == 0 ))
        {
            cout << " Nenhum " << endl;
        }
        
        if (idade [i]> = 18 ) {
            maior + = 1 ;
        }
        
        
        if (idade [i]> maisvelho) {
            maisvelho = idade [i];
        }
    }
    

    cout << " \ n Quantidade de contatos maiores de idade: " << maior << endl;
    cout << " \ n Contatos mais velhos: " << endl;
    para ( int i; i <= 9 ; i ++) {
        if (idade [i] == maisvelho) {
            cout << dados [i]. getNome () << endl;
            cout << dados [i]. getEmail () << endl;
            cout << dados [i]. getTelefone () << endl;
            cout << " \ n " ;
        }
    }
    
    
    
    
    
    
    // Data * amanha = nasc-> dia_seguinte ();
    // cout << amanha-> getData () << endl;

	 
	return  0 ;
}