////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  program which accept distance in kilometre and convert it into meter.
//Date : 19-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h> 

double SquareMeter(int iValue) 
{ 
    double dMeter = 0.0;
    dMeter=0.0929 * iValue;

    return dMeter;

} 

int main() 
{ 
    int iValue = 0; 
    double dRet = 0.0; 
    printf("Enter area in square feet : "); 
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue); 
    printf("Value in Square Meter is : %lf",dRet); 
    return 0;
} 
//Time Complexity : O(1)