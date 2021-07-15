#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (int i = 0; i < commands.size(); i++) {
        vector<int> temp;

        int f = commands[i][0];
        int l = commands[i][1];
        int n = commands[i][2];

        for (int j = f; j <= l; j++) {
            temp.push_back(array[j-1]);
        }
        sort(temp.begin(),temp.end());

        answer.push_back(temp[n-1]);
    }
    return answer;
}