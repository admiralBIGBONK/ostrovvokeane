#include <iostream>

using namespace std;
int
sum (int x, int y)
{
  return x + y;
}

int
mul (int x, int y)
{
  return x * y;
}

int
div2 (int x, int y)
{
  if (y == 0)
    {
      return 0;
    }
  else
    {
      return x / y;
    }
}

int
mod (int x, int y)
{
  if (y == 0)
    {
      return 0;
    }
  else
    {
      return x % y;
    }
}

bool
isEqual (int x, int y)
{
  return x == y ? true : false;
}

bool
isCreater (int x, int y)
{
  if (x == y)
    {
      return false;
    }
  else
    {

    }
  return x > y ? true : false;

}

double
tripPrice (int distance, double gas, double price)
{
  return 2 * distance * price * gas / 100;
}

bool
isInsidereet (int xLeft, int yTop, int xRight, int yBottom, int x, int y)
{
return}

int
main ()
{
  double res = tripPrice (67, 8.5, 6.5);
  cout << res;

  return 0;
}
