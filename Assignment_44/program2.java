///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Given the 2d and number return the frequency of that number from matrix
/*
    Input :123
           452
           729
    
    No : 2

    Output :3
*/
//Date : 29-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class matrix
{
    private int Arr[][];

    public matrix(int A,int B,int No)
    {
        Arr = new int[A][B];
    }

    public void Accept()
    {
        System.out.println("please enter the elements of matrix : ");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length;j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

    }

    public int Frequency(int No)
    {
        int i = 0, j = 0,iCount = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for( j = 0; j < Arr[i].length;j++)
            {
                if(Arr[i][j] == No)
                {
                    iCount++;
                }
            }
        }

        return iCount;
    }

    
    
}

public class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of coloumns : ");
        int iCol = sobj.nextInt();

        System.out.println("Enter the number you want to find the frequency : ");
        int iNo = sobj.nextInt();

        matrix mobj = new matrix(iRow, iCol,iNo);

        mobj.Accept();
        
        int iRet = mobj.Frequency(iNo);
        System.out.println("Frequency of given number " +iNo+ " is : " + iRet); 
    }
    
}
