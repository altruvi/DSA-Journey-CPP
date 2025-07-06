#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 3, 3, 3, 4, 6, 10};

    auto lb =lower_bound(v.begin(), v.end(), 3);
    auto ub =upper_bound(v.begin(), v.end(), 3);

//it points to the first occurrence of that value
cout << "Lower Bound of 3: " << (lb - v.begin()) <<endl;
//it points to the position just after the last occurrence of that value
cout << "Upper Bound of 3: " << (ub - v.begin()) <<endl;

    return 0;
}
