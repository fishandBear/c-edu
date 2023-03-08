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
    string s("hello world!!!............");

    decltype(s.size()) punct_cnt = 0;//可能是因为s.size返回的类型是string::size_type，
    //众所周知这个类型是无符号的，如果定义为int 可能会有想不到的后果
    //统计s中的符号
    for (auto c : s) {
        if (ispunct(c)) {
            ++punct_cnt;
        }
       

    }

    cout << "fuhao = " << punct_cnt;

    



    

    return 0;
    

}
