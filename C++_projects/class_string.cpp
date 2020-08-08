#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class ReversibleString {
public:
  ReversibleString() {}
  ReversibleString(const string& s) {
    data = s;
  }
  void Reverse() {
    reverse(begin(data), end(data));
  }
  string ToString() const {
    return data;
  }
private:
  string data;
};



int main() {

    string word;
    cin >> word;
    
    ReversibleString s(word);
    s.Reverse();
    cout << s.ToString() << endl;
  
    s.Reverse();
    const ReversibleString& s_ref = s;
    string tmp = s_ref.ToString();
    cout << tmp << endl;
  
    ReversibleString empty;
    cout << '"' << empty.ToString() << 
        '"' << endl;
  
    return 0;
}