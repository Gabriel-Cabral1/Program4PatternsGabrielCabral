/*
 Project Name : Program4PatternsGabrielCabral
 File Name : Program4PatternsGabrielCabral.cpp
 Programmer : Gabriel Cabral
 Date : 11/11/25
 Requirements:
 Use nested or sequential loops to generate and format character-based output.
 Control repetition and alignment to match required patterns.
 Develop confidence with loop structure variations.
*/
/*
Print + for pattern A left
Print  + for pattern B right
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(10) << left << "Pattern A" << setw(12) << left << "Pattern B" << endl;
    for (int i=1; i<=10; i++) {

        for (int j = 1; j <= i; j++) {
            cout << "+";
        }

        cout << setw(10 - i) << "";

        for (int j=1; j<=11-i; j++) {
            cout << "+";
        }
        cout << endl;
    }
    return 0;
}