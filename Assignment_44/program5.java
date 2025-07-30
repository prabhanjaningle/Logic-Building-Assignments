///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Given the 2d matrix swap the consecative rows of matric
/*
    Input :123
           456
           789
           654
           
    Output :456
            123
            654
            789

*/
//Date : 29-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class matrix
{
    private int Arr[][];

    public matrix(int A,int B)
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
    public void SwapRows()
    {
        int i = 0, j = 0 , k = 0,iMax = 0;
 
        int iRowIndex = 0;
        int iRowIndex2 = 1;

        for(iRowIndex = 0,iRowIndex2 = 1; iRowIndex2 <= Arr[i].length; iRowIndex += 2,iRowIndex2+=2)
        {
            int[] temp = Arr[iRowIndex];
            Arr[iRowIndex] = Arr[iRowIndex2];
            Arr[iRowIndex2] = temp;
        }

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length;j++)
            {
                System.out.print(Arr[i][j] + " ");
            }
            System.out.println();
        }
    }

    
    
}

public class program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of coloumns : ");
        int iCol = sobj.nextInt();

        
        matrix mobj = new matrix(iRow, iCol);

        mobj.Accept();

        mobj.SwapRows();
        
    }
    
}
