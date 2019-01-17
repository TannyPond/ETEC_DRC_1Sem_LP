#include<iostream>
#include<iomanip>
#include<math.h>
#include<windows.h>

using namespace std;

int main()
{
	cout<<"***************** Exercício 16 - SALA *****************" <<endl;
	cout<<"E1P que leia o limite inferior e superior de um intervalo, e exiba todos os" <<endl;
	cout<<"numeros multiplos de 6. Suponha que todos os numeros digitados sejam de um intervalo crescente" <<endl <<endl; 
	
	int x, i , f, div , res=0;
		
		cout<<"Digite o valor inicial para o intervalo: ";
		cin>> i;
		cout<<"Digite o valor final para o intervalo: ";
		cin>> f;
		
		div = i%2;
		
		if(div==0)
		{
			i = i+2;
		}else{
		i = i+1;
	}
	for(x=i; i <=f; i=i+2)
	{
		res = res+i;
		cout<<endl <<i <<endl;
	}
	cout<<endl <<"A soma dos multiplos de 6 do intervalo eh: " <<res <<endl;
	
	
	system("pause");
}
