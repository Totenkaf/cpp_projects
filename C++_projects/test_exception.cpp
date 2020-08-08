#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

int Agressive() {
    throw runtime_error("fail");
    return 2;
}

int main() {
    try {
        cout << Agressive() << endl;
    } catch (const runtime_error& ex) {
        cout << "exception: " << ex.what() << endl;
    }

    return 0;
}
