// write fun sum of three numbers
# include <iostream>
using namespace std;
void add(int a,int b,int c){
cout<< "sum is " <<a+b+c <<endl;
}
int add2(int a,int b,int c){
return a+b+c;
}
int main(){

int sum=add2(1,2,3);
cout<< "sum is "<<sum<<endl;
    return 0;
}
