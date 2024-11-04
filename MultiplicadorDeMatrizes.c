# include <stdio.h>

void MultiplicaMatrizes33(int A[3][3], int B[3][3], int matriz_produto[3][3]) // criando uma função sem valor de retorno
{
    int i, j, k;
    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j <= 2; j++)
        {
            matriz_produto[i][j] = 0;
            for(k = 0; k <= 2; k++)
            {
                matriz_produto[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
void MultiplicaMatrizes44(int A[4][4], int B[4][4], int matriz_produto[4][4])
{
    int i, j, k;
    for(i = 0; i <= 3; i++)
    {
        for(j = 0; j <= 3; j++)
        {
            matriz_produto[i][j] = 0;
            for(k = 0; k <= 3; k++)
            {
                matriz_produto[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}


int main(void)
{
    int resultado;
    printf("Digite [1] para multiplicar duas matrizes 3X3 ou [2] para multiplicar duas matrizes 4X4 ");
    scanf("%i", &resultado);
    if(resultado == 1)
    {
        int A[3][3], B[3][3], matriz_produto[3][3];
        // Entrada dos valores da matriz A
        printf("Digite os valores da matriz A (3x3):\n");
        for(int i = 0; i < 3; i++) 
        {
            for(int j = 0; j < 3; j++) 
            {
                scanf("%i", &A[i][j]);
            }
        }

        // Entrada dos valores da matriz B
        printf("Digite os valores da matriz B (3x3):\n");
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                scanf("%i", &B[i][j]);
            }
        }

        // Chamada da função para multiplicar as matrizes
        MultiplicaMatrizes33(A, B, matriz_produto);

        // Exibe a matriz resultado
        printf("Matriz resultado (A x B):\n");
        for (int i = 0; i < 3; i++) 
        {
            printf("|");
            for (int j = 0; j < 3; j++) 
            {
                printf("%d ", matriz_produto[i][j]);
            }
            printf("|\n");
        }
    }
    else if(resultado == 2)
    {
        int A[4][4], B[4][4], matriz_produto[4][4];
        // Entrada dos valores da matriz A
        printf("Digite os valores da matriz A (4X4):\n");
        for(int i = 0; i < 4; i++) 
        {
            for(int j = 0; j < 4; j++) 
            {
                scanf("%i", &A[i][j]);
            }
        }

        // Entrada dos valores da matriz B
        printf("Digite os valores da matriz B (4X4):\n");
        for (int i = 0; i < 4; i++) 
        {
            for (int j = 0; j < 4; j++) 
            {
                scanf("%i", &B[i][j]);
            }
        }

        // Chamada da função para multiplicar as matrizes
        MultiplicaMatrizes44(A, B, matriz_produto);

        // Exibe a matriz resultado
        printf("Matriz resultado (A x B):\n");
        for (int i = 0; i < 4; i++) 
        {
            printf("|");
            for (int j = 0; j < 4; j++) 
            {
                printf("%d ", matriz_produto[i][j]);
            }
            printf("|\n");
        }
    }
    else
    {
        printf("Comando inválido");
    }
    return 0;
}