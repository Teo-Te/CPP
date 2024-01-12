#include <iostream>
#include <string>

using namespace std;

int main () {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr0987654321"};

    string secret_message {};
    cout << "Enter your secret message: ";
    getline(cin, secret_message);

    string encrypted_message {};
    cout << "Encrypting message..." << endl;
    for (char c : secret_message) {
        size_t position = alphabet.find(c);
        if (position != string::npos) {
            char new_char {key.at(position)};
            encrypted_message += new_char;
        } else {
            encrypted_message += c;
        }
    }

    cout << "Encrypted message: " << encrypted_message << endl;

    string decrypted_message {};
    cout << "Decrypting message..." << endl;
    for (char c2 : encrypted_message) {
        size_t position2 = key.find(c2);
        if (position2 != string::npos) {
            char new_char2 {alphabet.at(position2)};
            decrypted_message += new_char2;
        } else {
            decrypted_message += c2;
        }
    }

    cout << "Decrypted message: " << decrypted_message << endl;



    return 0;
}