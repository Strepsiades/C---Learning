//Exercise 6.19: Given the following declarations, determine which calls are
//legal and which are illegal. For those that are illegal, explain why.

double calc(double); 
int count(const string &, char);
int
sum(vector<int>::iterator,
vector<int>::iterator,
int);
vector<int> vec(10);
(a) calc(23.4, 55.1); //illegal : should have only one argument.
(b) count("abcda", 'a'); //legal
(c) calc(66); //legal)
(d) sum(vec.begin(), vec.end(), 3.8);//legal