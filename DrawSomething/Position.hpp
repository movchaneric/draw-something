//
//  Position.hpp
//  DrawSomething
//
//  Created by Eric Movchan on 11/08/2023.
//

#ifndef Position_hpp
#define Position_hpp

#include <stdio.h>
class Position{
public:
    Position(int x, int y);
    Position();
    
    int x,y;
    bool clicked;
};
#endif /* Position_hpp */
