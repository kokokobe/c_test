//
// Created by BriLiang on 2019/3/22.
//

#include "gtest/gtest.h"
#include "constant.h"
using namespace std;

void TEST_CHAR_DATA() {
    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl;

    //char 存储和int 存储特性
    char ch1 = 'M';
    int i = ch1;
    cout << "The ASCII code for " << ch1 << " is " << i << endl;
    cout << "Add one to the character code:" << endl;
    //对字符数字增加
    ch1 = ch1 + 1;
    //没有提示警告，说明字符的值传递给int是位数拓展，不会引起问题
    i = ch1;
    cout << "The ASCII code for " << ch1 << " is " << i << endl;
    //使用cout.put 成员函数显示字符
    cout << "Displaying char ch using cout.put(ch):";
    cout.put(ch1);
    cout.put('!');
    cout << endl << "Done" << endl;
    cout << "字符|字符串换行符:";
    cout << '\n';
    cout << "\n";
    cout << "转义字符:" << endl;
    cout << "Ctr+Z is: \x1a" << endl;
}

void TEST_STR_TRANSLATION() {
    using namespace std;
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    //虽然报错了，但是编译不会有问题
    int k\u00F6rper = 3;
    cout << "Let them eat g\u00E2teau.\n";
}

void TEST_WIDE_CHAR() {
    wchar_t bob = L'P';
    cout << "长字符:" << endl;
    wcout << L"tall" << endl;
    char16_t ch1 = u'q';
    char32_t ch2 = U'\U0000222B';
    cout << "char16 is:" << ch1 << " " << endl;
    cout << "char32 is:" << ch2 << " " << endl;
    cout << "constant value AAA is :" << AAA << endl;
}

TEST(test_char_data, test_char_data) {
    TEST_CHAR_DATA();
    TEST_STR_TRANSLATION();
    TEST_WIDE_CHAR();
}