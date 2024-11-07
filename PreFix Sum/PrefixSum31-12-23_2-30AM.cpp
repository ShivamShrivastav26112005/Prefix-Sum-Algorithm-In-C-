// // Make a program for prefix sum array.


// Use array and vector both.
// here we use array to make a program for prefix sum




// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     // normal array is printed
//     for(int i=0; i<n; i++) //O(n)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;  

//     // Prefix sum algorithm starts O(n)
//     int prefix[n];  // use extra array(extra space) S.C.= O(n)
//     prefix[0]=arr[0];
//     for(int i=1; i<n; i++)  // O(n)
//     {
//         prefix[i]=arr[i]+prefix[i-1];
//     }

//     // after adding ele.s prefixsum array is printed
//      for(int i=0; i<n; i++)
//     {
//         cout<<prefix[i]<<" ";
//     }
//     cout<<endl;
    
//     // we want to print sum till 4th ele.
//     cout<<prefix[3];
// }
// // 1 2 3 4 5 
// // 1 3 6 10 15 






// here we use vector to make a program for prefix sum


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int ar[]={1,2,3,4,5};
//     int n=sizeof(ar)/sizeof(ar[0]);
//     for(int i=0; i<n; i++) 
//     {
//         cout<<ar[i]<<" ";
//     }
//     cout<<endl;
//     // push the given array into a vector
//     vector<int>v(ar,ar+n);
//      for(int i=0; i<n; i++)
//     {
//         cout<<v[i]<<" ";
//     }

//     vector<int>prefix(n); // use extra vector(extra space) S.C.= O(n)
//     prefix[0]=v[0];
//     for(int i=1; i<v.size(); i++)
//     {
//         prefix[i]=v[i]+prefix[i-1];
//     }
//     cout<<endl;
//      for(int i=0; i<n; i++)
//     {
//         cout<<prefix[i]<<" ";
//     }
// }

 


 //        *************          
 // in this algo we can't use extra array or vector 
 // T.C = O(n)  ,   S.C. = O(1)  => This is the best method ever.



//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     // prefix sum 
//     arr[0]=arr[0];
//     for(int i=1; i<n; i++)
//     {
//         // arr[i]=arr[i]+arr[i-1];
//         arr[i]+=arr[i-1];
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//  }






// Ques.1-> Find the sum from 2nd idx to 5th idx 
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // prefix sum 
    // use extra array 
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n; i++)
    {
        prefix[i]=arr[i]+prefix[i-1];
    }
    for(int i=0; i<n; i++)
    {
        cout<<prefix[i]<<" ";
    }
    cout<<endl;

    // we want to find sum from idx 2 to idx 5.
    // for(int i=0; i<n; i++)
    // {
    //     prefix[i]=prefix[5]-prefix[1];
    //     cout<<prefix[i];
    //     break;
    // }


            //    Or  



    // given idx a=1 to b=4
    int a=1;
    int b=4;
    for(int i=0; i<n; i++)
    {
        prefix[i]=prefix[b]-prefix[a-1];
        cout<<prefix[i];
        break;
    }

}

// 1 2 3 4 5 6 
// 1 3 6 10 15 21 
// 14