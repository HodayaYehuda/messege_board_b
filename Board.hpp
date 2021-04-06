#include <iostream>
#include <string>
#include "Direction.hpp"
using namespace std;

namespace ariel {
    class Board{
        static int row=0;
        static int col=0;
        static map<int,map<int,string>> myMap;
    
    void post(int r , int c, Direction d, string str);
    string read(int r , int c, Direction d, int l);
    void show();
};
}