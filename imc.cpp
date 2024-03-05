#include <stdio.h>

int main()
{
    float massa, altura, imc;
    scanf("%f %f", &massa, &altura);
    
    imc = massa / (altura * altura);
    
    if (imc < 17)
    {
        printf("Muito abaixo do peso");
    }
    
    if (imc >= 17 && imc < 18.5) 
    {
        printf("Abaixo do peso");
    }
    
    else if (imc >= 18.5 && imc < 25)
    {
        printf("Peso Normal");
    }
    
    else if (imc >= 25 && imc < 30)
    {
        printf("Acima do peso");
    }
    else if (imc >= 30 && imc < 35)
    {
        printf("Obesidade");
    }
    else if (imc >= 35 && imc < 40)
    {
        printf("Obesidade severa");
    }
    else if (imc >= 40)
    {
        printf("Obesidade mórbida");
    }
}