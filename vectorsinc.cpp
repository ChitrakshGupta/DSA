#include <iostream>
#include <vector>
using namespace std;

// void print_arr(int a[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<endl;

//         /* code */
//     }
    
// }


void print_vect(vector <int>v){


    int size=v.size();
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<v[i]<<endl;
    }
    
}
int main(){
    //static memory alloc;
    // int arr[5]={1,2,3,4,5};
    // int n;
    // cout<<"enter no n :"<<endl;
    // cin>>n;

    //  int *arr= new int[n]; // each element should be zero
    //   cout<<"enter elements"<<endl; 
    //  for (int i = 0; i < n; i++)
    //  {
    //     /* code */
    //     cin>>arr[i];
    //  }

     

    // print_arr(arr,n);

    /// in vector
    vector <int> v;

    // understanding size and internal behaviour
    // while (1)
    // {
    //     /* code */
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    //     cout<<"capacity "<<v.capacity()<< "size "<<v.size()<<endl;

    // }
    
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // print_vect(v);

    // v.pop_back();
    //     print_vect(v);


        ///taking input in vector

            int n;
    cout<<"enter no n :"<<endl;
    cin>>n;
for(int i=0; i<n; i++){
    int d;
    cin>>d;
    v.push_back(d);
}

print_vect(v);


cout<< "at some index "<< v.at(1);
 


    return 0;
}