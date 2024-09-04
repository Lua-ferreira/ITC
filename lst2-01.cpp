#include <iostream>
#include <locale.h>
#include <conio.h> //declaração das bibliotecas
using namespace std;

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //configuração português
    int n, x; //declaração das variáveis
    
    do //início do laço para repetir o programa
    {
        cout<< "Digite um número para saber todos os ímpares antes dele: "; //instrução para o usuário
        cin>> n; //entrada do dado
    
        if (n%2==1)
        {
               for (x=n; x>=1; x--, x--)
                   cout<< x << " "; //se o número for ímpar, inicia no número dado pelo usuário e termina em 1
        }
    
        if (n%2==0)
        {
               for (x=n-1; x>=1; x--, x--)
                   cout<< x << " "; //se o número for par, inicia um número antes do número dado pelo usuário e termina em 1
        }

        cout<< "\n\n";
    
    system ("pause");
	       cout<< "Para sair, tecle ESC.\n";
	       
    } while (getch()!=27); //laço para repetir o programa
}
