//Exercise 7.32: Define your own versions of Screen and Window_mgr in
//which clear is a member of Window_mgr and a friend of Screen.

#include<iostream>
#include<string>
#include<vector>

using namespace std;


class Screen{
    friend void print(Screen s);
    friend class Window_mgr;
    public:
        using pos = std::string::size_type;
        //constructors
        Screen() = default;
        Screen(pos h, pos w):height(h),width(w),contents(h*w, ' '){};
        Screen(pos h, pos w, char c):height(h),width(w),contents(h*w, c){};
        //some member functions
        char get(pos a, pos b){
            pos row = a * width;
            return contents[row + b];
        };
        Screen& move(pos a, pos b);
        Screen& display(std::ostream& os){
            do_display(os);
            return *this;
        }
        const Screen& display(std::ostream& os) const {
            do_display(os);
            return *this;
        }
        Screen& set(pos a, pos b, char c){
            pos row = a * width;
            contents[row + b] = c;
            return *this;
        }
        Screen& set(char c){
            contents[cursor] = c;
            return *this;
        }

    private:
        pos height = 0, width = 0, cursor = 0;
        std::string contents;
        void do_display(std::ostream& os) const {
            os << contents << std::endl;
        }

};

class Window_mgr{
    public:
        typedef vector<Screen>::size_type index;
        void clear(index i){
            Screen& s = v[i];
            s.contents = string(s.width * s.height, ' ');
        }
    private:
        vector<Screen> v;

};

