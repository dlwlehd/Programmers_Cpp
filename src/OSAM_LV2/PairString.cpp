#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> temp;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            if (s[i] == '-') {
                temp.push_back((s[i + 1] - '0') * -1);
                i++;
            }
            else temp.push_back(s[i] - '0');
        }
    }

    sort(temp.begin(), temp.end());
    answer += to_string(temp.front());
    answer += " ";
    answer += to_string(temp.back());

    return answer;
}