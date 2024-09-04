/*Faça um programa que compute quantos são os múltiplos de 2, de 3 e de 5 entre 1 e
100; compute também quantos são os números múltiplos de 2, 3 e 5 ao mesmo tempo.
(utilize while()).*/

#include <iostream>
#include <locale.h>
using namespace std;

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    int m2=1, n2=0, m3=1, n3=0, m5=1, n5=0, mt=1, nt=0;
    
    while (m2<=100)
    {
          if (m2%2==0)
             n2=n2+1;
          m2=m2+1;
    }
    cout<< "O número de múltiplos de 2 é " << n2 << endl;
    
    while (m3<=100)
    {
          if (m3%3==0)
             n3=n3+1;
          m3=m3+1;
    }
    cout<< "\nO número de múltiplos de 3 é " << n3 << endl;
    
    while (m5<=100)
    {
          if (m5%5==0)
             n5=n5+1;
          m5=m5+1;
    }
    cout<< "\nO número de múltiplos de 5 é " << n5 << endl;
    
    
    while (mt<=100)
    {
          if (mt%2==0 && mt%3==0 && mt%5==0)
             nt=nt+1;
          mt=mt+1;
    }
    cout<< "\nO número de múltiplos de 2, 3 e 5, simultaneamente, é " << nt << endl;
    
    
    system ("pause");
}
