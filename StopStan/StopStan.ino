#include <OpticSensor.h>
#include <InductiveSensor.h>
#include <MyRelay.h>
OpticSensor opticSensor(3);
InductiveSensor inductiveSensor(2);
MyRelay stopStan(13);
MyRelay secondArd(7);

void setup() {
  

}

void loop() {
  if(inductiveSensor.targetMetall()){
    secondArd.on_1ms();
  }
  if(inductiveSensor.targetMetall() and !opticSensor.letDelay()){
    stopStan.on_100ms();
  }

}
