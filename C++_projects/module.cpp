#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;


int main() {
    unsigned int N;
    cin >> N;
    vector<int> numer;
    for (N; N > 0; --N) {
        int dig;
        cin >> dig;
        numer.push_back(dig);
    }
    
    sort(begin(numer), end(numer), [](const int& x, const int& y) {
        return abs(x) < abs(y);
    });

    for (const auto& i : numer) {
        cout << i << " ";
    } 
    return 0;
}
