#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

char display_menu();
void print_numbers(const vector<int> &list);
void add_number(vector<int> &list);
void calculate_mean(const vector<int> &list);
void display_smallest(const vector<int> &list);
void display_largest(const vector<int> &list);
void search_for_number(const vector<int> &list);
void clear_list(vector<int> &list);
void quit_program();

int main () {
    vector<int> list {};
    char choice {};

    do {
        choice = display_menu();

        switch (choice) {
            case 'P':
                print_numbers(list);
                break;
            case 'A':
                add_number(list);
                break;
            case 'M':
                calculate_mean(list);
                break;
            case 'S':
                display_smallest(list);
                break;
            case 'L':
                display_largest(list);
                break;
            case 'K':
               search_for_number(list);
                break;
            case 'C':
               clear_list(list);
                break;
            case 'Q':
               quit_program();
                break;
            default:
                cout << "Unknown selection, please try again" << endl;
        }
    } while (choice != 'Q');

    return 0;
}

char display_menu() {
    cout << "\n---------------------" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "K - Search for a number in the list" << endl;
    cout << "C - Clear the list" << endl;
    cout << "Q - Quit" << endl;

    cout << "Enter your choice: ";
    char choice {};
    cin >> choice;
    choice = toupper(choice);

    return choice;
}

void print_numbers(const vector<int> &list) {
    if (list.size() == 0) {
        cout << "[] - the list is empty" << endl;
    } else {
        cout << "[ ";
        for (auto num : list) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
}

void add_number(vector<int> &list) {
    int num {};
    cout << "Enter an int to add to the list: ";
    cin >> num;

    bool found = false; //could have just used .find() but this is a good exercise
    for (auto add : list) {
        if (add == num) {
            cout << num << " is already in the list" << endl;
            found = true;
            break;
        }
    } if (found == false) {
        list.push_back(num);
        cout << num << " added succesfully" << endl;
    }
} 

void calculate_mean(const vector<int> &list) {
    if (list.size() == 0) {
        cout << "Unable to calculate mean - no data" << endl;
    } else {
        int total {};
        for (auto num : list) {
            total += num;
        }
        cout << "The mean is: " << static_cast<double>(total) / list.size() << endl;
    }
}

void display_smallest(const vector<int> &list) {
    if (list.size() == 0) {
        cout << "Unable to determine the smallest number - list is empty" << endl;
    } else {
        int smallest = list.at(0);
        for (auto num : list) {
            if (num < smallest) {
                smallest = num;
            }
        }
        cout << "The smallest number is: " << smallest << endl;
    }
}

void display_largest(const vector<int> &list) {
    if (list.size() == 0) {
        cout << "Unable to determine the largest number - list is empty" << endl;
    } else {
        int largest = list.at(0);
        for (auto num : list) {
            if (num > largest) {
                largest = num;
            }
        }
        cout << "The largest number is: " << largest << endl;
    }
}

void search_for_number(const vector<int> &list) {
    if (list.size() == 0) {
        cout << "Unable to search for a number - list is empty" << endl;
    } else {
        int num {};
        cout << "Enter an int to search for: ";
        cin >> num;

        bool found = false;
        for (auto search : list) {
            if (search == num) {
                cout << num << " was found in the list" << endl;
                found = true;
                break;
            }
        } if (found == false) {
            cout << num << " was not found in the list" << endl;
        }
    }
}

void clear_list(vector<int> &list) {
    if (list.size() == 0) {
        cout << "Unable to clear list - list is empty" << endl;
    } else {
        list.clear();
        cout << "List cleared" << endl;
    }
}

void quit_program() {
    cout << "Goodbye" << endl;
}

