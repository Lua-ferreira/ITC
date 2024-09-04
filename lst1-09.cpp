/*Obtenha um número digitado pelo usuário e repita a operação de multiplicar ele por
três (imprimindo o novo valor) até que ele seja maior do que 100. Ex.: se o usuário
digita 5, deveremos observar na tela a seguinte sequência: 5 15 45 135 (utilize while()).*/

#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

int main ()
{
    setlocale (LC_ALL, "Portuguese");  //configuração da língua portuguesa
    int n;  //declaração da variável
    do //início do laço de repetição do programa
    {
        cout<< "Insira um número: ";  //saída da intrução
        cin>> n;  //entrada do número
        cout<< n << " ";  //saída do número para mostrar ele antes dos outros
        
        while (n<100) //enquanto o número não passar de 100, o programa continua multiplicando por 3 e mostrando o resultado
        {
              n=n*3;  //multiplicação
              cout<< n << " ";  //mostra o próximo número na sequência
        }
        cout<< "\n";
        
        system ("pause");
        cout<< "Pressione ESC para sair\n\n";
        
    } while (getch()!=27);  //o programa roda em laço até que o usuário tecle ESC, permitindo que cheque vários números
}
