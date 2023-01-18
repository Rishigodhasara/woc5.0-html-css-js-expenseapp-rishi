//print given array in spiral order

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;

    int arr[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

    int row_start=0;
    int row_end=r-1;
    int column_start=0;
    int column_end=c-1;

    while (row_start<=row_end &&column_start<=column_end)
    {
        for(int col=column_start;col<=column_end;col++)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        for(int row=row_start;row<=row_end;row++)
        {
            cout<<arr[row][column_end]<<" ";
        }
        column_end--;
        
        
        for(int col=column_end;col>=column_start;col--)
        {
            cout<<arr[row_end][col]<<" ";
        }
    
        row_end--;

        for(int row=row_end;row>=row_start;row--)
        {
            cout<<arr[row][column_start]<<" ";
        }
        column_start++;
}
    
    return 0;
}