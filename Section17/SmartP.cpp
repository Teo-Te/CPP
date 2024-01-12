#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test {
private:
    int data;
public:
    Test() : data{0} { cout << "\tTest constructor (" << data << ")" << endl; }
    Test(int data) : data{data} { cout << "\tTest constructor (" << data << ")" << endl; }
    int get_data() const { return data; }
    ~Test() { cout << "\tTest destructor (" << data << ")" << endl; }
};

// Function prototypes
unique_ptr<vector<shared_ptr<Test>>> make();
void fill(vector<shared_ptr<Test>> &vec, int num);
void display(const vector<shared_ptr<Test>> &vec);

int main () {
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr; 
    vec_ptr = make(); 
    cout << "How many data points do you want to enter: ";
    int num;
    cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    return 0;
}

unique_ptr<vector<shared_ptr<Test>>> make() {
    return make_unique<vector<shared_ptr<Test>>>(); // return a unique_ptr of a vector of shared pointers to Test objects
}

void fill(vector<shared_ptr<Test>> &vec, int num) {
    int temp;
    for (int i = 0; i < num; i++) {
        cout << "Enter data point " << i + 1 << ": ";
        cin >> temp;
        vec.push_back(make_shared<Test>(temp)); // makes a shared pointer to a Test object and adds it to the vector
    }
}

void display(const vector<shared_ptr<Test>> &vec) {
    cout << "\nDisplaying vector data" << endl;
    for (const auto &ptr : vec)
        cout << ptr->get_data() << endl;
}