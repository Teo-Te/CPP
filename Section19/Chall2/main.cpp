#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    ifstream in_file;
    in_file.open("responses.txt");
    if (!in_file) {
        cerr << "Problem opening file" << endl;
        return 1;
    }

    string name;
    string answer;
    string correct_answer {"ABCDE"};
    int score {0};
    int total{0};
    int student_count {0};
    double average {0.0};
    cout << setw(20) << left << "Student" << setw(10) << right << "Score" << endl;
    cout << setfill('-') << setw(30) << "" << endl;
    cout << setfill(' ');

    while (!in_file.eof()) {
        in_file >> name >> answer;
        ++student_count;
        score = 0;
       for(size_t i {0}; i < answer.length(); ++i) {
           if (answer.at(i) == correct_answer.at(i)) {
               ++score;
           }
       }
        cout << setw(20) << left << name << setw(10) << right << score << endl;
        total += score;
        average = static_cast<double>(total) / student_count;
    }
    
    cout << setfill('-') << setw(30) << "" << endl;
    cout << setfill(' ');
    cout << setw(20) << left << "Average score" << setw(10) << right << average << endl;
    cout << endl;
    
    in_file.close();

    return 0;

}