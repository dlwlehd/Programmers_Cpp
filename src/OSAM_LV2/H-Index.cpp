#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<>());
    
    for (int i = 0; i < citations.front(); i++) {
        int h_index = i;
        int cnt = 0;
        
        for (int j = 0; j < citations.size(); j++) {
            if (h_index <= citations[j]) cnt++;
        }
        
        if (cnt >= h_index && h_index >= citations.size() - cnt) {
            answer = max(answer, h_index);
        }
    }
    
    return answer;
}