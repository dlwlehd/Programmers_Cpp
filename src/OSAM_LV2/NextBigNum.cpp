#include <string>
#include <vector>
#include <iostream>

using namespace std;

string to_binary(int num) {
	string s = "";
	while (num > 0) {
		if (num % 2 == 1) s = "1" + s;
		else s = "0" + s;
		num >>= 1;
	}
	return s;
}

int solution(int n) {
    string x = to_binary(n);
    int cnt = 0;
    for (int i = 0; i < x.length(); i++) {
        if (x[i] == '1') cnt++;
    }
    int answer = n + 1;
    while(true) {
        string temp = to_binary(answer);
        int num_cnt = 0;
        for (int i = 0; i < temp.length(); i++) {
            if (temp[i] == '1') num_cnt++;
        }
        if (num_cnt == cnt) break;
        else answer++;
    }
    return answer;
}