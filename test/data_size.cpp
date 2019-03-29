//
// Created by BriLiang on 2019/3/18.
//

#include "data_size.h"
#include "iostream"
#include "climits"
#include "gtest/gtest.h"

void TEST_DATA_BYTES() {
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_long_long = LLONG_MAX;
    //判断类型字节
    cout << "int is " << sizeof n_int << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_long_long << " bytes." << endl;
    cout << endl;
    cout << "Maximum value s:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_long_long << endl << endl;
    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
}

void TEST_DATA_INIT() {
    using namespace std;
    int a;
    cout << "a is: " << a << endl;
    //C++11的写法
    int emus{7};
    int rhes = {12};
    cout << "emus is : " << emus << endl;
    cout << "rhes is : " << rhes << endl;
    //C++11写法括号空的话，初始化为0
    int rocs{};
    int psychics = {};
    cout << "rocs is : " << rocs << endl;
    cout << "psychics is : " << psychics << endl;
}

int add(int a, int b) {
    return a + b;
}

TEST(test_data_bytes, test_data_bytes) {
    EXPECT_EQ(add(2, 3), 5);
    TEST_DATA_BYTES();
}

TEST(test_data_init, test_data_init) {
    TEST_DATA_INIT();
}

