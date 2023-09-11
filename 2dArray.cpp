#include <iostream>
#include <limits.h>

using namespace std;
int main(){
int r,c;
cout<<"enter no of row :";
cin>>r;
cout<<"enter no of col :";
cin>>c;

cout<<"row "<<r<<"\ncol "<<c<<endl;
int arr[r][c];


for(int i=0; i<r; i++){
    cout<<"enter "<<i<<"row "<<endl;
    for(int j=0; j<c; j++){
        cin>>arr[i][j];
    }
}

for(int i=0; i<r; i++){
    cout<<"enter "<<i<<"row "<<endl;
    for(int j=0; j<c; j++){
        cout<<arr[i][j]<<endl;
    }
}
    return 0;
}