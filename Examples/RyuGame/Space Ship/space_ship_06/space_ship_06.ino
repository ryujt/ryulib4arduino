#include <RyuGame.h>
#include "Globals.h"
#include "SpaceShip.h"
#include "Enemies.h"
#include "Missile.h"
#include "ScoreBoard.h"

int pin_left = 7;
int pin_right = 8;
int pin_fire = 12;

int missile_interval = 500;
int missile_counter = 0;

GameEngine gameEngine(13, 6, 5, 4, 3, 2);
SpaceShip spaceShip;
Enemies Enemies;
ScoreBoard scoreBoard;

void setup() 
{
  pinMode(pin_left, INPUT_PULLUP);
  pinMode(pin_right, INPUT_PULLUP);
  pinMode(pin_fire, INPUT_PULLUP);

  gameEngine.addControl(&spaceShip);
  gameEngine.addControl(&Enemies);
  gameEngine.addControl(&scoreBoard);
  gameEngine.start();
}

void loop() 
{
  if (digitalRead(pin_left) == LOW) {
    spaceShip.x--;
    if (spaceShip.x < 4) spaceShip.x = 4;
  }
  
  if (digitalRead(pin_right) == LOW) {
    spaceShip.x++;
    if (spaceShip.x > 78) spaceShip.x = 78;    
  }
  
  if ((digitalRead(pin_fire) == LOW) && spaceShip.getEnabled() && (missile_counter >= missile_interval)) {
    sound_effect_fire(gameEngine.getAudioTrack());
    missile_counter = 0;
    Missile *missile = new Missile(spaceShip.x, spaceShip.y);
    gameEngine.addControl(missile);
  }

  GameControlBase *control = spaceShip.checkCollision();
  if ((control != NULL)  && (control->getID() == Enemy_ID)) {
          control->setDeleted(true);
          spaceShip.setEnabled(false);
          scoreBoard.stop();          
          sound_effect_game_end(gameEngine.getAudioTrack());
  }

  int tick = gameEngine.update();
  
  if (missile_counter < missile_interval) missile_counter = missile_counter + tick;
}