#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetWindowTitle("Snake");
    
    gameState = new GameState();
    menuState = new MenuState();
    loseState = new LoseState(); // made instance 
    currentState = menuState;

}

//--------------------------------------------------------------
void ofApp::update(){
     if(currentState->hasFinished()) {
        if(currentState->getNextState() == "GameState") {
            gameState->reset();
            currentState = gameState;
        }
         else if(currentState->getNextState() == "MenuState") {
            menuState->reset();
            currentState = menuState;
        } else if(currentState->getNextState() == "LoseState") {
            loseState->reset();
            currentState = loseState;
        } // when finished change to losestate
    }
    currentState->update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    currentState->draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    currentState->keyPressed(key);
}
//--------------------------------------------------------------
