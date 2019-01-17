#include<iostream>
#include<iomanip>
#include<windows.h>

using namespace std;

int main()
{
	cout<< "********** TABUADA **********" <<endl <<endl;
	
	int n, i, r;
	
	cout<< "Entre com o valor da Tabuada: ";
	cin >> n;
	cout << endl;
	
	i = 1;
	
	do
	{
		r = n * i;
		cout<< setw(2) << n;
		cout<< " X ";
		cout<< setw(2) << i;
		cout<< " = ";
		cout<< setw(3) <<r <<endl;
		i = i++;
	}while(i <= 10);
	
	cout <<endl <<endl;
	system("pause");
}
