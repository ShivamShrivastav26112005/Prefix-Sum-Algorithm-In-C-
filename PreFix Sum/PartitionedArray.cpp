#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,10,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // first we find prefix sum
    // use extra array (extra space S.C. = O(n))
    int prefix[n]; // prefix array 
    prefix[0]=arr[0];
    for(int i=1; i<n; i++) // loop apply in array not prefix array 
    {
        prefix[i]=arr[i]+prefix[i-1];
    }
    for(int i=0; i<n; i++)
    {
        cout<<prefix[i]<<" ";
    }
    cout<<endl;
    // check if any x exits
    int idx=-1;
    bool flag=false;
    for(int i=1;i<n; i++)  // loop apply in prefix array not array 
    {
        if(2*prefix[i]==prefix[n-1])
        {
            flag=true;
            idx=i;
            cout<<i;
            break;
        }  
    }
    if(flag==true) cout<<" yes "; 
    else  cout<<" no ";
}