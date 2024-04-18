#include <iostream>
#include <string>
using namespace std;

int main() {
    int Age, SourceOfIncome;
    string SkinTone, Gender, BirthOrder;

    cout << "Enter your age: ";
    cin >> Age;

    cout << "Source of income: ";
    cin >> SourceOfIncome;

    cout << "Are you first, second, third or last born? ";
    cin >> BirthOrder;

    cout << "What is your skin tone? ";
    cin >> SkinTone;

    if (Age >= 18 && Age <= 25) {
        cout << "Enter your gender (M/F): ";
        cin >> Gender;

        if (Gender == "M") {
            if (SourceOfIncome >= 15000 && SkinTone == "lightskin" && BirthOrder != "last") {
                cout << "Congratulations, you can be my partner." << endl;
            } else if (SourceOfIncome >= 10000 && SkinTone == "dark" && BirthOrder != "second") {
                cout << "Congratulations, you can be my partner." << endl;
            } else {
                cout << "My bad, you don't qualify." << endl;
            }
        } else {
            cout << "My bad, I'm not interested in female partners." << endl;
        }
    } else {
        cout << "Askies, you are too old or young my dear." << endl;
    }

    return 0;
}
