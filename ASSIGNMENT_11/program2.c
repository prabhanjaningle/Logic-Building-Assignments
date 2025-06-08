////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Print the Pattern from given input numbers
// 5
// 5 # 4 # 3 # 2 # 1 #
//Date : 03-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("%d\t#\t",iCnt);
        
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

