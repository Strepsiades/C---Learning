//Exercise 7.27: Add the move, set, and display operations to your
//version of Screen. Test your class by executing the following code:

#include<iostream>
#include<string>

using namespace std;

class Screen{
    friend void print(Screen s);
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

void print(Screen s);

//some functions
void print(Screen s){
    for (decltype(s.contents.size()) line; line < s.height; line++){
        std::cout << s.contents.substr(line*s.width, s.width) << std::endl;
    }
}

Screen& Screen::move(pos a, pos b){
    pos row = a * width;
    cursor = row + b;
    return *this;
}



int main(){
    Screen myScreen(5, 5, 'X');
    myScreen.move(4,0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
}

