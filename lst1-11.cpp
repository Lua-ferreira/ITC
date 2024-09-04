/*Faça um programa que conte de 10 a 3, mostrando na tela, e calcula e mostra a
soma desses números, primeiramente usando laço while() e depois com o laço for().*/

#include <iostream>
#include <locale.h>
using namespace std;

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    int n=10, s=0;
    
    while (n>=3)
    {
          cout<< n << " ";
          n=n-1;
    }
    
    for (n=10; n>=3; n--)
        s=n+s;
        
    cout<< "\nA soma de todos os números é " << s << endl;
    
    system ("pause");
}
