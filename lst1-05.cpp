/*Implementar um programa que exibe quantas notas de 50, 20, 10, 5, 2 e 1 são
necessárias para o pagamento de uma determinada conta (dado de entrada do tipo
inteiro) tal que o valor a ser pago seja com o menor número de notas possível.*/

#include <iostream>
#include <locale.h>
using namespace std;

int main ()
{
     setlocale (LC_ALL, "Portuguese"); //configuração da língua portuguesa
     int val, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0; //declaração das variáveis
     
     cout<< "Insira o valor da conta a ser paga (sem os centavos) para saber quantas e quais notas deverá usar: "; //saída da instrução
     cin>> val; //entrada da variável valor da conta
     cout<< "\nVocê pode pagar a conta de " << val << " com:\n" //começo da resposta com o valor original do valor da conta
     
     for (n50=0; val>=50; n50++)
         val=val-50;
     
     for (n20=0; val>=20; n20++)
         val=val-20;
     
     for (n10=0; val>=10; n10++)
         val=val-10;
         
     for (n5=0; val>=5; n5++)
         val=val-5;
         
     for (n2=0; val>=2; n2++)
         val=val-2;
         
     for (n1=0; val>=1; n1++)
         val=val-1;   //contas para quantidade de notas: enquanto o valor da conta for maior ou igual ao valor da nota, o programa fica em laço
     
     cout<< n50 << " notas de 50 reais\n" << n20 << " notas de 20 reais\n" << n10 << " notas de 10 reais\n" << n5 << " notas de 5 reais\n" << n2 << " notas de 2 reais\n" << n1 << " moedas de 1 real.\n\n"; //saída da resposta em tópico
                    
system ("pause");
}
