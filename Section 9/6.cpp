#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> list {};
    //vector<int>::iterator list_it {};
    char choice {};
    int num {};
    int total {};
    int small_num {};
    int large_num {};
    int search_num {};
    //int del_num {};

    do {
        cout << "\n---------------------" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "K - Search for a number in the list" << endl;
        cout << "C - Clear the list" << endl;
        //cout << "D - Delete a number from the list" << endl;
        cout << "Q - Quit" << endl;
        
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "---------------------" << endl;

        if (choice == 'P' || choice == 'p') {
            if (list.size() == 0) {
                cout << "[] - the list is empty" << endl;
            } else {
                cout << "[ ";
                for (auto numm : list) {
                    cout << numm << " ";
                }
                cout << "]" << endl;
            }
        } else if (choice == 'A' || choice == 'a') {
                cout << "Enter an int to add to the list: ";
                cin >> num;
                bool found = false; //you can't add an element to a vector while you are iterating through it (C++ rules), so I used a bool to check if the number is already in the list
                for (auto add : list) {
                    if (add == num) { //if the number is already in the list, the number will not be added to the list
                        cout << num << " is already in the list" << endl;
                        found = true;
                        break;
                    }
            } if (found == false) {
                        list.push_back(num);
                        cout << num << " added succesfully" << endl;
                    }
        } else if (choice == 'M' || choice == 'm') {
            if (list.size() == 0) {
                cout << "Unable to calculate mean - no data" << endl;
            } else {
                for (auto tot : list) { //range based for loop with auto which determines the type of the variable
                total += tot;
                }
                cout << "The mean is: " << static_cast<double>(total) / list.size() << endl; //static_cast<double> changes the total to a double so that the mean is a double
            }
            
        } else if (choice == 'S' || choice == 's') {
            if (list.size() == 0) {
                cout << "Unable to determine the smallest number - list is empty" << endl;
            } else {
                small_num = list.at(0);
                for (auto small : list) {
                    if (small < small_num) {
                        small_num = small; //small_num = small < small_num ? small : small_num; //ternary operator
                    }
                }
                cout << "The smallest number is: " << small_num << endl;
            }
            
        } else if (choice == 'L' || choice == 'l') {
            if (list.size() == 0) {
                cout << "Unable to determine the largest number - list is empty" << endl;
            } else {
                large_num = list.at(0);
                for (auto large : list) {
                    if (large > large_num) {
                        large_num = large;
                    }
                }
                cout << "The largest number is: " << large_num << endl;
            }
        } else if (choice == 'K' || choice == 'k') {
            if (list.size() == 0) {
                cout << "Unable to search for a number - list is empty" << endl;
            } else {
                cout << "Enter a number to search for: ";
                cin >> search_num;
                for (auto search : list) {
                    if (search == search_num) { 
                        cout << search_num << " was found in the list" << endl;
                        break;
                    } else {
                        if (search == list.at(list.size() - 1)) { //if the search number is not found in the list, the last element in the list will be checked and if it is not the search number, the search number is not in the list
                            cout << search_num << " was not found in the list" << endl;
                        }
                    }
                }
            }
        } else if (choice == 'C' || choice == 'c') {
            if (list.size() == 0) {
                cout << "Unable to clear the list - list is empty" << endl;
            } else {
                list.clear(); //vector method to clear the list
                cout << "The list has been cleared" << endl;
            }
        // } else if (choice == 'D' || choice == 'd') {
        //     if (list.size() == 0) {
        //         cout << "Unable to delete a number - list is empty" << endl;
        //     } else 
        //         cout << "Enter a number to delete: ";
        //         cin >> del_num;
        //         for (auto del : list) {
        //             if (del == del_num) {
        //                 list_it += del_num; 
        //                 list.erase(list_it);
        //                 cout << del_num << " was deleted" << endl;
        //             } else {
        //                 cout << del_num << " was not found in the list" << endl;
        //             }
        //         }
        } else if (choice == 'Q' || choice == 'q') { 
            cout << "Goodbye" << endl;
        } else {
            cout << "Unknown selection, please try again" << endl;
        }

    } while (choice != 'Q' && choice != 'q'); //used an && operator to make sure that the loop will end if the user enters a Q or q
    
    return 0;
}