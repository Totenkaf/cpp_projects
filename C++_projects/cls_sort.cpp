#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

class SortedStrings {
    public:
        void AddString(const string& s) {
            income.push_back(s);
        }
        vector<string> GetSortedStrings() {
            sort(income.begin(), income.end());
            return income;
        }
    private:
        vector<string> income;
};


void PrintSortedStrings(SortedStrings& strings) {
    for(const string& s : strings.GetSortedStrings()) {
        cout << s << " ";
    }
    cout << endl;
}

int main() {
  SortedStrings strings;
  
  strings.AddString("first");
  strings.AddString("third");
  strings.AddString("second");
  PrintSortedStrings(strings);
  
  strings.AddString("second");
  PrintSortedStrings(strings);
  
  return 0;
}