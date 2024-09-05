/*Faça um programa em C++ para efetuar o seguinte cálculo:
C = A*A*B + 2*B-A
Onde A, B e C são matrizes bidimensionais 3x3. As matrizes A e B serão preenchidas
com números reais, informados pelo usuário. Mostre os números armazenados na matriz
C na tela. O programa deve ser dividido em funções.*/

#include <iostream>
#include <locale.h>

using namespace std;

void scan (float mat[3][3]) //função para ler as matrizes, elemento por elemento
{
    for (int i=0; i<3; i++) //cada linha
    {
        for (int j=0; j<3; j++) //cada coluna
        {
            cout<< "Digite o elemento da posição[";
            cout<< i+1 << "][" << j+1 << "]: "; //instrução para o usuário
            cin>> mat[i][j];
        }
    }
}

//a partir daqui, dividi o programa em várias funções, cada uma calculando uma parte da operação C = A*A*B + 2*B - A

void A2 (float matA2[3][3], float matA[3][3]) //função para calcular A*A
{
    int sum=0;
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
				matA2[i][j] += matA[i][k] * matA[k][j];
        }
    } //multiplica matA*matA=matA2
}
void m1 (float matA2[3][3], float matB[3][3], float mat1[3][3]) //função para calcular (A*A)*B
{
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
				mat1[i][j] += matA2[i][k] * matB[k][j];
        }
    } //multiplica matA2*matB=mat1
}
void m2 (float matB[3][3], float mat2[3][3]) //função para calcular 2*B
{
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
            mat2[i][j] += 2 * matB[i][j];
    } //multiplica 2*matB=mat2
}
void C (float matA[3][3], float matC[3][3], float mat1[3][3], float mat2[3][3]) //função para calcular tudo (as somas), juntando os resultados
{
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            matC[i][j] += mat1[i][j] + mat2[i][j] - matA[i][j];
        }
    } //Calcula matC
}

int main() //função principal
{
    float matA[3][3], matA2[3][3], matB[3][3], mat1[3][3], mat2[3][3], matC[3][3] = { { 0 } }; //declara as matrizes
    cout<< "Digite a matriz A:\n"; //instrução para digitar a matriz A utilizando a função scan
    scan(matA);
    cout<< "Digite a matriz B:\n"; //instrução para digitar a matriz B utilizando a função scan
    scan(matB);
    A2(matA2, matA);
    m1(matA2, matB, mat1);
    m2(matB, mat2);
    C(matA, matC, mat1, mat2); //calcula cada parte
    cout<< "O resultado da operação (A*A*B + 2*B - A) é:\n"; //exibe o resultado, elemento por elemento, em um formato que lembra matriz para ficar mais fácil de visualizar
    for (int i=0; i<3; i++)
    {
        cout<< "\n\n";
        for (int j=0; j<3; j++)
            cout<< matC[i][j] << "   ";
    }
    cout<< "\n\n";

    return 0;
}
