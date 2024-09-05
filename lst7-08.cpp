#include <iostream>

using namespace std;

int main()
{
    int n, c=0, d=0, i=0;
    int vet[n], imp[c], par[d];
    cout << "Bem vindo!" << endl;
    cout << "Insira quantos números você quer colocar no seu vetor: ";
    cin >> n;
    cout << endl;
    for (int i=0; i<n; i++) //loop para ler os números que o usuário quer colocar no vetor
    {
        cout<< "Insira o número da posição " << (i+1) << " ";
        cin>> vet[i];
    }
    for (int i=0; i<n; i++)
    {
        if (vet[i]%2==1) //se for impar
        {
            imp[c]=vet[i]; //cria novo vetor para armazenar
            c++;
        }
        if (vet[i]%2==0) //se for par
        {
            par[d]=vet[i]; //cria novo vetor para armazenar
            d++;
        }
    }
	cout<< “Impares: “;
    for (i = 0; i < n; i++)
        cout << imp[i];
	cout<< “Pares: “;
    for (i = 0; i < n; i++)
        cout << par[i];
    return 0;
}
