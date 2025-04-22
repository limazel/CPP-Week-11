#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    vector <int> array;
    array.push_back(1);
    array.push_back(5);
    array.push_back(10);
    cout << "size: " << array.size() << endl;
    for(auto iter = array.begin(); iter != array.end(); iter ++) {
        cout << *iter << endl;
    }
    return 0;
}