#include <iostream>
#include <limits.h>

using namespace std;
int binarySearch(int arr[],int n, int target){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){

        //found
        if(arr[mid]==target){
            return mid;
            //return index of found element

        }
        else if(target<arr[mid]){
            //right me jao
            start=mid+1;



        }
        else{
            //left me jao

            end=mid-1;
        }

//mid ko update

        mid=(start+end)/2;
        
    }
    // agr yha tk pauch gye 
    //kuch bhireturn nhi hua iska mtlb kuch output me nhi aya
    return 1;

}
int main(){

int n;
cin>>n;
int arr[n];
int target=3;
for(int i=0; i<n; i++){
    cin>>arr[i];

}
int ansIndex=binarySearch(arr,n,target);
if (ansIndex!=-1)
{
    cout<<"index is "<<ansIndex;
    /* code */
}
else{
    cout<<"not found";
}



return 0;}