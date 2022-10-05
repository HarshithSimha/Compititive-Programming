#include <iostream>
using namespace std;

int main()
{
  int n, fact=0;
  cin>> n;
for (int i = 1; i <=n; i++)
{
  if (n%i==0)
  {
    fact++;
  }
}
if (fact==2)
{
  cout<< "Prime";
}
else
{
  cout<< "Not prime";
}



  return 0;
}