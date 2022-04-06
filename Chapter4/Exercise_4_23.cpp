//Exercise 4.23: The following expression fails to compile due to operator
//precedence. Using Table 4.12 (p. 166), explain why it fails. How would you
//fix it?

#include <string>

using std::string;

int main () {
    string s = "word";
    string pl = s + (s[s.size() - 1] == 's' ? "" : "s" );
}
