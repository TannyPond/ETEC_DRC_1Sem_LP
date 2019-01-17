#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 16 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que calcule e apresente quanto deve ser pago" <<endl;
	cout <<"por um produto considerado a leitura do preco de etiqueta (PE) e o " <<endl;
	cout <<"codigo da condicao de pagamento (CP)." <<endl <<endl;
			
	float vp, pe, vp1;
	int cp;
		
	cout << "Digite o preco da etiqueta: R$ ";
	cin >> pe;
	cout << endl;

	cout << "Digite o codigo da condicao de pagamento (1-4): ";
	cin >> cp;
	cout << endl;
	
	switch (cp)
	{
		case 1:
			vp = pe * 0.9;
			cout <<endl <<"A Vista em dinheiro ou cheque, com 10% de desconto." <<endl <<endl;
			cout <<"O valor a ser pago eh R$ " <<vp <<endl <<endl;
			break;
			
		case 2:
			vp = pe * 0.95;
			cout <<endl <<"A vista no cartao de credito, com 5% de desconto." <<endl <<endl;
			cout <<"O valor a ser pago eh R$ " <<vp <<endl <<endl;
			break;
		
		case 3:
			vp = pe /2;
			cout <<endl <<"Pagamento em 2x sem Juros." <<endl <<endl;
			cout <<"O valor do produto R$ " <<pe << " em 2x de R$" <<vp <<endl <<endl;
			break;
		
		case 4:
			vp = pe * 1.1;
			vp1 = vp /3;
			cout <<endl <<"Pagamento em 3X com 10% de Juros." <<endl <<endl;
			cout <<"O valor do produto R$ " <<vp << " , pago em 3x de R$ " <<vp1 <<endl <<endl;
			break;
		
		default:
			cout <<endl <<"Codito Invalido!" <<endl <<endl;
	}
		system ("pause");
}
