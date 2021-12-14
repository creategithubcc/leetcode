	#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	int cnt=0;
	while (getline(cin, str)) {
		for (int i = 0; i < str.size(); i++) {
			if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'A')
				cnt++;
			else if (str[i] == ' ' && cnt != 0) {
				cout << cnt << ' ';
				cnt = 0;
			}
			if (str[i] == '.')
				if (cnt != 0)
					cout << cnt << endl;
				else cout << endl;
		}
	}
	return 0;
}
