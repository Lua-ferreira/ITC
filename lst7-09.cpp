#include <iostream>
#include <string.h>
#include <stdio.h> //declarando bibliotecas

using namespace std;

int main()
{
    int n, p=0;
    cout << "Um número: ";
    cin >> n; //insere um número

    for (int j=2; j<n/3; j++)
    {
        if(j*(j+1)*(j+2)==n) //verifica se há números consecutivos que, multiplicados, dão n
        {
            p=1; //se houver, muda o p para um e já fala que é triangular
            cout << "\nO número é triangular.";
            break;
        }
    }
    if (p==0) //se não, fala que não
        cout << "\nO número não é triangular.";

    return 0;
}
