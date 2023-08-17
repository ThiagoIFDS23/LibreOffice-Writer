#include <stdio.h>
#include <stdlib.h>
int num[50], cres[50];
int i, maior, menor;

int main()
{
    printf("Digite 50 números inteiros: ");
    for (i=0; i<=49; i++)
    {
    scanf("%d", &num[i]);
    }
    for (i=0; i<=49; i++)
    {
        if (i==0)
        {
            maior=num[i];
            menor=num[i];
            }
        else{
            if (num[i]>maior)
            {
                maior=num[i];
            }
            if (num[i]<menor)
            {
                menor=num[i];
            }
            }

    }
    printf("\nO maior é %d\n", maior);
    printf("\nO menor é %d\n", menor);
    return 0;
}
