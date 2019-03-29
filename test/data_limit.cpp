//
// Created by BriLiang on 2019/3/21.
//
#include "iostream"

#define ZERO 0

#include "climits"
#include "gtest/gtest.h"

void TEST_UNSIGNED_DATA() {
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each account." << endl << "Now ";
    //超过了极限值
    sam = sam + 1;
    //没有超过极限值
    sue = sue + 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl;
    cout << "Take $1 from each account." << endl << "Now ";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
}

void TEST_INT_VALUE() {
    using namespace std;
    //十进制
    int chest = 42;
    //十六进制
    int waist = 0x42;
    //八进制
    int inseam = 042;
    cout << "Monsiur cuts a striking figure!\n";
    cout << "chest = " << chest << " {42 in decimal}\n";
    cout << "waist = " << waist << " {0x42 in hex}\n";
    cout << "inseam = " << inseam << " {042 in octal}\n";

    cout << hex << endl;
    cout << "inseam is = " << inseam << "{042 in hex}\n";
}

TEST(test_unsigned_data, test_unsigned_data) {
    TEST_UNSIGNED_DATA();
}

TEST(test_int_value, test_int_value) {
    TEST_INT_VALUE();
}