#include<iostream>
using std::cin; //声明使用std库的cin
using std::cout;
using std::endl;
using std::string;
#include <windows.h>
#include <iostream>
#include <string>
//迭代器
int main()
{
    string s("asss");                   //确保index不超过s.size  遇到空白为真，但是取反了1为0，所以退出循环
    
    for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index) {

        s[index] = toupper(s[index]);

    }
    cout << s << endl;

    return 0;
}
