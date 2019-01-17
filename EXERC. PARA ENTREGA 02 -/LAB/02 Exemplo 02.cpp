#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout << "****EXEMPLO 2 LABORATORIO****" << endl << endl << endl; // Programa para calcular a média e exibir informações , com if encadeado
	
	//declarando variáveis
	float n1, n2, n3, n4, mf;
		
	cout <<"Entre com a 1a. nota: "; //Mensagem para o usuário digitar a nota
	cin >> n1; //armazendando nota em n1
	cout <<"Entre com a 2a. nota: "; //Mensagem para o usuário digitar a nota
	cin >> n2; //armazendando nota em n2
	cout <<"Entre com a 3a. nota: "; //Mensagem para o usuário digitar a nota
	cin >> n3; //armazendando nota em n3
	cout <<"Entre com a 4a. nota: "; //Mensagem para o usuário digitar a nota
	cin >> n4; //armazendando nota em n4
	
	mf = (n1 + n2 + n3 + n4)/4; // calculo da média final 
	
	// Início de uma Estrutura de Decisão cascateada
	if(mf>=7) // se a média for maior ou igual a 7, exibe mensagem aprovado		
	{
		cout << "Média Final: " << mf << " ALUNO APROVADO!!!" <<endl <<endl;
	}else
		if (mf<3) //se a média for menor que 3, exibe mensagem reprovado	
		{
			cout << "Média Final: " << mf << " ALUNO REPROVADO!!!" <<endl <<endl;	
		}else // senão for nenhuma das opções anteriores, onde a média varia no intervalo de 3 a 6, exibe mensagem Recuperação,	
		{
			cout << "Média Final: " << mf << " ALUNO RECUPERACAO!!!" <<endl <<endl;	
		}
	system("pause");
}
