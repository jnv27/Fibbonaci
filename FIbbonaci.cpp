#include <stdio>
#include <iostream>

using namespace std;

int main()
{
  
  int n;
  cin>>n;
  
  int num = fib(n);
  cout<<num;
  
  return 0;
}

int fib(int n)
{
  if(n==0||n==1)
    return 1;
    
  return fib(n-1) + fib(n-2);
}  

