#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n, flag=1;
  cin>> n;
  if (n==1)
  {
    cout<< "Not prime";
    return 0;
  }
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