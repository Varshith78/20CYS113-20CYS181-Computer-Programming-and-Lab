#include <stdio.h>

void binary(int number) // using function for converting a decimal number to binary
{
    int binary[32];
    int i = 0;
    
    
    while (number > 0) {  //to convert decimal to binary
        binary[i] = number % 2;  
        number = number / 2;    
        i++;
    }
    
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void octal(int number)  // Using function for converting a decimal number to octal
{
    printf("Octal equivalent: %o\n", number);
} 

void hexa(int number)  // Using function for converting a decimal number to hexadecimal
{
    printf("Hexadecimal equivalent: %X\n", number);
}

int main()
{
    int number;
    
    scanf("%d", &number);
    
    if (number <= 0) {
        printf("Error: Value should be greater than 0\n");
    }
    else {
        
        binary(number);
        octal(number);
        hexa(number);
    }
    
    return 0;
}
