#include <stack>
#include <iostream>


struct Brackets {
    char form;
    int count;
};


int main() {

    std::stack<Brackets> s;

    int i = 0;
    char c;

    while((c = std::cin.get()) != '\n') {
        Brackets bracket;
        
        bracket.form = c;
        bracket.count = i++;


        switch (c) 
        {

        case '(': case '{': case '[':
            s.push(bracket);
            break;


        case ')': case '}': case ']':
           if (s.empty()) {
                std::cout << bracket.count + 1 << "\n";
                return 0;
            }

            else if ((c == ')' && s.top().form != '(') ||
                (c == '}' && s.top().form != '{') || (c == ']' && s.top().form != '[')) {

                std::cout << i << "\n";
                return 0;
            }

            s.pop();
            break;

        }
    }

    if(s.empty()) {
        std::cout << "Success\n";
    }
    else 
        std::cout << s.top().count + 1 << "\n";
}
