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

    for (int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=97 && str[i]<=122)
            str[i] -= 32; //transforma as letras minúsculas em maiúsculas
    }

    for (int i=0; str[i]!='\0'; i++)
        cout << str[i];
    cout<< endl;
    return 0;
}
