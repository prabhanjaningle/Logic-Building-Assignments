///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Given the 2d matrix print the value of addition of its coloumns 
/*
    Input :123
           456
           789
           
    Output :12 15 18
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
    public void AddColoumns()
    {
        int i = 0, j = 0,iMax = 0;

            for(j = 0; j < Arr[0].length;j++)
            {
                iMax = 0;
                for(i = 0; i < Arr.length; i++)
                {
                    iMax = iMax + Arr[i][j];

                }
                System.out.println("Addition of : " + j + " coloumns is : " + iMax);
               
            }
            
        

    }

    
    
}

public class program4
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

        mobj.AddColoumns();
    }
    
}
