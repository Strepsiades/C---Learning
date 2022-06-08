/*
Exercise 10.28: Copy a vector that holds the values from 1 to 9 inclusive,
into three other containers. Use an inserter, a back_inserter, and a
front_inserter, respectivly to add elements to these containers. Predict
how the output sequence varies by the kind of inserter and verify your
predictions by running your programs.
*/

#include<vector>
#include<iterator>
#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    vector<int> v {1, 2, 3, 4, 5, 6 , 7, 8, 9};
    vector<int> v1, v2, v3;
    copy(v.cbegin(), v.cend(), inserter(v1, v1.begin()));
    copy(v.cbegin(), v.cend(), back_inserter(v2));
    //copy(v.cbegin(), v.cend(), front_inserter(v3));

    vector<vector<int>> vecs {v1, v2, v3};
    for (auto vec : vecs) {
        for_each(vec.cbegin(), vec.cend(), [](int i){cout << i << " ";});
    }
}