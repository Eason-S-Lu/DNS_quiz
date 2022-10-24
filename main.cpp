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
        int score1=0;
        int score2=0;
        int score3=0;
        int score4=0;
        int score5=0;
        int score6=0;
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
        cout << "Your answer is:";
        char answer1;
        cin >> answer1;
        if (answer1 == 'A' || answer1 == 'B' || answer1 == 'C' || answer1 == 'D'
        ||answer1 == 'a' || answer1 == 'b' || answer1 == 'c' || answer1 == 'd'){
            cout << "Your answer is accpted. Your answer is: " << answer1 << endl;
            if (answer1 == 'A' || answer1 == 'a'){
                score1 = 1;
                break;
            }
           break;
        }
        else {
            cout << "Please type A or B or C or D" << endl ;
        }
        //end if
        }
        //end while
        cout << "Question 2:";
        cout << "example.com >> e97d:71a6:901d:e458:2a4f:5798:da50:0747 is a [blank recourd]." << endl;
        sleep_for(seconds(1));
        cout << "A:A        B:AAAA         C:CNAME        D:TXT" << endl;
         while (true){
        cout << "Your answer is:";
        char answer2;
        cin >> answer2;
        if (answer2 == 'A' || answer2 == 'B' || answer2 == 'C' || answer2 == 'D'
        ||answer2 == 'a' || answer2 == 'b' || answer2 == 'c' || answer2 == 'd'){
            cout << "Your answer is accpted. Your answer is: " << answer2 << endl;
            if (answer2 == 'B' || answer2 =='b'){
                score2 = 1;
                break;
            }
            break;
        }
        else {
            cout << "Please type A or B or C or D" << endl ;
        }
        //end if
        }
        //end while
        cout << "Question 3:";
        cout << "example.com >> Hi is a [blank recourd]." << endl;
        sleep_for(seconds(1));
        cout << "A:A        B:AAAA         C:CNAME        D:TXT" << endl;
         while (true){
        cout << "Your answer is:";
        char answer3;
        cin >> answer3;
        if (answer3 == 'A' || answer3 == 'B' || answer3 == 'C' || answer3 == 'D'
        ||answer3 == 'a' || answer3 == 'b' || answer3 == 'c' || answer3 == 'd'){
            cout << "Your answer is accpted. Your answer is: " << answer3 << endl;
             if (answer3 == 'D' || answer3 =='d'){
                score3 = 1;
                break;
            }
            break;
        }
        else {
            cout << "Please type A or B or C or D" << endl ;
        }
        //end if
        }
        //end while
        cout << "Question 4:";
        cout << "example.com >> google.com is a [blank recourd]." << endl;
        sleep_for(seconds(1));
        cout << "A:A        B:AAAA         C:CNAME        D:TXT" << endl;
         while (true){
        cout << "Your answer is:";
        char answer4;
        cin >> answer4;
        if (answer4 == 'A' || answer4 == 'B' || answer4 == 'C' || answer4 == 'D'
        ||answer4 == 'a' || answer4 == 'b' || answer4 == 'c' || answer4 == 'd'){
            cout << "Your answer is accpted. Your answer is: " << answer4 << endl;
            if (answer4 == 'C' || answer4 =='c'){
                score4 = 1;
                break;
            }
            break;
        }
        else {
            cout << "Please type A or B or C or D" << endl ;
        }
        //end if
        }
        //end while
        if (hardness_int == 50){
             cout << "Question 5:";
        cout << "example.com >> mail.google.com is a [blank recourd]." << endl;
        sleep_for(seconds(1));
        cout << "A:NS        B:AAAA         C:MX        D:TXT" << endl;
         while (true){
        cout << "Your answer is:";
        char answer5;
        cin >> answer5;
        if (answer5 == 'A' || answer5 == 'B' || answer5 == 'C' || answer5 == 'D'
        ||answer5 == 'a' || answer5 == 'b' || answer5 == 'c' || answer5 == 'd'){
            cout << "Your answer is accpted. Your answer is: " << answer5 << endl;
            if (answer5 == 'C' || answer5 =='c'){
                score5 = 1;
                 break;
            }
            break;
        }
        else {
            cout << "Please type A or B or C or D" << endl ;
        }
        //end if
        }
        //end while
        }
        if (hardness_int == 51){
             cout << "Question 5:";
        cout << "example.com >> mail.google.com is a [blank recourd]." << endl;
        sleep_for(seconds(1));
        cout << "A:NS        B:AAAA         C:MX        D:TXT" << endl;
         while (true){
        cout << "Your answer is:";
        char answer5;
        cin >> answer5;
        if (answer5 == 'A' || answer5 == 'B' || answer5 == 'C' || answer5 == 'D'
        ||answer5 == 'a' || answer5 == 'b' || answer5 == 'c' || answer5 == 'd'){
            cout << "Your answer is accpted. Your answer is: " << answer5 << endl;
            if (answer5 == 'C' || answer5 == 'c'){
                score5 = 1;
                 break;
            }
            break;
        }
        else {
            cout << "Please type A or B or C or D" << endl ;
        }
        //end if
        }
        //end while
         cout << "Question 6:";
        cout << "example.com >> md5 TUlJQ1l6Q0NBY3lnQXdJQkFnSUJBREFOQmdrcWh weight 772 is a [blank recourd]." << endl;
        sleep_for(seconds(1));
        cout << "A:CNAME        B:AAAA         C:CERT        D:TXT" << endl;
         while (true){
        cout << "Your answer is:";
        char answer6;
        cin >> answer6;
        if (answer6 == 'A' || answer6 == 'B' || answer6 == 'C' || answer6 == 'D'
        ||answer6 == 'a' || answer6 == 'b' || answer6 == 'c' || answer6 == 'd'){
            cout << "Your answer is accpted. Your answer is: " << answer6 << endl;
            if (answer6 == 'C' || answer6 =='c'){
                score6 = 1;
                 break;
            }
            break;
        }
        else {
            cout << "Please type A or B or C or D" << endl ;
        }
        //end if
        }
        //end while
        }
        if (hardness_int == 49){
        cout << "Question 1 :";
        if (score1 == 0){
            cout << "wrong,The correct answer is A.";
        } 
        else{
            cout << "correct";
        }
        cout<< endl << "Question 2 :";
        if (score2 == 0){
            cout << "wrong,The correct answer is B.";
        } 
        else{
            cout << "correct";
        }
        cout<< endl << "Question 3 :";
        if (score3 == 0){
            cout << "wrong,The correct answer is D.";
        } 
        else{
            cout << "correct";
        }
        cout<< endl << "Question 4 :";
        if (score4 == 0){
            cout << "wrong,The correct answer is C.";
        } 
        else{
            cout << "correct";
        }
        int total;
        total = score1 + score2 + score3 + score4;
        cout << endl << "You get " << total << "correct";
        }
        else if (hardness_int == 50){
         cout << "Question 1 :";
        if (score1 == 0){
            cout << "wrong,The correct answer is A.";
        } 
        else{
            cout << "correct";
        }
        cout<< endl << "Question 2 :";
        if (score2 == 0){
            cout << "wrong,The correct answer is B.";
        } 
        else{
            cout << "correct";
        }
        cout<< endl << "Question 3 :";
        if (score3 == 0){
            cout << "wrong,The correct answer is D.";
        } 
        else{
            cout << "correct";
        }
        cout<< endl << "Question 4 :";
        if (score4 == 0){
            cout << "wrong,The correct answer is C.";
        } 
        else{
            cout << "correct";
        }
        cout<< endl << "Question 5 :";
        if (score5 == 0){
            cout << "wrong,The correct answer is C.";
        } 
        else{
            cout << "correct";
        }
        cout << endl;
        int total;
        total = score1 + score2 + score3 + score4 + score5;
        cout << endl << "You get " << total << "correct";
        }
        else{
            cout << "Question 1 :";
        if (score1 == 0){
            cout << "wrong,The correct answer is A.";
        } 
        else{
            cout << "true";
        }
        cout<< endl << "Question 2 :";
        if (score2 == 0){
            cout << "wrong,The correct answer is B.";
        } 
        else{
            cout << "correct";
        }
        cout<< endl << "Question 3 :";
        if (score3 == 0){
            cout << "wrong,The correct answer is D.";
        } 
        else{
            cout << "correct";
        }
        cout<< endl << "Question 4 :";
        if (score4 == 0){
            cout << "wrong,The correct answer is C.";
        } 
        else{
            cout << "correct";
        }
        cout<< endl << "Question 5 :";
        if (score5 == 0){
            cout << "wrong,The correct answer is C.";
        } 
        else{
            cout << "correct";
        }
        cout<< endl << "Question 6 :";
        if (score6 == 0){
            cout << "wrong,The correct answer is C.";
        } 
        else{
            cout << "correct";
        }
        cout << endl;
        int total;
        total = score1 + score2 + score3 + score4 + score5 + score6;
        cout << endl << "You get " << total << " correct" << endl << "Your score is " << total << "Points !";
        }
        return 0;
    }