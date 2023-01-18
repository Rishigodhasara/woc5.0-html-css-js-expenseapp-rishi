#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter array size = ";
    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int maxno=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>maxno)
        {
            maxno=arr[i];
        }
    }
    cout<<"Maximum number in array = "<<maxno;

    int minno=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<minno)
        {
            minno=arr[i];
        }
    }
    cout<<"\nMinimum number in array = "<<minno;

    return 0;
}