//
//  MyOwnUnit.hpp
//  ShootingSketch
//
//  Created by KiryuYamashita on 2018/07/04.
//

#ifndef MyOwnUnit_hpp
#define MyOwnUnit_hpp

#include <stdio.h>
#include "Unit.hpp"

class MyOwnUnit : public Unit{
public:
    MyOwnUnit(float x,float y);
    void update();
    void display();
};

#endif /* MyOwnUnit_hpp */
