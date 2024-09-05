#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string.h>
#include <cstring>  //declarando bibliotecas

using namespace std;

int main()
{
    int p=0;
    char stra[40], strb[40];
    cout << "Insira o primeiro texto:\n";
    gets (stra); //insere a primeira string
    cout << "Insira o segundo texto:\n";
    gets (strb); //insere a segunda string
    for (int i=0; stra[i]!='\0'; i++)  
    {
        if (stra[i] != strb[i])
        {
            p=1;
            break;
        } //percorre a string procurando caracteres diferentes e, se houver, muda o p para 1

    }
    if (p==0)
        cout << "Os textos são iguais.\n";
    if (p==1)
        cout << "Os textos são diferentes.\n";
    return 0;
}
