#include "Rock.h"
#include <vector>
#include "ofMain.h"


std::vector<StaticEntity*> staticEntities;
Rock::Rock(int x, int y) : x(x), y(y) {}
int boardSizeWidth = 64;
int boardSizeHeight = 36;

void Rock::setup() {
    //add 10 rocks at random places
    for (int i = 0; i < 10; i++) {
        int x = ofRandom(1, boardSizeWidth-1);
        int y = ofRandom(1, boardSizeHeight-1);
        staticEntities.push_back(new Rock(x, y));
}
    // staticEntities.push_back(new Rock(5, 5));

} 
//--------------------------------------------
void Rock::draw() {
    // Draw all static entities
    for (StaticEntity* entity : staticEntities) {
        entity->draw();
    }
    ofSetColor(ofColor::gray);
    ofDrawCircle(x, y, 10);
}
