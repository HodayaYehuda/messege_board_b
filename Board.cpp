
#include "Board.hpp"
#include "Direction.hpp"
#include <map>
#include <iostream>
#include <string>

using namespace std;
using namespace ariel;
using ariel::Direction;


void Board::post(unsigned int x , unsigned int y, Direction d, string str){

    
    if (d==Direction::Vertical) {
        for (unsigned int i = 0; i <str.size() ; i++) {
           myMap[y][x+i].a = str.at(i);
        }
    }
    if(d==Direction::Horizontal) {
        for (unsigned int i = 0; i < str.size() ; i++) {
            myMap[y+i][x].a = str.at(i);
        }
    }

}

string Board::read(unsigned int x , unsigned int y, Direction d, unsigned int l)
{
string ans;



if(d==Direction::Vertical){
    for (unsigned int i = x; i < x+l ; i++) {
 	
	    ans += myMap[y][i].a;
	    
    }
    }
if(d==Direction::Horizontal){
    for (unsigned int i = y; i < y+l ; i++) {
         
        ans += myMap[i][x].a;
	    

    }
}
    return ans;
}

void Board::show(){}
