#include <iostream>
#include <math.h> //declarando bibliotecas
using namespace std;

int main()
{
    int N, p=0;
    float aux, n=2, d=1, x=0; //declara o numerador e denominador em float pra fazer a divisão
    cout << "Insira o valor de N: ";
    cin >> N;
    while (p<N)
    {
        aux = n; //armazena o numerador em aux
        x += n/d; //calcula a próxima fração
        n = d+n; //calcula o próximo numerador
        d = aux; //joga o numerador antigo para o denominador
        p++; //contador para parar o laço
    }
    cout << "Resultado: " << x << endl;
    return 0;
}
