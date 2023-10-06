#include <iostream>
using namespace std;    
int bin(int n)
{
 int i = 1;
 int a = 0;
 while (n > 0)
 {
 a = a + (n % 2) * i;
 cout<<(n%2)<<(n%2)*i<<endl;
 n = n / 2;
 i = i * 10;
 }
 return a;
}
int main()
{
 int n;
 printf("enter number :");
 scanf("%d", &n);
 int ans = bin(n);
 printf("binary no is ");
 printf("%d", ans);
 return 0;
} 

