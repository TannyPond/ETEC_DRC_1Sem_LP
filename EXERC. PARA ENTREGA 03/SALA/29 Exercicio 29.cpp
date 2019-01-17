#include<iostream>
#include<iomanip>
#include<windows.h>

using namespace std;

int main()
{
	cout<<"***************** Exercício 29 - SALA *****************" <<endl;
	cout<<"E1P em que o usuario entra com um numero, eo programa verifica" <<endl;
	cout<<"se o numero eh TRIANGULAR" <<endl <<endl; 
	
	int n1, n2, n3;
	
	n3 = 1;
	
	cout<<"Digite um numero qualquer: ";
	cin>> n1;
	
	n2 = n3 * (n3+1) * (n3+2);
	
	while(n2 < n1)
	{
		n3 = n3+1;
		n2 = n3*(n3+1)*(n3+2);
	}
	if(n2 == n1)
	{
		cout<<"O numero " <<n1 <<" eh um numero TRIANGULAR!" <<endl <<endl;
	}
	else
	{
		cout<<"O numero " <<n1 <<" NAO eh um numero TRIANGULAR!" <<endl <<endl;
	}	
	system("pause");
}

	
	
