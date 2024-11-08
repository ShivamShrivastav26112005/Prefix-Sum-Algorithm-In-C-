#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={-1,-8,0,5,-9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // first we sort the array 
    // by using build-in sort function
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // second suffix sum of the array 
    int suf[n];
    suf[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        suf[i]=arr[i]+suf[i+1];
    }
    for(int i=0; i<n; i++)
    {
        cout<<suf[i]<<" ";
    }
    cout<<endl;

    // find the index where ele.s comes positive in suffix array
    int idx=-1;
    for(int i=0; i<n; i++)
    {
        if(suf[i]>=0) 
        {
           idx=i; 
           break;
        }
    }
    cout<<idx;
    cout<<endl;

    // we want to find maximum sum 
    int mxsum=0;
    int x=1;
    for(int i=idx; i<n; i++)
    {
        mxsum+=arr[i]*x;
        x++;
    }
    cout<<mxsum;
}

// -1 -8 0 5 -9 
// -9 -8 -1 0 5
// -13 -4 4 5 5 
// 2
// 14
