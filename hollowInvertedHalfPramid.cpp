#include <iostream>

using namespace std;
int main(){
    int n;
    printf("enter no n");
    cin>> n;

    for(int i=0; i<n; i++){
        for (int j = 0; j < n; j++)
        {
              if(i==0||j==0||j+i==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<""<<endl;
        
    }

    return 0;
}