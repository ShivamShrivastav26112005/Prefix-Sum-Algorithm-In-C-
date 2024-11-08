// ********* Prefix Sum *********


// Method-1:

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     // for only printing the array we remove this loop also 
//     for(int i=0;i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int brr[n]; // we make a new array to stored prefix sum (new array -so, it takes space  S.C.=O(n))
//     brr[0]=arr[0]; // 1st ele of arr is same in brr always.
//     // we use for loop from 1 to n-1 and calculate our sum.here we use 1 for loop so,
//     // it takes no. of operations n-1 T.C.=O(n). this loop is run n-1 times T.C.=O(n-1)=O(n).
//     for(int i=1;i<n; i++) 
//     {
//         brr[i]=arr[i]+brr[i-1];
//     }
//     // for only printing the array we remove this loop also 
//     for(int i=0;i<n; i++)
//     {
//         cout<<brr[i]<<" ";
//     }
// }

// // 1 2 3 4 5 
// // 1 3 6 10 15

// // T.C.=O(n), S.C.=O(n)



// Method-2:

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for printing purpose only
    for(int i=0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    arr[0]=arr[0];
    // T.C.=O(n) and S.C.=O(1)  this is the best  T.C. , S.C.
    // not use any space to store the new array means we cann't make an new array 
    for(int i=1; i<n; i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    // for printing purpose only 
    for(int i=0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

// 1 2 3 4 5 
// 1 3 6 10 15  