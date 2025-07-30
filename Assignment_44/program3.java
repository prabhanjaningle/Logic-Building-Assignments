///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Given the 2d matrix return the value of Maximum number of its diagonals 
/*
    Input :123
           456
           789
           
    Output :9
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
    public int MaxDiagonals()
    {
        int i = 0, j = 0,iMax = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for( j = 0; j < Arr[i].length;j++)
            {
                if(Arr[i] == Arr[j])
                {
                    if(iMax < Arr[i][j])
                    {
                        iMax = Arr[i][j];
                    }

                }
                if(Arr[i].length == i + j)
                {
                    if(iMax < Arr[i][j])
                    {
                        iMax = Arr[i][j];
                    }
                }
            }
        }

        return iMax;
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

        int iRet = mobj.MaxDiagonals();
        System.out.println("Maximum of diagonals of given matrix is : " + iRet);       
    }
    
}
