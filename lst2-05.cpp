#include <iostream>
#include <locale.h>
#include <conio.h>
#include <math.h> //declaração das bibliotecas
using namespace std;

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //configuração português
    float i, f, m, s=63, n, c=1, d=1; //declaração das variáveis e seus valores
    
    for (n=61; n/f>0.00001; n=n-2) //s já começa com 63, então n começa com 61 para iniciar as frações
    {
        f=1; //zera a definição do fatorial
        for (i=1; i<=d; i++)
              f=f*i; //fatoriais dos denominadores
        d++; //não limita a fórmula aos denominadores, sempre acompanha o i
        m = n/f; //divide o número pelo resultado do fatorial
        s = s + m; //realiza a soma de fato
        c++; //conta os números somados
    }
    
    cout<< "A soma dos números é " << s << " e foram usados " << c << " números."; //resposta
    
    system ("pause");
}
