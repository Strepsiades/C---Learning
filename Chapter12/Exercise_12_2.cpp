//Exercise 12.2: Write your own version of the StrBlob class including the
//const versions of front and back.
#include <vector>
#include <string>
#include <iostream>
#include <memory>

using namespace std;

class StrBlob {
    public:
        StrBlob() {
            pv = make_shared<vector<string>> ();
        }
        StrBlob(initializer_list<string> l) {
            pv = make_shared<vector<string>> (l);
        }
        string front() const;
        string back() const;
    private:
        shared_ptr<vector<string>> pv;


};

string StrBlob::front () const {
    auto v = *pv;
    return v.front();
}
string StrBlob::back () const {
    auto v = *pv;
    return v.back();
}

int main(){
    StrBlob v({"a" , "b", "c"});
}