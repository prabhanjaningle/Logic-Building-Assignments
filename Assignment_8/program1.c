////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  program which accept radius of circle from user and calculate its area.
//Date : 19-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

//Helper Function
double CircleArea(float fRadius)
{
    float PI = 3.14;
    double dArea = 0.0;
    dArea = PI*fRadius*fRadius;
    
    return dArea;
}

//Main Function
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter The value of radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area Of Given Circle is %lf",dRet);
    
    return 0;
}

//Time Complexity : O(1)