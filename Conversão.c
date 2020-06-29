#include <stdio.h>
int main()
{
    char temperatureUnit;
    double temperatureValue;
    scanf("%c %lf", &temperatureUnit, &temperatureValue);
    if((temperatureUnit=='C')&&(temperatureValue>=(-273.0)))
    {
        printf("%.1lf F\n%.2lf K", ((temperatureValue*1.8)+32), (temperatureValue+273.15));
    }
    else if((temperatureUnit=='K')&&(temperatureValue>=0.0))
    {
        printf("%.2lf C\n%.2lf F", (temperatureValue-273.15), ((temperatureValue*1.8)-459.67) );
    }
    else if((temperatureUnit=='F')&&(temperatureValue>=(-459.67)))
    {
        printf("%.2lf C\n%.3lf K", ((temperatureValue-32)/1.8), ((temperatureValue+459.67)/1.8));
    }
    else  
        printf("Valor de temperatura abaixo do minimo");
    return 0;
}