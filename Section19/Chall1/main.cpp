#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

struct City {
    string name;
    long population;
    double cost;
};

struct Country {
    string name;
    vector<City> cities;
};

struct Tours {
    string title;
    vector<Country> countries;
};

int main () {
    vector<City> cities_for_albania {
        {"Tirana", 421286, 45.00},
        {"Shkoder", 77075, 15.00},
        {"Vlore", 79513, 25.00},
        {"Elbasan", 78703, 35.00},
        {"Korce", 51152, 20.00}
    };

    vector<City> cities_for_bulgaria {
        {"Sofia", 1286383, 100.00},
        {"Plovdiv", 346893, 50.00},
        {"Varna", 334466, 50.00},
        {"Burgas", 202694, 50.00},
        {"Ruse", 149642, 50.00}
    };

    vector<City> cities_for_romania {
        {"Bucharest", 2106144, 120.00},
        {"Iasi", 290422, 80.00},
        {"Cluj-Napoca", 324576, 70.00},
        {"Timisoara", 319279, 60.00},
        {"Constanta", 283872, 60.00}
    };

    vector<Country> countries {
        {"Albania", cities_for_albania},
        {"Bulgaria", cities_for_bulgaria},
        {"Romania", cities_for_romania}
    };
    cout << "1234567890123456789012345678901234567890123456789012345678901234567890" << endl; //to check the width of the console
    Tours tours {"Tour Ticket Prices from the Balkans", countries};
    cout << setprecision(2) << fixed;
    cout << setw(55) << tours.title << endl << endl;
    cout << setw(20) << left << "Country" << setw(20) << left << "City" << setw(15) << right << "Population" << setw(15) << right << "Price" << endl;
    cout << setfill('-') << setw(70) << "" << endl;
    cout << setfill(' ');

    for (auto country : tours.countries) {
        for (auto city : country.cities) {
            cout << setw(20) << left << country.name << setw(20) << left << city.name << setw(15) << right << city.population << setw(15) << right << city.cost << endl;
        }
        cout << endl;
    }
}

//There is also a way to use conditional operator (i==0 ? country.name : "") so as to print country once
//for (size_t i{0}; i < countries.cities.size(); ++i) this type of loop should be used if we do it like that
//then to print the citys and their infos country.cities.at(i).name and so on...