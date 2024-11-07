// Product of array execpt self.

// Method:1- By using division operator.



// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     // print array
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     //  product -> Algo
//     // use extra space/array
//     int product=1;
//     for(int i=0; i<n; i++)
//     {
//         product*=arr[i];
//     }
//     // print product
//     for(int i=0; i<n; i++)
//     {
//         cout<<product<<" ";
//     }
//     cout<<endl;

//     int ans[n];
//     for(int i=0; i<n; i++)
//     {
//         ans[i]=product/arr[i];
//     }
//     // print ans
//     for(int i=0; i<n; i++)
//     {
//         cout<<ans[i]<<" ";
//     }
// }
// 1 2 3 4 
// 24 24 24 24 
// 24 12 8 6



// Same code write in less no. of lines 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     // product
//     int product=1;
//     for(int i=0; i<n; i++)
//     {
//         product=product*arr[i];
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<product<<" ";
//     }
//     cout<<endl;
//     // ans array
//     int ans[n];
//     for(int i=0; i<n; i++)
//     {
//         ans[i]=product/arr[i];
//     }
//      for(int i=0; i<n; i++)
//     {
//         cout<<ans[i]<<" ";
//     }
    
// }

// // 24 24 24 24
// // 24 12 8 6 


// if zero comess in array than it becomes all product is zero 
// so, we use product 2 and it takes zeros in it 



// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={0,0,1,2,1,3,0,1,0,2};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int product=1;
//     int p2=1;
//     int noz=0; // count noz.
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==0) noz++;
//         p2*=arr[i];
//         if(arr[i]!=0)
//         product*=arr[i];
//     }

//     if(noz>1) p2=0;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==0) arr[i]=p2;
//         else arr[i]=product/arr[i];
//     }
//        for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// // 0 0 12 6 12 4 0 12 0 6 




// ****************    Suffix Sum        **************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // suffix sum
//     int suf[n];
//     suf[n-1]=arr[n-1];
//     for(int i=n-2; i>=0; i--)
//     {
//         suf[i]=arr[i]+suf[i+1];
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<suf[i]<<" ";
//     }
//     cout<<endl;
//     //suffix product
//     int suf2[n];
//     suf2[n-1]=arr[n-1];
//     for(int i=n-2; i>=0; i--)
//     {
//         suf2[i]=arr[i]*suf2[i+1];
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<suf2[i]<<" ";
//     }

   
// }

// 1 2 3 4 
// 10 9 7 4 
// 24 24 12 4 


// Method -2 Best MEthod T.C.= O(n)  
// By using prefix and Suffix Product

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     // prefix product
//     int pre[n];
//     pre[0]=1;
//     pre[1]=1;
//     for(int i=2; i<n; i++)
//     {
//         pre[i]=arr[i-1]*pre[i-1];
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<pre[i]<<" ";
//     }
//     cout<<endl;

//     // suffix product
//     int suf[n];
//     suf[n-1]=1;
//     for(int i=n-2; i>=0; i--)
//     {
//         suf[i]=suf[i+1]*arr[i+1];
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<suf[i]<<" ";
//     }
//     cout<<endl;

//     int ans[n];
//     for(int i=0; i<n; i++)
//     {
//         ans[i]=pre[i]*suf[i];
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<ans[i]<<" ";
//     }

// }

// // 1 2 3 4 
// // 1 1 2 6 
// // 24 12 4 1 
// // 24 12 8 6 



// Ques->Find product of array except self.
// Same code only for practice 

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // prefix produc
    int pre[n];
    pre[0]=1;
    pre[1]=1;
    for(int i=2; i<n; i++)
    {
        pre[i]=arr[i-1]*pre[i-1];
    }

    for(int i=0; i<n; i++)
    {
        cout<<pre[i]<<" ";
    }
    cout<<endl;

    // suffix array
    int suf[n];
    suf[n-1]=1;
    for(int i=n-2; i>=0; i--)
    {
        suf[i]=arr[i+1]*suf[i+1];
    }

    for(int i=0; i<n; i++)
    {
        cout<<suf[i]<<" ";
    }
    cout<<endl;
   
    int ans[n];
    for(int i=0; i<n; i++)
    {
        ans[i]=pre[i]*suf[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }

}