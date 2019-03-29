//
// Created by BriLiang on 2019/3/28.
//
#include "gtest/gtest.h"
#include "constant.h"

using namespace std;

void TEST_FLOAT_DATA() {
    float a = 2.54e+8;
    float b = 8.33E-4;
    float c = 7E5;
    double d = -18.34e13;
    cout << "float data is: " << a << " " << b << " " << c << " " << d << endl;
}

TEST(test_float_data, test_float_data) {
    TEST_FLOAT_DATA();
}