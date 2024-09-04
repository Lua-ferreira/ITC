#include <iostream>
#include <locale.h>
#include <conio.h> //declaração das bibliotecas
using namespace std;

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //configuração português
    int n, x;//declaração das variáveis
    
    do //início do laço para repetir o programa
    {
        cout<< "Digite um número para saber todos os pares antes dele: "; //instrução para o usuário
        cin>> n;//entrada do dado
    
        if (n%2==1)
        {
           x=0;
           while (x<(n-1))
           {
                 x=x+2;
                 cout<< x << " "; //se o número for ímpar, inicia em 0 e termina um número antes do número dado pelo usuário
           }
        }
        
        if (n%2==0)
        {
           x=0;
           while (x<n)
           {
                 x=x+2;
                 cout<< x << " "; //se o número for par, inicia em 0 e termina no número dado pelo usuário
           }
        }

        cout<< "\n\n";
    
    system ("pause");
	       cout<< "Para sair, tecle ESC.\n"; 
	       
    } while (getch()!=27); //laço para repetir o programa
}
