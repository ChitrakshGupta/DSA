#include <iostream>
using namespace std;
int main(){

    int arr[5];
    cout<<"enter numbers "<<endl;
    for(int i=0; i<5; i++){
        cin >>arr[i];
    }
    for(int i=0; i<5; i++){
        cout << "element no " << i+1<<" " << arr[i] <<endl;
    }
    return 0;
}