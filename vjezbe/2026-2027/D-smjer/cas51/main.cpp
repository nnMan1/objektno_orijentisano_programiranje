#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(11);

    cout << v[1];

    return 0;
}