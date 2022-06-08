//Exercise 7.23: Write your own version of the Screen class.

#include<iostream>
#include<string>

class Screen{
    friend void print(Screen s);
    public:
        using pos = std::string::size_type;
        //constructors
        Screen() = default;
        Screen(pos h, pos w, char c):height(h),width(w),contents(h*w, c){};
        //some member functions
        char get(pos a, pos b){
            pos row = a * width;
            return contents[row + b];
        };
        Screen& move(pos a, pos b);


    private:
        pos height = 0, width = 0, cursor = 0;
        std::string contents;


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
    Screen s(100, 100, 'c');
    print(s);
}