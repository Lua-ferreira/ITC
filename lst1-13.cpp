/*Calcule a exponenciação de dois números inteiros x e y entrados pelo teclado, mas
faça isso sem usar a função pow, ou seja, obtenha x elevado a y só com multiplicação e
um laço. (use do{}while()).*/

#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main ()
{
    int x, y, z;
    
    cout<< "Insira x e y\n";
    cin>> x >> y;
    
    do
    {
        x=x*x;
        z=z+1;
    } while (z<=y);
    
    cout<< "x^y=" << x << "\n";
    
    system ("pause");
}

