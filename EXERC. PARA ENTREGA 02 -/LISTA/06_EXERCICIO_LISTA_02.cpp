#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 6 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que leia o preco de um produto (P) e apresente a " <<endl;
	cout <<"mensagem: Em promocao!, caso o preco seja maior ou igual a R$ 50,00 e menor " <<endl;
	cout <<"ou igual a R$ 100,00. Caso contrario, devo aprsentar a mensagem: Preco normal!" <<endl <<endl;
	
	float P;
	
	cout <<"Digite o valor do produto: ";
	cin >> P;
	cout <<endl;
	
	if (P >= 50 && P <=100)
	{
		cout << "Produto EM PROMOCAO!" <<endl <<endl;
	} else{
		cout << "Produto com PRECO NORMAL!" <<endl <<endl;
	}
	system ("pause");
}
