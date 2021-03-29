#include <iostream>
#include <string>
#include "Direction.hpp"
using namespace std;

namespace ariel {
    class Board{
    public:

    private:
    
    void post(int r , int c, Direction d, string str);
    string read(int r , int c, Direction d, int l);
    void show();
};
}