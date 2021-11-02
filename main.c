#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char variable[5];
    printf("Which one do you want?? 'c' for f to celsius, 'fa' for c to fahrenheit: ");
    float fahrenheit;
    float celsius;
    scanf("%s", variable);
    if(strcmp(variable, "c") == 0)
    {
        printf("Whats the number you want to convert to Celsius?: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 0.556;
        printf("the number you were searching for is: " "%f", celsius);
    }
    else if(strcmp(variable, "fa")== 0)
    {
        printf("Whats the number you want to convert to Fahrenheit?: ");
        scanf("%f", &celsius);
        fahrenheit = celsius * 1.8 + 32;
        printf("the number you were searching for is: " "%f", fahrenheit);
    }
    else
    {
        printf("What you wrote is incorrect, please try again.");
    }

}
