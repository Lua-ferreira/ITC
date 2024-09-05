//strings

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string.h> //declarando bibliotecas (coloquei um monte por precaução)

using namespace std;

void underline (char merda[], int i) //função para trocar os espaços por underline
{
    for (int i=0; merda[i]!='\0'; i++) //correndo a string para achar os espaços e substituir por underline
    {
        if (merda[i]==32) //se o caractere for " "
            merda[i]=95; //troca por "_"
    }
    for (int i=0; merda[i]!='\0'; i++) //corre a string printando cada caractere
    {
    printf("%c", merda[i]); //usa o char
    }
}

void contador (char merda[], float cont[]) //função para guardar a posição de cada espaço na string
{
    int c=0, vet[41];
    for (int i=0; merda[i]!='\0'; i++) //corre a string
    {
        if (merda[i]==95)
        {
            vet[c]=i; //se o caractere for underline guarda a posição em vet
            c++;
        }
    }
    for (int l=0; l<c; l++)
    {
    printf("%d ", vet[l]+1); //printa a posição em vet
    }
}

int main() //função principal pra fazer todo o resto
{
    int i=0; //declarando
    float vet[41]; //as
    char merda[40]; //variáveis
    cout<< "Escreva qualquer merda: "; //instrução para o usuário (sendo grossa porque engenharia não ta fácil)
    gets(merda); //escaneando o texto do usuário
    cout<< "\nO seu texto com os espaços trocados por underline fica: "; //mostra o texto cheio de underline
    underline(merda, i); //a função printa o texto já com os espaços substituídos por underline
    cout<< "\n\nVocê colocou um espaço nas posições "; //mostra as posições dos espaços no texto original
    contador(merda, vet); //a função printa as posições

    return 0;
}
