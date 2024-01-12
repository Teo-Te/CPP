#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Vector 1, first element: " << vector1.at(0) << endl;
    cout << "Vector 1, second element: " << vector1.at(1) << endl;
    cout << "Vector 1, size: " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Vector 2, first element: " << vector2.at(0) << endl;
    cout << "Vector 2, second element: " << vector2.at(1) << endl;
    cout << "Vector 2, size: " << vector2.size() << endl;

    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Vector 2D, first element: " << vector_2d.at(0).at(0) << endl;
    cout << "Vector 2D, second element: " << vector_2d.at(0).at(1) << endl;
    cout << "Vector 2D, third element: " << vector_2d.at(1).at(0) << endl;
    cout << "Vector 2D, fourth element: " << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;
    cout << "Vector 2D, first element: " << vector_2d.at(0).at(0) << endl;
    cout << "Vector 2D, second element: " << vector_2d.at(0).at(1) << endl;
    cout << "Vector 2D, third element: " << vector_2d.at(1).at(0) << endl;
    cout << "Vector 2D, fourth element: " << vector_2d.at(1).at(1) << endl;

    cout << "Vector 1, first element: " << vector1.at(0) << endl;
    cout << "Vector 1, second element: " << vector1.at(1) << endl;
}