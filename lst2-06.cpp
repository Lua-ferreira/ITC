#include <iostream>
#include <locale.h>
using namespace std;

int main (void)
{
     setlocale (LC_ALL, "Portuguese"); //configuração de acentos da língua portuguesa no programa
     float ce, pt, cc, pk, vi, vc, vt; //apresentação das variáveis
     
     cout<< "BEM VINDO \n";
     
     do
     {
           cout<< "\nInsira o código do estado de origem da carga:  "; //pedido do código de estado
           cin>> ce; //entrada do código de estado
           
           if (ce < 1.0 || ce > 5.0)
                 cout<< "\nVocê colocou um código inexistente. Tente novamente \n\n"; //mensagem de erro
           
     } while (ce < 1.0 || ce > 5.0); //o programa só para de pedir o código quando ele estiver entre 1 e 5
     
     do
     {
               cout<< "\nInsira o peso da carga em toneladas:  "; //pedido do peso em toneladas
               cin>> pt; //entrada do peso em toneladas
               
               if (pt<0)
                      cout<< "\nNão existe peso negativo. Digite um peso positivo \n\n"; //mensagem de erro
               
     } while (pt<0); //o programa só para de pedir o peso quando o valor for positivo
     
     do
     {
                  cout<< "\nInsira o código da carga:  "; //pedido do código da carga
                  cin>> cc; //entrada do código da carga
                  
                  if (cc<10 || cc>40)
                        cout<< "\nVocê colocou um código inexistente. Tente novamente \n\n"; //mensagem de erro
                        
     } while (cc<10 || cc>40);
     
     pk=(pt*1000); // transformação de peso em toneladas para peso em quilos
     
                  if (cc>=10 && cc<=20) //se o código da carga estiver entre 10 e 20, a carga custa 100 reais por quilo
                     vc=pk*100; //conta da condicional
        
                     if (cc>20 && cc<=30) //se o código da carga estiver entre 21 e 30, a carga custa 250 reais por quilo
                        vc=pk*250; //conta da condicional
        
                       if (cc>30 && cc<=40) //se o código da carga estiver entre 31 e 40, a carga custa 340 reais por quilo
                           vc=pk*340; //conta da condicional
        
     cout<< "\n\nO peso da carga em quilos é de " << pk << " kg."; //apresentação do peso convertido em quilos
     printf("\n\nO valor da carga é %.2f reais.\n",vc); //apresentação do valor da carga em printf para não sair em notação científica
        
     if (ce==1) //se o código de estado for 1, a taxa de imposto sobre o valor da carga é de 35 porcento
     {
               vi=vc*0.35; //conta da porcentagem condicional
               cout<< "\nO valor do imposto sobre a carga é de " << vi << ",00 reais."; //apresentação do valor do imposto
     }
      
     if (ce==2) //se o código de estado for 2, a taxa de imposto sobre o valor da carga é de 25 porcento
     {
               vi=vc*0.25; //conta da porcentagem condicional
               cout<< "\nO valor do imposto sobre a carga é de " << vi << ",00 reais."; //apresentação do valor do imposto
     }
        
     if (ce==3) //se o código de estado for 3, a taxa de imposto sobre o valor da carga é de 15 porcento
     {
               vi=vc*0.15; //conta da porcentagem condicional
               cout<< "\nO valor do imposto sobre a carga é de " << vi << ",00 reais."; //apresentação do valor do imposto
     }
        
     if (ce==4) //se o código de estado for 1, a taxa de imposto sobre o valor da carga é de 5 porcento
     {
               vi=vc*0.05; //conta da porcentagem condicional
               cout<< "\nO valor do imposto sobre a carga é de " << vi << ",00 reais."; //apresentação do valor do imposto
     }
        
     if (ce==5) //se o código de estado for 1, a taxa de imposto sobre o valor da carga é isenrta
     {
               vi=0; //conta da porcentagem condicional
               cout<< "\nA carga é isenta de impostos."; //apresentação do valor do imposto
     }
     
     vt=(vc+vi); //conta do valor total da carga do caminhão
     printf("\n\nO preço total da carga é de %.2f reais.\n\n",vt); //apresentação do valor total da carga do caminhão em printf para não sair em notação científica
          
     system ("pause");
}
