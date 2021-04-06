#include <iostream>
#include <string>
#include "Direction.hpp"
#include <map>
using std::map;

class myChar{
public:
char a = '_';
};

namespace ariel {


    class Board{
    public:

	map<unsigned int,map<unsigned int,myChar>> myMap;

    
    void post(unsigned int r , unsigned int c, Direction d, std::string str);
    std::string read(unsigned int r , unsigned int c, Direction d, unsigned int l);
    void show();
};
}
