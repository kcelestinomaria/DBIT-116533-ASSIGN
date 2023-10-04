#include <iostream>
#include <string>

using namespace std;

int main() {

    // Step 1 - initiate a string array to hold(contain) our statements in memory
    string statements[3] = {"Welcome to the wonderful world of C++!",
                            "This is my first C++ output statement",
                            "Soon, I will learn how to input data into my program"
                            };

    // Step 2 - loop through the `statements` string array, and print out the stored statements
    for (int i = 0; i < 3; i++) {
        cout << statements[i] << endl;
    }
}