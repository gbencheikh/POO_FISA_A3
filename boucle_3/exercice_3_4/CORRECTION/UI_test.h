#include <iostream>
#include <cmath>

using namespace std; 

class test{
public: 
    static int tests_reussis;
    static int tests_rates;
 
    static void printResult(bool condition, const string& testName) {
        if (condition) {
            cout << "[OK]   " << testName << endl;
            tests_reussis++;
        } else {
            cout << "[FAIL] " << testName << endl;
            tests_rates++;
        }
    }
    static void ASSERT_EQ(double val1, double val2, string testName) {
        printResult((val1) == (val2), testName); 
    }

    static void ASSERT_NEAR(double val1,double  val2, double epsilon, string testName) {
        printResult(std::fabs((val1) - (val2)) < (epsilon), testName); 
    }
}; 

int test::tests_reussis = 0; 
int test::tests_rates = 0; 