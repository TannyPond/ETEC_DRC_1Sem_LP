#include <iostream>
#include <windows.h>
#include <iomanip> //alinha colunas

using namespace std;

int main ()
{
	cout <<"************* EXERCÍCIO 02 - SALA *************" <<endl <<endl;
	cout <<"E1P que o usuario entra com um numero, e o programa";
	cout <<"faca a tabuada desse numero." <<endl <<endl;
	
	int n, i, r;
	
	cout <<"Voce quer fazer a tabuada de que numero?: ";
	cin >> n;
		
	for (i = 1; i <=10; i++)
	{
		r = n*i;
		cout <<setw(4) <<n <<" X " <<setw(2) <<i <<" = " <<setw(4)<<r <<endl;
	}	
	system ("pause");

}
