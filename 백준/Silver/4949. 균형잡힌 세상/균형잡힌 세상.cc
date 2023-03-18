#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    while (1)
    {
        string str;
        getline(cin, str);

        if (str == ".") {break;}

        bool _balance = true;
        vector<char> stack;
        for (int i = 0; i < str.size(); i++)
        {
            if (str.at(i) == '(') {stack.push_back(1);}
            else if (str.at(i) == '[') {stack.push_back(2);}
            else if (str.at(i) == ')')
            {
                if (stack.size() == 0) {_balance = false; break;}
                if (stack[stack.size()-1] == 1) {stack.pop_back();}
                else {_balance = false; break;}
            }
            else if (str.at(i) == ']')
            {
                if (stack.size() == 0) {_balance = false; break;}
                if (stack[stack.size()-1] == 2) {stack.pop_back();}
                else {_balance = false; break;}
            }
        }

        if (_balance && stack.size() == 0) {cout << "yes" << endl;}
        else {cout << "no" << endl;}
    }
}