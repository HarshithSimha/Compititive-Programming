#include <iostream>
using namespace std;

int main()
{
  int n, flag=1;
  cin>> n;
  for (int i = 2; i < n; i++)
  {
    if (n%i==0)
    {
      cout<< "Not prime";
      flag=0;
      break;
    }
  }
  if (flag==1)
  {
    cout<< "Prime";
  }

  return 0;
}