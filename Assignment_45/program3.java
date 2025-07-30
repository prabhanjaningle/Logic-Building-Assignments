///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Given the 2d reverse the coloumns
/*
    Input :123
           456
           789
           654
           
    Output :321
            654
            987
            456

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
    public void ReverseColoum()
    {
        int i = 0, j = 0;

        for(i = Arr.length-1; i >=  0; i--)
        {
            for(j = 0; j < Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]);
            }
            System.out.println();
        }
        
    }

    
    
}

public class program3
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

        mobj.ReverseColoum();

    }
    
}
