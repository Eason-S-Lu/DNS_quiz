#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <locale>
#include <algorithm>
#include <stdexcept>
#include <chrono>
#include <thread>
using namespace std;
    int main () {
        using namespace std::this_thread;
        using namespace std::chrono;
        cout << "Welcome to the DNS tester your question are being generated." << endl;
        cout << "Please wait......" << endl;
        int hardness_int;
        unsigned seed= time(0);
        srand(seed);
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
            cout << "Debug:code expericence error at line 15" << endl;
        }
        cout << "Be ready to answer your question."<< endl;
        cout << "Your question start in 3." << endl;
        sleep_for(seconds(1));
        cout << "2" << endl;
        sleep_for(seconds(1));
        cout << "1" << endl;
        sleep_for(seconds(1));
        cout << "Question 1:";
        cout << "example.com >> 0.0.0.0 is a [blank] recourd." << endl;
        sleep_for(seconds(1));
        cout << "A:A        B:AAAA         C:CNAME        D:TXT" << endl;
        sleep_for(seconds(1));
        cout << "Please type A,B,C,D to the answer box" << endl;
        while (true){
        cout << "Your choise is:";
        char answer1;
        cin >> answer1;
        cout << endl;
        if (answer1 == 'A' || 'B' || 'C' || 'D'){
            cout << "Your answer is accpted. Your answer is: " << answer1 << endl;
            break;
        }
        else {
            cout << "Please type A or B or C or D" << endl ;
        }
        //end if
        }
        //end while
        cout << "Question 3:";
        cout << "example.com >> e97d:71a6:901d:e458:2a4f:5798:da50:0747 is a [blank recourd].";
        return 0;
    }