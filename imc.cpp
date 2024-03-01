#include <stdio.h>

int main()
{
    float massa, altura, imc;
    scanf("%f %f", &massa, &altura);
    
    imc = massa / (altura * altura);
    
    if (imc < 18.5) 
    {
        printf("Magreza");
    }
    
    else if (imc >= 18.5 && imc < 25)
    {
        printf("Saudável");
    }
    
    else if (imc >= 25 && imc < 30)
    {
        printf("Sobrepeso");
    }
    else if (imc >= 30 && imc < 35)
    {
        printf("Obesidade Grau I");
    }
    else if (imc >= 35 && imc < 40)
    {
        printf("Obesidade Grau II (severa)");
    }
    else
    {
        printf("Obesidade Grau III (mórbida)");
    }
}
