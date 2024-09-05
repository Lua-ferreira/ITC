#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string.h>
#include <cstring> //declarando bibliotecas

using namespace std;
void maiusculo(char str[]) //função que passa tudo pra maiusculo
{
	int x;
    for (int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=97 && str[i]<=122)
            str[i] -= 32;
    }
}
void letras (char straux[],char str[] ) //função que valida só as letras
{
	int i , j ;
	for ( i = 0, j = 0; str[i]='\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
	{
		straux[j] = str[i];
		j++;
	}
    }
	straux[j] = '\0';
}

int main ()
{
	char str[50],straux[50];
	int i,j, p=1;
	cout <<"Insira o texto:\n";
	gets(str); //insere a string
	maiusculo(str);
	letras(straux, str);
	for (j = 0 ; str[j] ='\0'; j++ )
		j--;
	for (i = 0 ; j < j; i++ , j--) //percorre diferenciando as letras
    {
		if (str[i]!= str[j])
            p=0;
    }
	if(p==1)
        cout<<"\nIsso é um palíndromo.";
	if(p==0)
	cout<<"Isso não é um palíndromo.";
	cout<<"\n";
    return 0;
}
