# include <iostream>
using namespace std;


int max1(int x, int y, int z){
    if(x>y){
        if(x>z){
            return x;
        }
        else{
            return z;
        }


    }
    else{
        return y;

    }
}
int main(){
// int m=max1(34,98,100);

// using stl
int m=max(34,max(98,100));
cout<< m<<endl;



    return 0;
}