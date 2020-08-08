#include<iostream>
#include<algorithm>
#include<cctype>
#include<vector>
#include<string>

using namespace std;


string str_to_low(const string& s) {
    string result;
    for (auto i : s) {
        result += tolower(i);
    }
    return result;
}


int main() {
    unsigned int N;
    cin >> N;
    vector<string> words;
    for (N; N > 0; --N) {
        string word;
        cin >> word;
        words.push_back(word);
    }
    
    sort(begin(words), end(words), [](string x, string y) {
        return str_to_low(x) < str_to_low(y);
    });

    for (const auto& i : words) {
        cout << i << " ";
    } 
    return 0;
}
