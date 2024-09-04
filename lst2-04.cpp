#include <iostream>
#include <locale.h>
#include <math.h>
#include <conio.h> //declaração das bibliotecas
using namespace std;

#define pi 3.14159 //define o valor de pi

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //configuração português
    double x, y, s, n, f=1, d, i; //declaração das variáveis
    
    do //início do laço para repetir o programa
    {
           cout<< "Digite um grau para saber o seno: "; //instrução para o usuário
           cin>> y; //entrada do dado
           x=y*pi/180; //converte graus para radianos
    
           for (n=0; n<=1000; n++)
           {
               d=(2*n)+1; //termo importante da fórmula
               for (i=1; i<=d; i++)
                   f = f * i;      //fatorial para o denominador
        
               s = s + ((pow(-1, n)/f)*pow(x, d)); //somatória da fórmula de Taylor
           }
    
           cout<< "\nO valor do seno de " << y << " pela série de Taylor é " << s << "\n"; //resposta pela fórmula
           cout<< "\nO valor mais preciso do seno de " << y << " é " << sin(x) << "\n\n"; //resposta pela função math
    
    system ("pause");
    cout<< "Para sair, tecle ESC.\n\n";
	       
    } while (getch()!=27); //laço para repetir o programa
}
