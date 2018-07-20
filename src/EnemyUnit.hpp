//
//  EnemyUnit.hpp
//  ShootingSketch
//
//  Created by EKey2210 on 2018/07/20.
//

#ifndef EnemyUnit_hpp
#define EnemyUnit_hpp

#include <stdio.h>
#include "Unit.hpp"

class EnemyUnit : public Unit{
public:
    EnemyUnit(float x,float y);
    void update();
    void stop();
    void display();
};
#endif /* EnemyUnit_hpp */
