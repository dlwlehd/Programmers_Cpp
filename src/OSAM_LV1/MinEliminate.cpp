#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int minNum = 999999999;

    for (int i = 0; i < arr.size(); i++)
        minNum = min(minNum,arr[i]);

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == minNum) arr.erase(arr.begin() + i);
    }

    if (arr.size() == 0) arr.push_back(-1);
    return arr;
}