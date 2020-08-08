#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

class Date {
public:
  int GetYear() const;
  int GetMonth() const;
  int GetDay() const;
};

bool operator<(const Date& lhs, const Date& rhs);
`
class Database {
public:
  void AddEvent(const Date& date, const string& event);
  bool DeleteEvent(const Date& date, const string& event);
  int  DeleteDate(const Date& date);

  /* ??? */ Find(const Date& date) const;
  
  void Print() const;
};

int main() {
  Database db;
    
  string command;
  while (getline(cin, command)) {
    // РЎС‡РёС‚Р°Р№С‚Рµ РєРѕРјР°РЅРґС‹ СЃ РїРѕС‚РѕРєР° РІРІРѕРґР° Рё РѕР±СЂР°Р±РѕС‚Р°Р№С‚Рµ РєР°Р¶РґСѓСЋ
  }

  return 0;
}