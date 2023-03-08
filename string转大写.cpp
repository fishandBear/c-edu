#include<iostream>
using std::cin; //声明使用std库的cin
using std::cout;
using std::endl;
using std::string;
#include <windows.h>
#include <iostream>
#include <string>

int main()
{
    string s("hello wold!!!!");

    for (auto &c : s) {//注意是引用，引用相当于s的别名
        c = toupper(c);
    }
    cout << s << endl;

    return 0;
}
