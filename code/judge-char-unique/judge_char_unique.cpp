#include <iostream>
#include <vector>

using namespace std;

bool IsUnique(string astr) {
    int size = astr.size();
    vector<int> count(26);
    for (int i = 0; i < size; i++) {
        int pos = astr[i] - 'a';
        count[pos] += 1;
        if (count[pos] > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    //string astr = "leetcode";
    string astr = "abc";
    cout << IsUnique(astr);
    return 0;
}