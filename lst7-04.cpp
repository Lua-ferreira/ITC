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
    char nome[40];
    cout << "Insira o nome: ";
    gets (nome); //insere a string
    for(int i=0; nome[i]!='\0'; i++)
        p++; //percorre a string e, enquanto houver caracteres válidos, conta e armazena em p

    cout << "O tamanho da string é " << p << ".\n";
    return 0;
}
