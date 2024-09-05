#include <iostream>
#include <locale.h>

using namespace std;

void maior(float vet[], int n)
{
    float maior;
    for (int i = 0; i < n; i++) //percorre o vetor para achar o maior número
    {
        if (maior < vet[i])
            maior = vet[i];
    }
    cout << "O maior número do vetor é " << maior;
}

void menor(float vet[], int n)
{
    float maior, menor;
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
    cout << "O menor número do vetor é " << menor;
}

void crescente(float vet[], int n) //função para ordenar em ordem crescente
{
    float aux; //declarando variável auxiliar
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    for(int i = 0; i < n; i++) //percorre o vetor, ordenando-o e mostrando os números
       cout<< vet[i] << " ";

}

void descescente(float vet[], int n) //função para ordenar em ordem descrescente
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
    for(int i = 0; i < n; i++) //percorre o vetor, ordenando-o e mostrando os números
       cout<< vet[i] << " ";

}

void inverte(float vet[], int n)
{
    int p=0;
    for (int i=0; vet[i]!='\0'; i++)
        p++;
    cout << "O vetor invertido é ";
    for (int i=p-1; i>=0; i--)
        cout << vet[i];
    cout << endl;
}

void encontra(float vet[], int n)
{
    int p;
    cout << "Insira a posição do vetor que você deseja encontrar: ";
    cin >> p;
    cout << vet[p-1];
}



int main()
{
    int n, op, i=0;
    float vet[n];
    cout << "Bem vindo!" << endl;
    do
    {
        cout << "Insira quantos números você quer colocar no seu vetor: ";
        cin >> n;
        cout << endl;
        for (int i=0; i<n; i++) //loop para ler os números que o usuário quer colocar no vetor
        {
            cout<< "Insira o número da posição " << (i+1) << " ";
            cin>> vet[i];
        }

        do
        {
            cout << "\n\nInsira:\n 1 - Para encontrar o maior número;\n 2 - Para encontrar o menor número;";
            cout << "\n 3 - Para ordenar crescentemente;\n 4 - Para ordenar decrescentemente;";
            cout << "\n 5 - Para inverter a ordem dos números do vetor;\n 6 - Para encontrar a(s) posição(s) de um número n informado pelo usuário;";
            cout << "\n 7 - Para inserir novo vetor;\n 8 - Para sair do programa;\nOpção: ";
            cin >> op;

            if (op == 1)
            {
                maior(vet, n);
            }

            if (op == 2)
            {
                menor(vet, n);
            }

            if (op == 3)
            {
                crescente(vet, n);
            }

            if (op == 4)
            {
                descescente(vet, n);
            }

            if (op == 5)
            {
                inverte(vet, n);
            }

            if (op == 6)
            {
                encontra(vet, n);
            }

        	if (op == 9)
	{
		system (“cls”)
	}

    } while (op!=8);


    return 0;
}
