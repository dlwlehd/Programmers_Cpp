#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int primeNum[50004];

     for (int i = 2; i <= 50000; i++)
    {
        primeNum[i] = i;
    }

    for (int i = 2; i * i <= 50000; i++)
    {
        if (primeNum[i] == 0) continue;
        for (int j = i * i; j <= 50000; j += i)
            primeNum[j] = 0;
    }

    vector<int> temp(3,1);

    for (int i = 0; i < nums.size() - 3; i++)
        temp.push_back(0);

    do {
        int tot = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (temp[i] == 1) {
                tot += nums[i];
            }
        }
        if (primeNum[tot] != 0) answer++;
    } while (prev_permutation(temp.begin(), temp.end()));

    return answer;
}