#pragma once

class Entity {
public:
    virtual void update() = 0;
    virtual void draw() = 0;
    virtual ~Entity() {}
};

class StaticEntity : public Entity {
public:
    void update() override;
    void draw() override;
};
