
#include "Board.hpp"
#include "Direction.hpp"
#include "map"
#include <iostream>

using namespace std;
using namespace ariel;
using ariel::Direction;


void Board::post(int x , int y, Direction d, string str){

    if (d=Direction::Horizontal && col < y ||
            d=Direction::Vertical && col < y+str.size()) {
        map<int, string> temp;
        //create row
        for (int i = 0; i < row; i++) {
            temp[i]="_";
        }
        //add rows
        for (int i = myMap.size(); i < y; i++) {
            myMap[i]= temp;
        }
        col = y;
    }
    //add col (add more "_" to exists rows)
    if (d=Direction::Horizontal && row < x+str.size() ||
          d=Direction::Vertical && row < x){
        for (int i = 0; i < col; i++) {
            for (int j = row; j < x; j++) {
                myMap.find(i)->second[j]="_";
            }
        }
       row = x;
    }

    if (d=Direction::Horizontal) {
        for (int i = 0; i <str.size() ; i++) {
            myMap.find(y)->second[x+i] = str.at(i);
        }
    }
    if(d=Direction::Vertical) {
        for (int i = 0; i < str.size() ; i++) {
            myMap.find(y+i)->second[x]=str.at(i);
        }
    }
}
}

string Board::read(int x , int y, Direction d, int l)
{
string ans;
if(d= Direction::Horizontal && x+l > row ||
      d=Direction :: Vertical && y+l > col){ return "";}

if(d=Direction::Horizontal){
    for (int i = 0; i < l ; ++i) {
    ans += myMap.find(y)->second[x+i];
    }
    }
if(d=Direction::Vertical){
    for (int i = 0; i < l ; ++i) {
        ans += myMap.find(y+i)->second[x];
    }
}
    return ans;
}

void Board::string show(){}
