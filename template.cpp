#include<iostream>
using namespace std;
template <typename T>

T Maxnum(T x, T y)
{
  return (x>y) ?x:y;
}



int main 
{
cout <<Maxnum<int> (4,5)<<endl;
cout <<Maxnum<float>(3.4,3.6)<<endl;
cout <<Maxnum<char>('c','f')<<endl;
