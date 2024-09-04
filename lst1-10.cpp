/*Faça um programa que calcula a associação em paralelo de dois resistores R1 e R2
digitados pelo usuário via teclado. O programa fica pedindo estes valores e calculando
até que o usuário entre com um valor de resistência igual a zero (utilize laço
do{}while()). Fórmula: R=R1*R2/(R1+R2).*/

#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    float r, r1, r2;
    
    cout<< "Bem vindo!";
    
    do
    {
          cout<< "\nInsira o valor de R1: ";
          cin>> r1;
          cout<< "\nInsira o valor de R2: ";
          cin>> r2;
          r=(r1*r2)/(r1+r2);
          cout<< "\nO valor da resistência é " << r << ".\n\n";
    } while (r!=0);
 
    system ("pause");
}
