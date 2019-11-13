#include <iostream>
#include "box.h"

using namespace std;

int main(int argc, char const *argv[])
{
    box b ;

    b.width = 3;
    b.height = 4;
    b.length = 5;
    cout << b.volume(b.width, b.height, b.length) << endl;
    return 0;
}
