#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
	int x, T1, T2, d;
	float C;
	
	cout<<"***************** Exercício 14 - SALA *****************" <<endl;
	cout<<"E1P em que o usuario exiba a tabela de conversao de graus Celsius para" <<endl;
	cout<< "Fahrenheit com o intervalo desejado. O programa deve solicitar ao usuario" <<endl;
	cout<< "um limite superior e um limite inferior do intervalo, e o decremento" <<endl <<endl;
	
	cout <<"Digite a maior Temperatura em Fahrenheint: ";
	cin >>T1;
	cout <<endl;
	cout <<"Digite a menor Temperatura em Fahrenheint: ";
	cin >>T2;
	cout <<endl;
 	cout <<"Digite o Decremento: ";
	cin >>d;
	cout<<endl;
	
	for(x=T1; x>=T2; x=x-d)
	{
		C--;
		C = (5*(x-32)/9);
		cout <<"A Temperatura convertida em Celsius: " <<C <<"oC";
		cout <<endl;
	}
	cout <<endl;
	system ("pause");
}
