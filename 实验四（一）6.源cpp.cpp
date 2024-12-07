#include<iostream>
#include<cctype>
using namespace std;
void count(const char s[], int counts[]) {
	
	for (int i = 0; s[i] != '\0'; i++) {
		char ch = tolower(s[i]);
		
			if (isalpha(ch)) {
				counts[ch - 'a']++;
			}}
	}
		int main()
		{
			char s[101];
			int counts[26] = { 0 };
            cout << "ÊäÈëÒ»¸ö×Ö·û´®" << endl;
			cin.getline(s, 101);
			count(s, counts);
			for (int i = 0; i < 26; i++) {
				if (counts[i] > 0) {
					cout << char('a' + i) << ":" << counts[i] << "times" << endl;
				}
			}
			system("pause");
			return 0;
		}
	