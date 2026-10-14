#include <stdio.h>
#include <stdlib.h>

int Numeros()
{
    int X;

    printf("Digite um numero: ");
    scanf("%i", &X);

    return X;
}

int Espelho(int X, int Y)
{
    for(int i=X; i <= Y;i++)
    {
        printf("%i", i);
    }

    for(int i = Y; i >= X; i--)
    {
        if(i >= 10)
        {
            int dezena = i / 10;
            int unidade = i % 10;

            printf("%i%i", unidade, dezena);

        }

        else
        {
            printf("%i", i);
        }

    }


}

int main()
{
    int A = Numeros();
    int B = Numeros();
    int E = Espelho (A,B);

    return 0;

}
