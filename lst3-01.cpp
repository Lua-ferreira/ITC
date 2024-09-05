/*Escreva um programa que chama uma função que retorna 1 se o valor
passado como parâmetro for primo, e 0 caso o contrário. Mostre o
resultado na tela a partir da função principal.*/

#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int primo(int n)
{
	int P = 1, v;
	for (v=2; v<=n/2; v++)
	{
		if(n%v==0 || n<2)
        {
			P=0;
			break;
        }

	}
	return P;
}
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int n, c;
	do
	{
        cout<< "Digite o número: ";
        cin>> n;
        c = primo(n);
        if (c==1)
            cout<< "\nO número é primo\n";
        if (c==0)
            cout<< "\nO número não é primo\n";
        cout<< "Pressione ESC para sair ou qualquer tecla para tentar novamente.\n\n";
	} while (getch()!=27);
}
