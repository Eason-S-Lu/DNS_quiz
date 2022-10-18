#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <locale>
#include <algorithm>
#include <stdexcept>
using namespace std;
    int main () {
        cout << "Welcome to the DNS tester your question are being generated." << endl;
        cout << "Please wait......" << endl;
        int hardness_int;
        unsigned seed= time(0);
        srand(seed);
        while (true){
        hardness_int = '1' + rand ()%3;
        cout << "Debug:hardness_int=" << hardness_int << endl;
        if (hardness_int == 49){
            cout << "Difficulty=1,easy" << endl;
        }
        else if (hardness_int == 50){
            cout << "Difficulty=2,medim" << endl;
        }
        else if (hardness_int == 51){
            cout << "Difficulty-3,hard" << endl;
        }
        else{
            cout << "Debug code expericence error at line 15" << endl;
        }
        }
    }