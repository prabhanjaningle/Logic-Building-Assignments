////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Print the Pattern from given input numbers
// 5
//# 1 * #  2 * # 3 * # 4 * # 5 *
//Date : 03-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
        
    }

}
int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0;
}

