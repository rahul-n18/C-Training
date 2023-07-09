#include <stdio.h>

int main() {
    int integerVal = 42;
    float floatVal = 3.14159; 
    char charVal = 'A';
    char stringVal[] = "Hello, World!";
    long longVal = 9876543210;
    double doubleVal = 2.71828;
    unsigned int unsignedVal = 12345;
    int hexadecimalVal = 0xABCD;
    int octalVal = 01234;

    printf("Integer: %d\n", integerVal);
    printf("Float: %f\n", floatVal);
    printf("Character: %c\n", charVal);
    printf("String: %s\n", stringVal);
    printf("Long: %ld\n", longVal);
    printf("Double: %lf\n", doubleVal);
    printf("Unsigned Integer: %u\n", unsignedVal);
    printf("Hexadecimal: %x\n", hexadecimalVal);
    printf("Octal: %o\n", octalVal);

    return 0;
}


