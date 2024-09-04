/*Faça um programa em C para ler o horário (hora, minuto e segundo) de inicio e a
duração, em segundos, de uma experiência biológica, em seguida informar o horário
(hora, minuto e segundo) de termino da mesma.*/

#include <iostream>
#include <locale.h>
using namespace std;

int main ()
{
     setlocale (LC_ALL, "Portuguese"); //configuração da língua portuguesa
     int h1, h2, m1, m2, s1, s2, d, dia, i; //declaração de variáveis
     
     dia=0; //começa se passado zero dias
     
     cout<< "Insira o horário de início do experimento: \n"; //saída da instrução
     cout<< "Horas: "; 
     cin>> h1;
     cout<< "Minutos: "; 
     cin>> m1;
     cout<< "Segundos: "; 
     cin>> s1; //entradas das variáveis horários
     
     cout<< "\nInsira o tempo de duração do experimento em segundos: \n"; //saída da instrução
     cin>> d; //entrada da variável duração
     
     i=(h1*3600)+(m1*60)+s1+d; //o horário mais a duração convertido em segundos
     
     h2=i/3600; //cálculo das horas finais
     m2=(i%3600)/60; //cálculo dos minutos finais
     s2=(i%3600)%60; //cálculo dos segundos finais
     
     for (m2=(i%3600)/60; s2>=60; m2++)
         s2=s2-60;  //converte os segundos para minutos para que não passem de 60
           
     for (h2=i/3600; m2>=60; h2++)
         m2=m2-60;  //converte os minutos para horas para que não passem de 60
     
     for (dia=0; h2>=24; dia++)
         h2=h2-24;  //converte as horas para dias para que não passem de 24
    
     
     cout<< "\nO horário de término do experimento é " << h2 << " horas, " << m2 << " minutos e " << s2 << " segundos daqui a " << dia << " dias.\n\n"; //saída da resposta
     
     system ("pause");
}
