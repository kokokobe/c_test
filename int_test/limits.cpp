//
// Created by BriLiang on 2019/3/18.
//

#include "limits.h"
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
}

int add(int a, int b) {
    return a + b;
}

TEST(test_data_bytes, test_data_bytes) {
    EXPECT_EQ(add(2, 3), 5);
    TEST_DATA_BYTES();
}

