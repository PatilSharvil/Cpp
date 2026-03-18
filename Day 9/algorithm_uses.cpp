#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {

    vector<int> v = {1,5,2,4,3,8,6,7,9};

    sort(v.begin(), v.end());
    for (auto val : v) cout << val << " ";
    cout << endl;

    v = {1,5,2,4,3,8,6,7,9};

    sort(v.begin(), v.end(), greater<int>());
    for (auto val : v) cout << val << " ";
    cout << endl;

    v = {1,5,2,4,3,8,6,7,9};

    auto it = find(v.begin(), v.end(), 7);
    cout << *it << endl;

    cout << *max_element(v.begin(), v.end()) << endl;
    cout << *min_element(v.begin(), v.end()) << endl;

    v = {1,5,2,4,3,8,6,7,9,1,1};

    cout << count(v.begin(), v.end(), 1) << endl;

    reverse(v.begin(), v.end());
    for (auto val : v) cout << val << " ";
    cout << endl;

    cout << accumulate(v.begin(), v.end(), 0) << endl;

    next_permutation(v.begin(), v.end());
    for (auto val : v) cout << val << " ";
    cout << endl;

    cout << all_of(v.begin(), v.end(), [](int x){ return x > 0; }) << endl;
    cout << any_of(v.begin(), v.end(), [](int x){ return x > 5; }) << endl;
    cout << none_of(v.begin(), v.end(), [](int x){ return x < 0; }) << endl;

    return 0;
}
