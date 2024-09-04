/*Escreva um programa que leia um valor inteiro e responda se ele é ou não um ano
bissexto. No calendário gregoriano, usado atualmente, um ano é bissexto se for divisível
por 4 e não for divisível por 100, ou se for divisível por 400.*/

#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //configuração da língua portuguesa
    int ano; //declaração das variáveis
    
    do //início do laço para repetir o programa
    {
    cout<< "\nInsira um ano para saber se é bissexto: "; //saída da instrução
    cin>> ano; //entrada da variável ano

    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0)
	   cout<< "\nO ano " << ano << " é bissexto.\n"; //se o ano é divisível por 4 e não divisível por 100 ou divisível por 400, é bissexto
	
       
       else
       	cout<< "\nO ano " << ano << " não é bissexto.\n\n"; //se não, não é bissexto
       	
	system ("pause");
	       cout<< "Para sair, tecle ESC.\n"; //instrução para sair
	       
    } while (getch()!=27); //o programa roda em laço até que o usuário tecle ESC, permitindo que cheque vários anos
}
