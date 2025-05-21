////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  program which accept distance in kilometre and convert it into meter.
//Date : 19-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h> 

double FhtoCs(float fTemp) 
{ 
    double celcius = ((fTemp - 32) * (5.0/9.0));
    //celcius = 

   return celcius;
} 


int main() 
{ 
    float fValue1 = 0.0; 
    double dRet = 0.0; 
 

    printf("Enter temperature in Fahrenheit: \n"); 
    scanf("%f",&fValue1); 

    dRet = FhtoCs(fValue1);
    printf("The tempreture in celcius is : %lf",dRet); 
    return 0;
} 
//Time Complexity : O(1)