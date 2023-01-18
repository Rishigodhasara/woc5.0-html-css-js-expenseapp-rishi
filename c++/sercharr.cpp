/*serching element in array by using binary sort*/
//in this method given array should must be sorted in assending order
//Binary serch take less time then linear serch
#include<iostream>
using namespace std;

int binaryserch(int arr[],int n,int element)
{
    int s=0;//s=starting point=a[0]
    int e=n;//e=ending point=a[n]

    while (s<=e)
    {
        int mid=(s+e)/2;

        if(arr[mid]==element)
        {
            return mid;
        }
        else if(arr[mid]>element)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
    
}
int main()
{
    int n;
    cout<<"Enter array size = ";
    cin>>n;

    int arr[n];

        for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int element;
    cout<<"Enter serch element = ";
    cin>>element;
    int temp=binaryserch(arr,n,element);

    if(temp!=-1)
    {
        cout<<"Entered Element is at position : "<<temp<<endl;
    }
    else
    {
        cout<<"Entered Element is not found in given array";
    }
}