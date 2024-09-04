/*Faça um programa que faça operações simples de frações:
Crie e leia duas frações p e q, compostas por numerador e denominador.
Encontre o máximo divisor comum entre o numerador e o denominador, e
simplifique as frações.
Apresente a soma, a subtração, o produto e o quociente entre as frações lidas.*/


#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main ()
{
    setlocale (LC_ALL, "Portuguese"); //configuração da língua portuguesa
    int np, dp, nq, dq, p, q, mdcp=1, s=1, mdcq=1, t=1, na, da, mdca=1, b=1, ns, ds, mdcs=1, c=1, nm, dm, mdcm=1, d=1, nd, dd, mdcd=1, e=1; //declaração das variáveis e seus valores iniciais
    
    cout<< "Sendo as frações P e Q, insira:\nO numerador de P: "; //saída da instrução
    cin>> np;
    cout<< "\nO denominador de P: ";
    cin>> dp;
    cout<< "\nO numerador de Q: ";
    cin>> nq;
    cout<< "\nO denominador de P: ";
    cin>> dq;    //entrada dos números
    cout<< "\n\nP = " << np << "/" << dp << " e Q = " << nq << "/" << dq <<"."; //mostra as frações com numerador e denominador juntos
    
    if (np > dp)
    {
           for (int i=0; i <= dp; i++, s++)
           {
               if (np%s==0 && dp%s==0)
                  mdcp=s;
               np=np/mdcp;
               dp=dp/mdcp;
           }
    }  //se o numerador de P for maior, o programa se baseia no denominador para achar o MDC
    
    if (np <= dp)
    {
           for (int i=0; i <= np; i++, s++)
           {
               if (np%s==0 && dp%s==0)
                  mdcp=s;
               np=np/mdcp;
               dp=dp/mdcp;
           }
    }  //se o numerador de Q for menor ou igual, o programa se baseia nele para achar o MDC
    
    if (nq > dq)
    {
           for (int i=0; i <= dq; i++, t++)
           {
               if (nq%t==0 && dq%t==0)
                  mdcq=t;
               nq=nq/mdcq;
               dq=dq/mdcq;
           }
    }  //se o numerador de Q for maior, o programa se baseia no denominador para achar o MDC
    
    if (nq <= dq)
    {
           for (int i=0; i <= nq; i++, t++)
           {
               if (nq%t==0 && dq%t==0)
                  mdcq=t;
               nq=nq/mdcq;
               dq=dq/mdcq;
           }
    } //se o numerador de Q for menor ou igual, o programa se baseia nele para achar o MDC
    
    cout<< "\n\nSimplificadas: P = " << np << "/" << dp << " e Q = " << nq << "/" << dq <<".\n"; //mostra as frações simplificadas
    
    da=dp*dq;
    na=(da/dp*np)+(da/dq*nq); //adição
    
    if (na > da)
    {
           for (int i=0; i <= da; i++, b++)
           {
               if (na%b==0 && da%b==0)
                  mdca=b;
               na=na/mdca;
               da=da/mdca;
           }
    }  //se o numerador da fração da adição entre P e Q for maior, o programa se baseia no denominador para achar o MDC
    
    if (na <= da)
    {
           for (int i=0; i <= na; i++, b++)
           {
               if (na%b==0 && da%b==0)
                  mdca=b;
               na=na/mdca;
               da=da/mdca;
           }
    }  //se o numerador da fração da adição entre P e Q for menor ou igual, o programa se baseia nele para achar o MDC
    
    ds=dp*dq;
    ns=(da/dp*np)-(da/dq*nq); //subtração
    
    if (ns > ds)
    {
           for (int i=0; i <= ds; i++, c++)
           {
               if (ns%c==0 && ds%c==0)
                  mdcs=c;
               ns=ns/mdcs;
               ds=ds/mdcs;
           }
    }  //se o numerador da fração da subtração entre P e Q for maior, o programa se baseia no denominador para achar o MDC
    
    if (ns <= ds)
    {
           for (int i=0; i <= ns; i++, c++)
           {
               if (ns%c==0 && ds%c==0)
                  mdcs=c;
               ns=ns/mdcs;
               ds=ds/mdcs;
           }
    }  //se o numerador da fração da subtração entre P e Q for menor ou igual, o programa se baseia nele para achar o MDC
    
    dm=dp*dq;
    nm=np*nq; //multiplicação
    
    if (nm > dm)
    {
           for (int i=0; i <= dm; i++, d++)
           {
               if (nm%d==0 && dm%d==0)
                  mdcm=d;
               nm=nm/mdcm;
               dm=dm/mdcm;
           }
    }  //se o numerador da fração da multiplicação entre P e Q for maior, o programa se baseia no denominador para achar o MDC
  if (nm <= dm)
    {
           for (int i=0; i <= nm; i++, d++)
           {
               if (nm%d==0 && dm%d==0)
                  mdcm=d;
               nm=nm/mdcm;
               dm=dm/mdcm;
           }
    }  //se o numerador da fração da multiplicação entre P e Q for menor ou igual, o programa se baseia nele para achar o MDC
    
    dd=dp*nq;
    nd=np*dq; //divisão
    
    if (nd > dd)
    {
           for (int i=0; i <= dd; i++, e++)
           {
               if (nd%e==0 && dd%e==0)
                  mdcd=e;
               nd=nd/mdcd;
               dd=dd/mdcd;
           }
    }  //se o numerador da fração da divisão entre P e Q for maior, o programa se baseia no denominador para achar o MDC
    
    if (nd <= dd)
    {
           for (int i=0; i <= nd; i++, e++)
           {
               if (nd%e==0 && dd%e==0)
                  mdcd=e;
               nd=nd/mdcd;
               dd=dd/mdcd;
           }
    }  //se o numerador da fração da divisão entre P e Q for menor ou igual, o programa se baseia nele para achar o MDC
    
    cout<< "\nOperações:\nP + Q = " << na << "/" << da << "\nP - Q = " << ns << "/" << ds << "\nP . Q = " << nm << "/" << dm << "\nP / Q = " << nd << "/" << dd; //saída da resposta em tópicos
    
    system ("pause");
}
