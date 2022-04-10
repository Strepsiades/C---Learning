//Exercise 6.37: Write three additional declarations for the function in the
//previous exercise. One should use a type alias, one should use a trailing
//return, and the third should use decltype. Which form do you prefer and
//why?

int (&foo())[10];

auto foo() -> int(&)[10];

decltype(arr) &foo();

using arr = int[10];
arr &foo();