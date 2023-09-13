#include <iostream>
#include <limits.h>

using namespace std;
int missingEle(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
        int diff=arr[mid]-mid;

        //found
        if(diff==1){
            //right me jao
            end=mid-1;
            

        }
        
        else{
            //ans store
            ans=mid;

            //left me jao
            end=mid-1;
        }

//mid ko update
// diyan rakho glti yha hi hot he

        mid=(start+end)/2;
        
    }
    // agr yha tk pauch gye 
    //kuch bhireturn nhi hua iska mtlb kuch output me nhi aya

    /// last case me code fat rha he 
    if(ans+1==0){
        return n+1;
        
    }

    return ans+1;

}
int main(){

int n;
cin>>n;
int arr[n];
int target=30;
for(int i=0; i<n; i++){
    cin>>arr[i];

}
int ansIndex=missingEle(arr,n);
if (ansIndex!=-1)
{
    cout<<"missing element "<<ansIndex;
    /* code */
}
else{
    cout<<"not missing";
}



return 0;}