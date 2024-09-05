/*Escreva um programa que mostre na tela todos os números primos entre A
e B (informados pelo usuário). Este programa deverá utilizar a função que
verifica se um número é primo desenvolvida no exercício anterior.*/

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
		if(n%v==0)
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
	int a, b, c, d=0, n;
	do
	{
        cout<< "Digite um número: ";
        cin>> a;
        cout<< "Digite outro número: ";
        cin>> b;
        for(n=a; n<=b; n++)
        {
        	c = primo(n);
        	if (c==1)
            	cout<< n << " ";
    	}
        cout<< "\nPressione ESC para sair ou qualquer tecla para tentar novamente.\n\n";
	} while (getch()!=27);
}
