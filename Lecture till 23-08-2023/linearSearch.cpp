#include <iostream>

using namespace std;
int main(){
    
    int arr[]={2,4,6,8,10,12};
    int target =10;
    int flag=0;
    for (int i=0; i<6; i++){
        if(arr[i]==target){
            cout<<"target found";
            flag=1;
            break;

        }
    }
    if(flag==0){
             cout<<"target not  found";
    }
 




    return 0;}