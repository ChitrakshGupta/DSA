#include<iostream>
using
namespace   std;    
int fact(int n){
    if(n==1){
        return 1;

    }
    int prevFact = fact(n-1);
    return n*prevFact;
}
int sum_of_digits(int n){
    if(n==0){
        return 0;
    }
    int prev_sum = sum_of_digits(n/10);
    return n%10 + prev_sum;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}