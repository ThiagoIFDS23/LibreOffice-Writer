#include <stdio.h>
#include <stdlib.h>
char pal[21];
char avog[11]="aeiouAEIOU";
char conso[43]="bcdfghijklmnpqrstvwxyzBCDFGHJKLMNOPQRSTVWXYZ";
int i, k, vog, cons;
int main()
{
    printf("Digite uma palavra: ");
    scanf("%s", pal);
    for (i=0; i<=20; i++){
        if (pal[i]=='\0'){
            i=22;
            }
        else{
            for (k=0; k<=42; k++){
                if (pal[i]==conso[k]){
                    cons++;
                    }
                }
            for (k=0; k<=10; k++){
                if (pal[i]==avog[k]){
                    vog++;
                    }
                }
            }
        }
    printf("O número de vogais é %d e o número de consoantes é %d.", vog, cons);
    return 0;
}
