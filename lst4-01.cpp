/*Faça um programa em C++, utilizando vetor numérico, que leia 10 números
inteiros positivos quaisquer, inseridos pelo usuário, e escreva na tela:
A) A soma e a média dos números lidos.
B) O maior número lido.
C) O menor número lido.
D) Coloque os números do vetor em ordem descescente e mostre na tela.
E) Mostre as posições dos números maiores que a média calculados no item A.*/

#include <iostream>
#include <locale.h>
#include <stdio.h> // declarando bibliotecas

using namespace std;

float ordena(float vet[], int n) //função para ordenar em ordem descrescente
{
    float aux; //declarando variável auxiliar
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (vet[i] < vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

int main() //função principal
{
    int n=10; // declarando variável do tamanho do vetor
    float vet[n], media, soma=0, maior=0, menor, n0, n9, v0, v1, v2, v3, v4, v5, v6, v7, v8, v9; //declarando variáveis decimais

    for (int i=0; i<n; i++) //loop para ler os números que o usuário quer colocar no vetor
    {
        cout<< "Bota o número " << (i+1) << " ";
        cin>> vet[i];
        soma += vet[i]; //cálculo da soma de todos os números
    }
    media = soma / n; //cálculo da média de todos os números

    v0 = vet[0];
    v1 = vet[1];
    v2 = vet[2];
    v3 = vet[3];
    v4 = vet[4];
    v5 = vet[5];
    v6 = vet[6];
    v7 = vet[7];
    v8 = vet[8];
    v9 = vet[9]; //armazenando cada valor do vetor em uma variável para facilitar e não sofrer qualquer modificação indesejada

    for (int i = 0; i < n; i++) //percorre o vetor para achar o maior número
    {
        if (maior < vet[i])
            maior = vet[i];
    }
    menor = maior; //armazena o valor do maior número no menor para não correr risco de pular algum número no próximo cálculo

    for (int j = 0; j < n; j++) //percorre o vetor para achar o menor número
    {
        if(menor > vet[j])
            menor = vet[j];
    }

    cout<< "\n\nSoma: " << soma << "\n"; //mostra a soma
    cout<< "Media: " << media << "\n"; //mostra a média
    cout<< "Maior: " << maior << "\n"; //mostra o maior número do vetor
    cout<< "Menor: " << menor << "\n"; //mostra o menor número do vetor
    cout<< "Números em ordem decrescente: ";
    ordena(vet,n); //chama a função ordena para colocar os números em ordem decrescente
    for(int i = 0; i < n; i++) //percorre o vetor, ordenando-o e mostrando os números
       cout<< vet[i] << " ";
    cout<< "\nPosições vetoriais dos números maiores que a média: "; //mostra a posição dos vetores maiores que a média
        if (media < v0)
            cout<< "0 ";
        if (media < v1)
            cout<< "1 ";
        if (media < v2)
            cout<< "2 ";
        if (media < v3)
            cout<< "3 ";
        if (media < v4)
            cout<< "4 ";
        if (media < v5)
            cout<< "5 ";
        if (media < v6)
            cout<< "6 ";
        if (media < v7)
            cout<< "7 ";
        if(media < v8)
            cout<< "8 ";
        if(media < v9)
            cout<< "9 "; //cada um desses verifica se o valor, armazenado anteriormente nas variáveis específicas, é maior que a média de todos os números e, se for, mostra a posição desses números no vetor


    return 0;
}
