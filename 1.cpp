#include <iostream>

namespace a_a
{
  int score = 1;
}

namespace a_b
{
  int score = 2;
}

using namespace std;
using namespace a_a;
using namespace a_b;


int main()
{
  int score = 3;
  cout << score << endl;
  cout << a_a::score << endl;
  cout << a_b::score << endl;



  string phrase = "hoho";
  cout << phrase.length();
  cout << phrase[0];
  //h
  cout << phrase[1];
  //o
  cout << "fjie" << endl;
  //한줄 = fjie/n

}
