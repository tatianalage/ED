#include <stdio.h>

int main(){
    
    int ano = 0, ano_resto_4 = 0, ano_resto_100 = 0, ano_resto_400  = 0;
    scanf("%d", &ano);
    
    ano_resto_4 = ano % 4;
    ano_resto_100 = ano % 100;
    ano_resto_400 = ano % 400;
    
    if (ano_resto_4 == 0 && ano_resto_100 != 0 || ano_resto_100 == 0 && ano_resto_400 == 0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}