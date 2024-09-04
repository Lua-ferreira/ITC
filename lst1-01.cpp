/*Faça um programa em C para ler dois números inteiros A e B e informar se A é
divisível por B*/

#include <iostream>
#include <locale.h>
using namespace std;

int main ()
{
     setlocale (LC_ALL, "Portuguese"); //configuração da língua portuguesa
     int A, B, R; //declaração de variáveis
     
     cout<< "Insira o dois números: \n"; //saída da instrução
     cin>> A >> B; //entrada das variáveis
     
     if (A % B == 0) //se o resto for igual a zero, A é divisível por B
     cout<< "\n" << A << " é divisível por " << B << "\n";
     
     else //se o resto for diferente de zero, A não é divisível por B
     cout<< "\n" << A << " não é divisível por " << B << "\n";
     
     system ("pause");
}
