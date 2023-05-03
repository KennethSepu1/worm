#pragma once
#include "Entity.h"


class Rock : public StaticEntity {
public:
    Rock(int x, int y);
    void draw() override;
    void setup();
     int getX() { return x; }
    int getY() { return y; }
private:
    int x, y;
};
