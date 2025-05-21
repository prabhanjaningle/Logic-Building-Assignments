////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  program which accept width & height of rectangle from user and calculate.
//Date : 19-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

//Helper Function
double RectArea(float fWidth, float fHeight)
{
    float PI = 3.14;
    double dArea = 0.0;
    dArea = fWidth*fHeight;
    
    return dArea;
}

//Main Function
int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter The value of Width : ");
    scanf("%f",&fValue1);

    printf("Enter The value of Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area Of Given Circle is %lf",dRet);
    
    return 0;
}

//Time Complexity : O(1)