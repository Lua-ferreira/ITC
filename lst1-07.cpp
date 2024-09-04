/*Faça um programa que converta coordenadas polares para cartesianas:
Crie e leia um ponto em coordenada polar, composto por raio (r) e argumento (a)
em radianos.
Crie outro ponto, agora em coordenada cartesiana, composto por x e y, sabendo
que (x = r.cos a) e (y = r.sin a).*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdio.h>
using namespace std;

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //configuração da língua portuguesa
    double  x, y, r, tg, tr; //declaração das variáveis
    
    cout<< "Sendo:\nx = r.cos(teta)\ny = r.sen(teta)\n\npara converter coordenadas polares para cartesianas, introduza:\nr = "; //saída da instrução e descrição das fórmulas de conversão de coordenadas polares para cartesianas

    cin>> r;
    cout<< "teta em graus = ";
    cin>> tg; //entrada dos números
    
    tr=tg*(3.14159/180); //conversão do ângulo de graus para radianos
    
    x=r*cos(tr);
    y=r*sin(tr);  //fórmulas de conversão
    
    cout<< "A coordenada polar ( " << r << " , " << tg << " ) em coordenadas cartesianas é ( " << x << " , " << y << " )\n\n"; //saída da resposta em cout: dá erro com alguns números
    
    printf("\nA coordenada polar ( %.0lf , %.0lf ) em coordenadas cartesianas e ( %.0lf , %.0lf )\n\n", r, tg, x, y); //saída da resposta em printf para não dar erro
    
    system ("pause");   
}
