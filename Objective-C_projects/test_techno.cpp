#include <iostream>

int main() {
#define num 0

    int mas[5] = {1};
    std::cout << sizeof(mas) << std::endl;
    int cnt = num;
    mas[num] = 400;

#if num
    std:cout << mas[num];
#else
    std::cout << mas[++cnt] << std::endl;
#endif
    return 0;
}