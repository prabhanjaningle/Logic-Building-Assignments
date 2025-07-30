///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Given the 2d check matrix is parse or not

/*
    Input :123
           456
           789
           654
           
    Output :not a Sparse matrix

*/
//Date : 30-07-2025
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
    public Boolean ChkParse()
    {
        int i = 0, j = 0,iZeroCnt = 0;
        Boolean bCheck = true;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length;j++)
            {
                if(Arr[i][j] == 0)
                {
                    iZeroCnt++;
                }
            }
        }

        if(iZeroCnt > ((Arr.length * Arr[0].length)/2))
        {
            bCheck = true;
        }
        else
        {
            bCheck = false;
        }
        return bCheck;
        
    }

    
    
}

public class program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        Boolean bRet =  false;
        
        System.out.println("Enter the number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of coloumns : ");
        int iCol = sobj.nextInt();

        
        matrix mobj = new matrix(iRow, iCol);

        mobj.Accept();

        bRet =  mobj.ChkParse();
        if(bRet == true)
        {
            System.out.println("Given matrix is Parse");
        }
        else
        {
            System.out.println("Given matrix is not Parse");
        }
    }
    
}
