#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()

{
	cout << "****EXERCIO 9 - SALA****" << endl << endl << endl; 
	cout <<"Elabore um programa que leia 3 numeros inteiros e " <<endl;
	cout <<"efetua o calculo da equacao de Segudno Grau" <<endl <<endl;
	
    float a, b, c, x1, x2, delta, delta2, raizp, raizn;

    cout <<"Entre com um numero diferente de zero para ";
    cout <<endl <<"o coeficiente 'a' de uma equacao de segundo grau: ";
    cin >> a;
    cout <<endl <<"Entre com um numero para o coeficente ";
    cout <<endl <<" 'b' da equacao de segundo grau: ";
    cin >> b;
    cout <<endl <<"Entre com um numrero para o coeficente";
    cout <<endl <<" 'c' da equacao de segundo grau: ";
    cin >> c;
    cout <<endl;
    
	delta = pow(b,2);
	delta2 = (delta-(4*a*c));
	
    if (a != 0)
    {
	    if (delta2<0)
    	{
        	cout <<"A equacao nao possui raizes reais" <<endl <<endl;
    	}
   		else
    	{
        	cout <<"Delta = " <<delta2 <<endl;
        	
        	raizp = sqrt(delta2);
        	x1=((-b+raizp)/(2*a));
        	
        	cout <<"x1 = " <<x1 <<endl;
        	
			raizn = sqrt(delta2); 
        	x2=((-b-raizn)/(2*a));
        	
        	cout <<"x2 = " <<x2 <<endl <<endl;
    	}
	}
	else
    {
        cout <<"Voce digitou zero. Impossivel ser uma equacao de 2o grau." <<endl <<endl;
    }	
	system ("pause");
}

