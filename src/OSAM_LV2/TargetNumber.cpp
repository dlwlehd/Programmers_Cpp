#include <string>
#include <vector>

using namespace std;

int answer = 0;

void func(vector<int> numbers, int tot, int idx, int target) {
    if (idx == numbers.size()) {
        if (tot == target) answer++;
        return;
    }

    func(numbers,tot-numbers[idx],idx+1,target);
    func(numbers,tot+numbers[idx],idx+1,target);
}

int solution(vector<int> numbers, int target) {
    func(numbers, numbers[0], 1, target);
    func(numbers, -numbers[0], 1, target);
    return answer;
}