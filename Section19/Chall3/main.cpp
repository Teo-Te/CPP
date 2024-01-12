#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

bool substr_found (string user_word, string word) {
    if (word.find(user_word) != string::npos) { // no-position no matches found in the string
        return true;
    }
    return false;
}

int main () {
    int word_count {0};
    int word_found {0};
    int substring_found {0};

    ifstream in_file;
    in_file.open("atext.txt");
    if (!in_file) {
        cerr << "Problem opening file" << endl;
        return 1;
    }

    string user_word;
    cout << "Enter the string to search for: ";
    cin >> user_word;

    string word;
    while (in_file >> word) {
        ++word_count;
        if (user_word == word) {
            ++word_found;
        }
        if (substr_found(user_word, word)) {
            ++substring_found;
        }
    }
    cout << "The file contains " << word_count << " words" << endl;
    cout << "The exact word " << user_word << " was found " << word_found << " times" << endl;
    cout << "The substring " << user_word << " was found " << substring_found << " times" << endl;
    in_file.close();

    return 0;
}