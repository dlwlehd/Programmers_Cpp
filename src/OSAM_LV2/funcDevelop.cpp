#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;
    queue<int> q;
    
    for (int i = 0; i < progresses.size(); i++) {
        int left = 100 - progresses[i];
        int cnt = 0;
        while (progresses[i] < 100) {
            progresses[i] += speeds[i];
            cnt++;
        }
        days.push_back(cnt);
    }
    q.push(days[0]);
    for(int i=1; i<days.size(); i++) { 
        if (q.front() >= days[i]) { 
            q.push(days[i]); 
        } 
        else { 
            answer.push_back(q.size()); 
            while(!q.empty()) 
                q.pop(); 
            q.push(days[i]); 
        } 
    } 
    if(!q.empty()) answer.push_back(q.size());

    return answer;
}