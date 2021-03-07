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


  cout << "fjie" << endl;
  //한줄 = fjie/n
  string phrase = "hohoho";
  cout << phrase.length();
  cout << endl;
  cout << phrase[0];
  //h
  cout << endl;
  cout << phrase[1];
  //o
  phrase[0] = 'b';
  cout << endl;
  cout << phrase << endl;
  //phrase =  hoho -> boho

  cout << phrase.find("ho", 0) << endl;
  // 어디서부터 찾을건지, 0 첫글자부터 return2 3 네번째 그자부터. retun 4
  
  cout << phrase.substr(1, 3) << endl;
  // 글자 가져오기 (가져올 위치, 글자수)  oho
  
  string a = "abcdefg";
  string b;
  b = a.substr(2, 2);
  cout << b << endl;
  
  //////////////////// numbers
  //////////////////// numbers
  //////////////////// numbers
  
  
  





}
