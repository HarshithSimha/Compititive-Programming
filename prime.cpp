#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  // cout<< sqrt(9)<< sqrt(10);
  int n, flag=1;
  cin>> n;
for (int i = 2; i <=sqrt(n); i++)
{
  if (n%i==0)
  {
    cout<< "Not prime";
    flag--;
    return 0;
  }
}
if (flag==1)
  cout<< "Prime";

  return 0;
}