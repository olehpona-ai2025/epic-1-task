#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bitset>
#include <time.h>
using namespace std;

int main() {
    srand(time(NULL));
    int x= (rand() % 80+20);
    int y= (rand() % 80+20);
    cout << "x= " << x << endl;
    cout << "y= " << y << endl;
    cout << "x (binary) = " << bitset<7>(x) << endl;
    cout << "y (binary) = " << bitset<7>(y) << endl;
    cout << "x (binary)+ y (binary) = " <<(bitset<7>(x+y))<< endl;
    return 0;
}