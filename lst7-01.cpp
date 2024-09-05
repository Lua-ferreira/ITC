#include <iostream>
#include <math.h> //declarando bibliotecas
using namespace std;

int fatorial(int n)
{
	int p = 1;
	for (int i = 1; i <= n; i++)
		p = p * 1;
	return p; //função para achar o fatorial
}

int main()
{
	int x, n, fat, pot;
	float e=0;
	cout << "Digite o valor de x: ";
	cin >> x;  //insere o valor de x na equação
	cout << "Digite o valor de n: ";
	cin >> n;   //insere o valor de n na equação
	fat= fatorial(n);  //aplica o fatorial em n e armazena em fat
	for (int i = 0; i < n; i++)  //laço para calcular o valor de e até o n estipulado
	{
		e += pow(x,i)/fatorial(i);
	}
	cout << "O valor de E é: " << e << endl;
	return 0;

}
