#include <iostream>
#include <random>

using namespace std;

int main(int argc, char** argv)
{

    cout << "Starting Cpp11-Random Test" << endl;

#if 0
    // Generates duplicate pseudo-random numbers with below code
    default_random_engine drng0{0};
    default_random_engine drng1{random_device{}()};
    default_random_engine drng2{0};
#elif 0
#else
    // Produces proper pseudo-random numbers with below code
    ranlux24_base drng0{0};
    ranlux24_base drng1{random_device{}()};
    ranlux24_base drng2{0};
#endif

    cout << "drng0: " << drng0() << endl;
    cout << "drng1: " << drng1() << endl;
    cout << "drng2: " << drng2() << endl;

    drng0.seed(0);
    drng2.seed(1);

    cout << "drng0: " << drng0() << endl;
    cout << "drng1: " << drng1() << endl;
    cout << "drng2: " << drng2() << endl;

    cout << "drng0: " << drng0() << endl;
    cout << "drng1: " << drng1() << endl;
    cout << "drng2: " << drng2() << endl;

    cout << "drng0: " << drng0() << endl;
    cout << "drng1: " << drng1() << endl;
    cout << "drng2: " << drng2() << endl;

    return 0;
}
