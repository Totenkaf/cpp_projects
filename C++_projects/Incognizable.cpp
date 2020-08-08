#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>

using namespace std;


struct Incognizable
{
    int one = -1;
    int two = -2;
};



int main() {
  Incognizable a;
  cout << a.one << " " << a.two << endl;

  Incognizable b = {};
  cout << b.one << " " << b.two << endl;
  
  Incognizable c = {0};
  cout << c.one << " " << c.two << endl;

  Incognizable d = {0, 1};
  cout << d.one << " " << d.two << endl;
  return 0;
}

