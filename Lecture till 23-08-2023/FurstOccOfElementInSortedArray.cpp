#include <iostream>
#include <limits.h>

using namespace std;
int firstOcc(int arr[],int n, int target){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int found_ind=-1;
    while(start<=end){

        //found
        if(arr[mid]==target){
            // ans store
            found_ind=mid;
            //left me jao
            end=mid-1;
            

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
// diyan rakho glti yha hi hot he

        mid=(start+end)/2;
        
    }
    // agr yha tk pauch gye 
    //kuch bhireturn nhi hua iska mtlb kuch output me nhi aya

    return found_ind;

}
int main(){

int n;
cin>>n;
int arr[n];
int target=30;
for(int i=0; i<n; i++){
    cin>>arr[i];

}
int ansIndex=firstOcc(arr,n,target);
if (ansIndex!=-1)
{
    cout<<"first occurence is "<<ansIndex;
    /* code */
}
else{
    cout<<"not found";
}



return 0;}