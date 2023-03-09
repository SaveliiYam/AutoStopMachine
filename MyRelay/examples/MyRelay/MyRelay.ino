#include <MyRelay.h>
MyRelay relay(2);
MyRelay tickTime(13);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  relay.on_50ms();
  tickTime.on_time(400);
}
