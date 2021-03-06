#include <RyuGame.h>

int Enemy_ID = 1;

class SpaceShip : public GameControlBase
{
private:
public:
  void start() 
  {
    x = 43;
    y = 45;
    _HitSize = 2;
  }

  void update(unsigned long tick) 
  {
    _LCD->fillCircle(x, y, 2, BLACK);
  }
};

class Enemy : public GameControlBase
{
private:
public:
  void start() 
  {
    _ID = Enemy_ID;
    x = rand()  % 84;
    y = -8;
    _HitSize = 4;
  }

  void update(unsigned long tick) 
  {
    y++;
    if (y > 52) setDeleted(true);
    _LCD->fillCircle(x, y, 4, BLACK);
  }
};

GameEngine gameEngine(13, 2, 3, 4, 5, 6);
SpaceShip spaceShip;

int pin_left = 7;
int pin_right = 8;

void setup() {
  gameEngine.addControl(&spaceShip);
  gameEngine.start();

  pinMode(pin_left, INPUT_PULLUP);
  pinMode(pin_right, INPUT_PULLUP);
}

void loop() {
  if ( (rand() %50) == 0 ) {
    gameEngine.addControl(new Enemy());
  }
  
  if (digitalRead(pin_left) == LOW) {
    spaceShip.x--;
    if (spaceShip.x < 2) spaceShip.x = 2;
  }
  
  if (digitalRead(pin_right) == LOW) {
    spaceShip.x++;
    if (spaceShip.x > 81) spaceShip.x = 81;    
  }

  GameControlBase *control = spaceShip.checkCollision();
  if ((control != NULL)  && (control->getID() == Enemy_ID)) {
          control->setDeleted(true);
          spaceShip.setEnabled(false);
  }

  gameEngine.update();
}

