#include<string>
#include<vector>
#include<iostream>

using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        int maxCol = s.size()/2 + numRows;
        char v[numRows][maxCol];

        if (numRows == 1){
            return s;
        }

        for(int i = 0; i < numRows; i++){
            for(int j = 0; j < maxCol; j++){
                    v[i][j] = ' ';
            }
        }


        int row = 0, col = 0, isDown = 1;
        //write in the z string
        for(auto i = 0; i < s.size(); ++i){
            cout << s[i] << " at " << row << " " << col << " is down " << isDown << endl;
            //add s[i] to the right place
            v[row][col] = s[i];
            //move the cursor to next right place
            if (row < numRows - 1 && isDown == 1){
                row += 1;
            }
            else if (row == numRows - 1 && isDown == 1){
                row -= 1;
                col += 1;
                
                isDown = 0;
            }
            else if (row > 0 && isDown == 0){
                row -= 1;
                col += 1;
            }
            else if(row == 0 && isDown == 0){
                row += 1;
                isDown = 1;

            }
        }
        //read the z string horizontally
        string result;
        
        cout << "col: " << col << endl 
            << "maxCol: " << maxCol << endl;
        
        
        
        
        for(int i = 0; i < numRows; i++){
            for(int j = 0; j <= col; j++){
                if(v[i][j] != ' '){
                    result += v[i][j];
                    cout << v[i][j];
                }
            }
        }

        cout << "\nresult get \n";
        return result;
    }
};

int main(){
    Solution s;
    std::cout << s.convert("AA", 1);
    
}