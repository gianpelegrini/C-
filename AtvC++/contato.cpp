#include <iostream>
using namespace std;
#include <time.h>
 #include <locale.h>

class Data
{
	private: 	
	   int dia;
	   int mes;
	   int ano;	
    public:
    	Data(int dia, int mes, int ano)
		{
			this->dia = dia;
			this->mes = mes;
			this->ano = ano;
		}
		Data()
		{
			this->dia = 0;
			this->mes = 0;
			this->ano = 0;
		}
    	void setDia(int dia)
    	{
			this->dia = dia;
		}
		void setMes(int mes)
    	{
			this->mes = mes;
		}
		void setAno(int ano)
    	{
			this->ano = ano;
		}
		int getDia()
		{
			return this->dia;
		}
		int getMes()
		{
			return this->mes;
		}
		int getAno()
		{
			return this->ano;
		}
		string getData()
		{
		    return "oi";
		}
		Data* dia_seguinte()
		{
			int diasNoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
			Data *d1 = new Data(this->dia, this->mes, this->ano);
			
			if (d1->ano%4 == 0)
			{
				diasNoMes[1]++;
			}
			
			d1->dia++;
			if (d1->dia > diasNoMes[d1->mes-1])
			{
				d1->dia = 1;
				if (++d1->mes > 12)
				{
					d1->mes = 1;
					d1->ano++;
				}
			}
			
			return d1;
		}
};

class Contato{
    private:
        string email;
        string nome;
        string dtnasc;
        string telefone;

    public: 
    
    
        Contato(string email, string nome, string dtnasc, string telefone)
        {
          this->email = email;
          this->nome = nome;
          this->dtnasc = dtnasc;
          this->telefone = telefone;
        }
        
        Contato()
        {
          this->email = "";
          this->nome = "";
          this->dtnasc = "";
          this->telefone = "";

        }
        
        void setEmail(string email){
          this-> email = email;  
        }
        
        void setNome(string nome){
          this-> nome = nome;  
        }

        void setDtnasc(string dtnasc){
          this-> dtnasc = dtnasc;  
        }
        
        void setTelefone(string telefone){
          this-> telefone = telefone;  
        }
        
        string getEmail(){
            return this-> email;
        }
        string getNome(){
            return this-> nome;
        }
        
        string getDtnasc(){
            return this-> dtnasc;
        }
        
        string getTelefone(){
            return this-> telefone;
        }        
        
        string getDados(){
            return "Nome: " + this->nome + "\nEmail: " + this->email + "\nData de Nascimento " + this->dtnasc + "\nTelefone: " + this->telefone; 
        }
        
        int getIdade(int cDia, int cMes, int cAno){
  
            time_t mytime;
            mytime = time(NULL);
            struct tm tm = *localtime(&mytime);
            int idade = 0;
            
            if(tm.tm_mon + 1 > cMes)
            {
             idade = tm.tm_year + 1900 - cAno;
            }
            else if(tm.tm_mon + 1 == cMes){
                if(tm.tm_mday >= cDia){
                    idade = tm.tm_year + 1900 - cAno;
                }
                else{
                    idade = tm.tm_year + 1900 - cAno - 1;
                }
            }
            else if (tm.tm_mon + 1 < cMes){
                idade = tm.tm_year + 1900 - cAno;
            }
            return idade;
        }
};





int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Portuguese");
    string email = "";
    string nome = "";
    int dia = 0;
    int mes = 0;
    int ano = 0;
    string telefone = "";
    
    cout << "Digite seu email: ";
    cin >> email;
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Digite o dia em que você nasceu: ";
    cin >> dia;
    cout << "Digite o mes em que você nasceu: ";
    cin >> mes;  
    cout << "Digite o ano em que você nasceu: ";
    cin >> ano;   
    cout << "Digite o seu telefone: ";
    cin >> telefone;
    
    Data *nasc = new Data(dia, mes, ano);
    //cout << nasc->getData() << endl;
    Contato *dados = new Contato(""+email+"", ""+nome+"", ""+nasc->getData()+"", ""+telefone+"");
    cout << dados->getDados() << endl; 
    cout << "Idade: ";
    cout << dados->getIdade(nasc->getDia(), nasc->getMes(), nasc->getAno()) << endl; 

    
    //Data *amanha = nasc->dia_seguinte();
    //cout << amanha->getData() << endl;

	 
	return 0;
}