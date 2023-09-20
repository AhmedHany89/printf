#include <stdio.h>
#include "main.h"

int main() {
    char *normalString = "This is a normal string.";
    char *emptyString = "";
    char *nullString = NULL;
    char *longString = "This is a very long string that should be truncated.";
    char normalChar = 'A';
    char controlChar = '\n';
    char overflowString[] = "Overflow Test String";
    char overflowChar = 'X';

    printf("Test 1: Normal String: %s\n", normalString);
    _printf("Test 1: Normal String: %s\n", normalString);
    printf("Test 2: Empty String: %s\n", emptyString);
    _printf("Test 2: Empty String: %s\n", emptyString);
    _printf("Test 3: NULL String: %s\n", nullString);
    printf("Test 3: NULL String: %s\n", nullString);
    _printf("Test 4: Long String (Truncated): %.10s\n", longString);
    printf("Test 4: Long String (Truncated): %.10s\n", longString);

    printf("Test 5: Normal Char: %c\n", normalChar);
    _printf("Test 5: Normal Char: %c\n", normalChar);
    printf("Test 6: Control Char (Newline): %c\n", controlChar);
    _printf("Test 6: Control Char (Newline): %c\n", controlChar);


    printf("Test 7: Overflow String: %.5s\n", overflowString);
    printf("Test 8: Overflow Char: %c\n", overflowChar);
    _printf("Test 8: Overflow Char: %c\n", overflowChar);

    return 0;
}
