/*Faça um programa que faça operações simples de números complexos:
Crie e leia dois números complexos z e w, compostos por parte real e parte
imaginária.
Apresente a soma, subtração e produto entre z e w, nessa ordem, bem como o
módulo de ambos.*/

#include <iostream>
#include <locale.h>
using namespace std;

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //configuração da língua portuguesa
    int smr, smi, sbr, sbi, prr, pri, a, b, c, d;  //declaração das variáveis
    
    cout<< "Este programa faz operações com números complexos.\n\nSendo:\nSoma: z+w = (a+bi)+(c+di)\nSubtração: z-w = (a+bi)-(c+di)\nMultiplicação: z.w = (a+bi).(c+di)\n\nInsira:\n"; //saída da instrução e descrição das fórmulas de operações com números complexos
    cout<< "a= ";
    cin>> a;
    cout<< "b= ";
    cin>> b;
    cout<< "c= ";
    cin>> c;
    cout<< "d= ";
    cin>> d;   //entrada dos números
    
    smr=a+c; //soma da parte real
    smi=b+d; //soma da parte imaginária
    sbr=a-c; //subtração da parte real
    sbi=b-d; //subtração da parte imaginária
    prr=(a*c)-(b*d); //produto da parte real
    pri=(a*d)-(b*c); //produto da parte imaginária
    
    if (smi>=0)
       cout<< "\nO resultado da soma é (" << smr << " +" << smi << "i).";
    if (smi<0)
       cout<< "\nO resultado da soma é (" << smr << " " << smi << "i)."; //apresentação da operação soma
       
    if (sbi>=0)
       cout<< "\nO resultado da subtração é (" << sbr << " +" << sbi << "i).";
    if (sbi<0)
       cout<< "\nO resultado da subtração é (" << sbr << " " << sbi << "i)."; //apresentação da operação subtração
       
    if (pri>=0)
       cout<< "\nO resultado da multiplicação é (" << prr << " +" << pri << "i).\n\n";
    if (pri<0)
       cout<< "\nO resultado da multiplicação é (" << prr << " " << pri << "i).\n\n"; //apresentação da operação multiplicação
    
system ("pause");
}
