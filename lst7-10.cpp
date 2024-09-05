#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string.h>
#include <cstring> //declarando bibliotecas

using namespace std;

int main()
{
    char str[256];
    cout << "Insira um texto:\n";
    gets(str); //insere a string

    for (int i=0; str[i]!='\0'; i++) //percorre e, se for letra, soma um caractere
    {
        if(str[i]>=97 && str[i]<=122)
            str[i]++;
        if(str[i]>=65 && str[i]<=90)
            str[i]++;
    }
    cout << "\nTexto codificado:\n";
    for (int i=0; str[i]!='\0'; i++)
        cout << str[i];
    cout<< endl;
    return 0;
}

