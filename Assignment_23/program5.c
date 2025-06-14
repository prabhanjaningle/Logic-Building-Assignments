#include <stdio.h>

void DisplayASCII(char ch)
{

    
        printf(" Decimal value : %d\n" ,ch);
        printf(" Octal value : %o\n" ,ch);
        printf(" HexaDecimal value : %x\n" ,ch);
    

}

int main()
{
    char cValue = '\0';
    printf("Enter the character : ");
    scanf("%c",&cValue);


    DisplayASCII(cValue);

    return 0;
}