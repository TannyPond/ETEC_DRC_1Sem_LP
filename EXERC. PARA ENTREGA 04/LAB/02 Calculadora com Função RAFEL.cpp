#include <windows.h>
#include <cctype>
#include <iostream>
#include <iomanip>

using namespace std;

float r, a , b;

int adicao();
int subtracao();
int multiplicacao();
int divisao();
int entrada();
int saida();
int pausa();

int main (void)
{
	int opcao = 0;
	
	while(opcao != 5)
	{
		cout << setprecision(2);
		cout << setiosflags(ios::right);
		cout << setiosflags(ios::fixed);
		cout << endl;
		cout << "***************************" <<endl;
		cout << "   Programa Calculadora    " <<endl;
		cout << "       Menu Principal      " <<endl;
		cout << "***************************" <<endl;
		cout << " [1] - Adicao" <<endl;
		cout << " [2] - Subtracao" <<endl;
		cout << " [3] - Multiplicacao " <<endl;
		cout << " [4] - Divisao" <<endl;
		cout << " [5] - Sair" <<endl <<endl;
		cout << "Escolha uma opcao: ";
		cin  >> opcao;
		
		if(opcao !=5)
		{
			switch (opcao)
			{
				case 1: adicao();
				break;
				case 2: subtracao();
				break;
				case 3: multiplicacao();
				break;
				case 4: divisao();
				break;
			}
		}
	}
	return 0;
}


int entrada()
{
	cout <<endl <<"Entre com valor para da variavel [A]: ";
	cin  >> a;
	cout <<endl <<"Entre com valor para da variavel [B]: ";
	cin  >> b;
	return 0; 
}

int saida()
{
	cout <<endl <<"O resultado entre A e B = " <<setw(8);
	cout <<r <<endl;
	pausa();
	return 0;
}

int adicao()
{
	cout <<endl <<"Rotina da Adicao" <<endl;
	cout <<"-----------------------" <<endl;
	entrada();
	r = a + b;
	saida();
	return 0;
}

int subtracao()
{
	cout <<endl <<"Rotina da Subtracao" <<endl;
	cout <<"--------------------------" <<endl;
	entrada();
	r = a - b;
	saida();
	return 0;
}

int multiplicacao()
{
	cout <<endl <<"Rotina da Multiplicacao" <<endl;
	cout <<"------------------------------" <<endl;
	entrada();
	r = a * b;
	saida();
	return 0;
}

int divisao()
{
	cout <<endl <<"Rotina da Divisao" <<endl;
	cout <<"------------------------" <<endl;
	entrada();
	
	if(b==0)
	{
		cout <<endl;
		cout <<"Divisao nao eh possivel!" <<endl <<endl;
		pausa();
	}
	else
	{
	r = a/b;
	saida();
	}
	return 0;
}

int pausa()
{
	char letra;
	cout <<endl;
	cout <<"Tecle <C> + <ENTER> para Continuar ...." ;
	
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'C');
	return 0;
}


