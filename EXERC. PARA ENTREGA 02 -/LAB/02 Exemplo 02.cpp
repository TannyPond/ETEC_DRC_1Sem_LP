#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout << "****EXEMPLO 2 LABORATORIO****" << endl << endl << endl; // Programa para calcular a m�dia e exibir informa��es , com if encadeado
	
	//declarando vari�veis
	float n1, n2, n3, n4, mf;
		
	cout <<"Entre com a 1a. nota: "; //Mensagem para o usu�rio digitar a nota
	cin >> n1; //armazendando nota em n1
	cout <<"Entre com a 2a. nota: "; //Mensagem para o usu�rio digitar a nota
	cin >> n2; //armazendando nota em n2
	cout <<"Entre com a 3a. nota: "; //Mensagem para o usu�rio digitar a nota
	cin >> n3; //armazendando nota em n3
	cout <<"Entre com a 4a. nota: "; //Mensagem para o usu�rio digitar a nota
	cin >> n4; //armazendando nota em n4
	
	mf = (n1 + n2 + n3 + n4)/4; // calculo da m�dia final 
	
	// In�cio de uma Estrutura de Decis�o cascateada
	if(mf>=7) // se a m�dia for maior ou igual a 7, exibe mensagem aprovado		
	{
		cout << "M�dia Final: " << mf << " ALUNO APROVADO!!!" <<endl <<endl;
	}else
		if (mf<3) //se a m�dia for menor que 3, exibe mensagem reprovado	
		{
			cout << "M�dia Final: " << mf << " ALUNO REPROVADO!!!" <<endl <<endl;	
		}else // sen�o for nenhuma das op��es anteriores, onde a m�dia varia no intervalo de 3 a 6, exibe mensagem Recupera��o,	
		{
			cout << "M�dia Final: " << mf << " ALUNO RECUPERACAO!!!" <<endl <<endl;	
		}
	system("pause");
}
