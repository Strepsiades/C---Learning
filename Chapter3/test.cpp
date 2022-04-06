#include <iostream>

int main(){
    unsigned ival=512, jval=1024, kval=4096;
    unsigned bufsize;
    unsigned swt = 512;
    switch(swt) {
        case ival:
            bufsize = ival * sizeof(int);
            break;
        case jval:
            bufsize = jval * sizeof(int);
            break;
        case kval:
            bufsize = kval * sizeof(int);
            break;
    }

}
