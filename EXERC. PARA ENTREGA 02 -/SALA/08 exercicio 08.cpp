#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout << "****EXERCIO 8 - SALA****" << endl << endl << endl; 
	cout <<"Elabore um programa em que o usuario entra com um numero inteiro de 1 a 12, e o " <<endl;
	cout <<"programa exibe o mes correspondente ao numero digitado. " <<endl <<endl;
	
	//declarando variáveis
	int mes;
	
	cout <<"Digite um numero (1-12): ";
	cin >> mes;
	cout <<endl;
	
	if(mes == 1)
	{
		cout <<"Janeiro" <<endl <<endl;
	}
	else
	{
		if(mes == 2)
		{
			cout <<"Fevereiro" <<endl <<endl;
		}
		else
		{
			if(mes == 3)
			{
				cout <<"Marco" <<endl <<endl;
			}
			else
			{
				if(mes == 4)
				{
					cout <<"Abril" <<endl <<endl;
				}
				else
				{
					if(mes == 5)
					{
						cout <<"Maio" <<endl <<endl;
					}
					else
					{
						if(mes ==6)
						{
							cout <<"Junho" <<endl <<endl;
						}
						else
						{
							if (mes == 7)
							{
								cout <<"Julho" <<endl <<endl;
							}
							else
							{
								if (mes == 8)
								{
									cout <<"Agosto" <<endl <<endl;
								}
								else
								{
									if(mes == 9)
									{
										cout <<"Setembro" <<endl <<endl;
									}
									else
									{
										if (mes == 10)
										{
											cout <<"Outubro" <<endl <<endl;
										}
										else
										{
											if(mes == 11)
											{
												cout <<"Novembro" <<endl <<endl;
											}
											else
											{
												if(mes == 12)
												{
													cout <<"Dezembro" <<endl <<endl;
												}
												else
												{
													cout <<"Mes nao existe!" <<endl <<endl;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	system ("pause");
}
