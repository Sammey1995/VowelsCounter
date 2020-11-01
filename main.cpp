#include <iostream>
using namespace std;

//  ===================
//  Function Prototypes
//  ===================
    bool IsVowel(char);
    bool AnotherSequence();
    bool AnotherLetter();
//  =====================


//  ============
    int main() {

        char letter;
        int vowelCount;
    
        do {
            vowelCount = 0;
            do {
                cout << endl;
                cout << "Enter a letter ==> ";
                cin >> letter;
                cout << endl;

                if(IsVowel(letter) == true)
                    vowelCount = vowelCount + 1;
            } while (AnotherLetter() == true);

            cout << endl;
            cout << "The number of vowels you entered is " << vowelCount << endl;
        } while(AnotherSequence() == true);

        cout << endl;
        cout << "Thank you for using my program, good bye..." << endl;

    return 0;
    }


//  ===========================
    bool IsVowel(char letter) {

        if((letter=='A') || (letter=='a') || (letter=='E') || (letter=='e')||
           (letter=='I') || (letter=='i') || (letter=='O') || (letter=='o') ||
           (letter=='U') || (letter=='u'))
    return true;
        else
    return false;
    } // Functioon IsVowel()
//  ========================
    
//  ================
    bool AnotherLetter() {

        char goAgain;

        cout << "=============================================" << endl;
        cout << "Would you like to enter another letter? (y/n)" << endl;
        cin >> goAgain;
        cout << "=" << endl;

        if((goAgain == 'y')||(goAgain == 'Y'))
            return true;
        else
            return false;
    } // Functioon IsVowel()
//  ========================

//  ======================
    bool AnotherSequence() {

        char desire;

        cout << "===============================" << endl;
        cout << "Would you like to enter another" << endl;
        cout << "sequence of letters (y/n)? ";
        cin >> desire;
        cout << endl;
        cout << "===============================" << endl;

        if((desire == 'y')||(desire == 'Y'))
            return true;
        else
            return false;
    } // Functioon AnotherLetter()
//  ==============================