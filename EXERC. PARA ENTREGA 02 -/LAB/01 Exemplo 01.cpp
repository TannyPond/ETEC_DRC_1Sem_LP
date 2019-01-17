#include <iostream>

using namespace std;

int main()
{
	float t, n;
	
	cout <<"Digite um numero qqr: ";
	cin >> n;
	if (n>=10)
	{
		t = n + 5;
		cout <<"O total eh: " <<t <<endl <<endl;
	} else
	{
		t = n -2;
		cout <<"o total eh: " <<t <<endl <<endl;
	}
}
