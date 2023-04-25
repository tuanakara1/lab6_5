#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findCommonElements(vector<int>& list1, vector<int>& list2) {
    vector<int> result;
    sort(list1.begin(), list1.end());
    sort(list2.begin(), list2.end());
    set_intersection(list1.begin(), list1.end(), list2.begin(), list2.end(), back_inserter(result));
    return result;
}

int main() {
    vector<int> list1 = {1, 2, 3, 4, 5,25,14,37};
    vector<int> list2 = {2, 4, 6, 8, 10,25,93};
    vector<int> common = findCommonElements(list1, list2);
    for (int i = 0; i < common.size(); i++) {
        cout << common[i] << " ";
    }
    return 0;
}

