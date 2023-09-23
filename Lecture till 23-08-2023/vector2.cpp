#include <iostream>
#include <vector>
using namespace std;
void print_vect(vector <int>v){


    int size=v.size();
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<v[i]<<endl;
    }
    
}
int main(){
vector<int> arr;
vector<int> arr2(5,-1);

print_vect(arr2);
vector<int> arr3={1,2,3,4,5};
print_vect(arr3);

// copy data
vector<int> arr4(arr3);
print_vect(arr4);
    return 0;
}