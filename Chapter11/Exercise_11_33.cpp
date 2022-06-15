//Exercise 11.33: Implement your own version of the word-transformation
//program.

#include<map>
#include<string>
#include<iostream>
#include<fstream>
#include<sstream>
#include<utility>
#include<iterator>
#include<algorithm>

using namespace std;



void makeMap(map<string, string> & map, string file) {
    ifstream ifs (file);
    string line;
    while(getline(ifs, line)) {
        istringstream words(line);
        string key, value;
        words >> key;
        words >> value;
        map[key] = value;
    }
}

void replaceWords(map<string, string> & dict, string file) {
    ifstream ifs (file);
    ofstream out ("out.txt");
    string line;
    while(getline(ifs, line)) {
        istringstream words(line);
        string word;
        string outputline;
        while(words >> word) {
            string newWord;
            if (dict.find(word) == dict.end()) newWord = word;
            else newWord = dict[word];
            outputline += newWord+ " ";
        }
        outputline.pop_back();
        out << outputline << endl;        
    }
}

int main() {
    string file1, file2;
    cin >> file1;
    cin >> file2;
    map<string, string> dict;
    makeMap(dict, file1);
    replaceWords(dict, file2);
}

