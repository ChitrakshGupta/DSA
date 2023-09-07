#include <iostream>
#include <limits.h>

using namespace std;
int min(int arr[],int size){
    int m=INT_MAX;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if(arr[i]<m){
            m=arr[i];
        }
    }
    return m;
    
}
int main(){
    
    int arr[]={2,4,6,8,10,-1};
    int size=6;
    int min_no=min(arr,size);
    cout<<min_no;





    return 0;}