/*Faça um programa que dado um número inteiro representado com até três
algarismos, fornece como resultado a soma dos números representados por esses
algarismos. Exemplo: Numero digitado (123) deve fornecer resultado (6).*/

#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

int main (void)
{
    setlocale (LC_ALL, "Portuguese"); //configuração da língua portuguesa
    int n, c, d, u, s; //declaração das variáveis
    
    do //início do laço para repetir o programa
    {
        cout<< "Insira um número de 3 dígitos: "; //saída da instrução
        do
        {
            cin>> n; //entrada do número
           
             if (n<100 || n>999) //se o número for menor que 100 ou maior que 999, isto é, tiver quantidade de algarismos diferente de 3, o programa informa o usuário 
                cout<< "\nEsse número não tem 3 dígitos. Tente novamente. ";
              
        } while (n<100 || n>999); //laço para erros de quantidade de algarismos
    
        c=n/100; //separação da centena do número
        d=(n%100)/10; //separação da dezena do número
        u=(n%10); //separação da unidade do número
        s=c+d+u; //soma dos algarismos do número

        cout<< "\nA soma dos algarismos é " << s << ".\n\nTecle ESC para sair.\n "; //saída da resposta
        
     } while (getch()!=27); //o programa roda em laço até que o usuário tecle ESC, permitindo que cheque vários números

}
