#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 13 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que leia a quantidade de dinheiro existente no" <<endl;
	cout <<"caixa de uam empresa (CAIXA), a quantidade de produtos a ser comprada (QTD)" <<endl;
	cout <<"e o preco de cada unidade (PR). Caso o valor total da compra seja superior" <<endl;
	cout <<"a 80% do valor em caixa, a compra deve ser feita a prazo (3x), com juros de " <<endl;
	cout <<"10% sobre o valor total. Caso contrario, a ocmpra devera ser realizada a vista," <<endl;
	cout <<"onde a empresa recebera 5% de desconto. Apresentar a forma de pagamento escolhida" <<endl;
	cout <<"e o valor a ser pago (total a vista ou a prazo, dependendo da escolha realizada pelo programa" <<endl <<endl;
			
	float caixa, qtd, pr, compra, pg, pgp, j10, d5, cx80;
		
	cout << "Digite a quantidade de dinnheiro em CAIXA: R$ ";
	cin >> caixa;
	cout << endl;

	cout << "Digite a quantidade de produtos comprada: ";
	cin >> qtd;
	cout << endl;
	
	cout << "Digite o preco unitario: R$ ";
	cin >> pr;
	cout << endl;

	compra = pr * qtd;
	j10 = 1.10;
	d5 = 0.95;
	cx80 = (caixa * 0.8);

	if(compra > cx80)
		{
			pg = compra * j10;
			pgp = pg / 3;
			cout << "Compra a prazo (3X) no valor de R$ " <<pgp <<endl <<endl;
		}else{
			pg = compra * d5;
			cout << "Compra a vista, com 5% de desconto. Voce pagara R$ " <<pg <<endl <<endl;
		}
		system ("pause");
}
