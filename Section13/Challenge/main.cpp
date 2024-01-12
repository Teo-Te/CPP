#include "Movies.h"
#include <iostream>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

int main () {
    // Movies my_movies;
    // my_movies.display();
    // my_movies.add_movie("Njeriu me top", "PG", 8);
    // my_movies.add_movie("Beni ecen vet", "PG", 5);
    // my_movies.add_movie("Shrek", "PG", 7);
    // my_movies.display();
    // my_movies.add_movie("Shrek", "PG", 7);
    // my_movies.add_movie("E cme vdiq compileri", "PG", 12);
    // my_movies.display();
    // my_movies.increment_watched("Big");
    // my_movies.increment_watched("E cme vdiq compileri");
    // my_movies.display();
    // my_movies.increment_watched("ky sdo funksionoj");

    //do while loop

    Movies my_movies;
    char selection {};

    do {
        cout << "\n---------------------" << endl;
        cout << "P - Print movies" << endl;
        cout << "A - Add a movie" << endl;
        cout << "I - Increment watched" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;
        selection = toupper(selection);

        switch (selection) {
            case 'P':
                my_movies.display();
                break;
            case 'A': {
                string name {};
                string rating {};
                int watched {};
                cout << "Enter the name of the movie, rating and num of times watched seperated by a space: ";
                cin >> name >> rating >> watched;
                my_movies.add_movie(name, rating, watched);
                break;
            }
            case 'I': {
                string namee {};
                cout << "\nEnter the name of the movie: ";
                cin >> namee;
                my_movies.increment_watched(namee);
                break;
            }
            case 'Q':
                cout << "Goodbye" << endl;
                break;
            default:
                cout << "Unknown selection, please try again" << endl;
        }
    } while (selection != 'Q');

    return 0;
}