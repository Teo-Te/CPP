#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    ifstream in_file;
    ofstream out_file;
    string line;
    int line_number {0};

    in_file.open("atextcopy.txt");
    if (!in_file) {
        cerr << "Problem opening file" << endl;
        return 1;
    }

    out_file.open("atextcopy_numbered.txt");
    if (!out_file) {
        cerr << "Problem creating file" << endl;
        return 1;
    }

    while (getline(in_file, line)) {
        if (line == "") {
            out_file << endl;
        } else {
            out_file << setw(7) << left << ++line_number << line << endl;
        }
    }

    in_file.close();
    out_file.close();

    cout << "File created Succccsesfulllyyy" << endl;
    return 0;
}
