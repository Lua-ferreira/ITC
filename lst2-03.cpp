#include <iostream>
#include <locale.h>
#include <conio.h> //declaração das bibliotecas
using namespace std;

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //configuração português
    double d, t; //declaração das variáveis
    do //início do laço para repetir o programa
    {
         cout<< "Digite a dívida inicial para saber seu valor depois de 3 anos: "; //instrução para o usuário
         cin>> d; //entrada do dado
         
         for (t=1; t<=36; t++)
             d=d+(d*7.5/100); //a dívida aumenta 7,5% em relação ao valor do último mês
         
         //cout<< "A dívida depois de 3 anos passa para " << d << " reais com juros de 7,5% ao mês.\n";
         printf("A dívida depois de 3 anos passa para %.2lf reais com juros de 7,5%% ao mês.\n", d); //saída da resposta com uma formatação melhor
         
         system ("pause");
         cout<< "Para sair, tecle ESC.\n"; 
    } while (getch()!=27); //laço para repetir o programa
}
