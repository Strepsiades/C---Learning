/*Exercise 10.27: In addition to unique (§ 10.2.3, p. 384), the library
defines function named unique_copy that takes a third iterator denoting a
destination into which to copy the unique elements. Write a program that
uses unique_copy to copy the unique elements from a vector into an
initially empty list.*/

#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<iostream>

using namespace std;

int main() {
    vector<string> words {"boy", "boy", "girl", "girl", "hybrid"};
    vector<string> uniqueWords;
    unique_copy(words.begin(), words.end(), inserter(uniqueWords, uniqueWords.begin()));
    for_each(uniqueWords.begin(), uniqueWords.end(), [](string word){cout << word << " ";});
}