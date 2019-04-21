#include<map>
#include<string>
#include<iostream>
#include<fstream>

using namespace std;

bool vaild(char x) {
	return (x >= 'a'&&x <= 'z') || (x >= 'A'&&x <= 'Z');
}

bool uppercase(char x) {
	return x >= 'A'&&x <= 'Z';
}

int main() {
	map<string, int> book;
	ifstream in("input.txt");
	ofstream out("output.txt");
	string word;
	string sentence;
	while (getline(in,sentence)) {
		int pos = 0 ;
		int last = 0;
		for (auto &v : sentence)
			if (uppercase(v)) v = v + 32;
		//cout << sentence.length();

		while (pos < sentence.length()) {
			if (vaild(sentence[pos]) && pos != sentence.length() - 1) {
				pos++;
				continue;
			}
			word = sentence.substr(last, pos -last);
			cout << word << endl;
			book[word]++;
			pos++;
			last = pos;
		}
	}
	for (auto &v : book)
		out << v.first << "," << v.second << endl;
	system("pause");
	return 0;
}