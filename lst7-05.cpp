#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string.h>
#include <cstring> //declarando bibliotecas

using namespace std;

int main()
{
    int p=0;
    char nome[30];
    cout << "Insira o nome: ";
    gets (nome);  //insere a string
    for (int i=0; nome[i]!='\0'; i++)
        p++;  //conta od dígitos
    cout << "O nome invertido é ";
    for (int i=p-1; i>=0; i--) //começa do penúltimo dígito para não contar o \0 e mostra invertido
        cout << nome[i];
    cout << endl;
    return 0;
}
