#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        return move(s.begin(), p.begin(), "", s, p);
    }
    bool move(std::string::iterator pa, std::string::iterator pb, string star, string &s, string &p){
            if (pa == s.cend() && pb == p.cend()){
                return true;
            }
            if (pa == s.cend()) {
                if (*pb == '*'){
                    return move(pa, pb + 1, star, s, p);
                }
                else if (pb + 1 < p.cend() && *(pb + 1) == '*'){
                    return move(pa, pb + 1, star, s, p);
                }
            }            
            //recursive part
            if (*pa == *pb || *pb == '.'){
                return move(pa + 1, pb + 1, star, s, p);
            }
            else if (p.cend() - pb > 1 && *(pb + 1) == '*'){
                return move(pa, pb + 1, star, s, p);
            }
            else if (*pb == '*'){
                if (*pa == *(pb - 1)){
                    return move(pa + 1, pb, star + *pa + *pa, s, p);
                }
                else {
                    //a vs b*
                    return move(pa, pb, "", s, p);
                }
            }
            
            else {
                // *pa != *pb && *pb != '*'   i.e. a vs bx
                if (star.size() >= 1){
                    star = star.substr(0, star.size() - 1);
                    return move(pa - 1, pb, star, s, p);
                }
                else if (star.size() == 0) return false;
            } 
            return true;
        }
        
};

int main(){

    string s = "aab";
    string p = "a*";
    Solution solution;
    cout << solution.isMatch(s, p) << endl;
}

