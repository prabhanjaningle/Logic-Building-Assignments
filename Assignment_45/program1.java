///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Given the 2d matrix transpose it.
/*
    Input :123
           456
           789
           
           
    Output :147
            258
            369

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
    public void Transpose()
    {
        int i = 0, j = 0;

        for(i = 0; i <Arr[0].length; i++)
        {
            for(j = 0; j < Arr.length; j++)

            {
                System.out.print(Arr[j][i]);
            }
            System.out.println();
        }
        
    }

    
    
}

public class program1
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

        mobj.Transpose();
       
    }
    
}
