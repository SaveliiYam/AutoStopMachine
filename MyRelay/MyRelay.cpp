#include <MyRelay.h>

MyRelay::MyRelay(byte pin){
	_pin = pin;
	pinMode(_pin, OUTPUT);
	digitalWrite(_pin, LOW);
}

void MyRelay::on_50ms(){
	digitalWrite(_pin, HIGH);
	delay(50);
	digitalWrite(_pin, LOW);
}

void MyRelay::on_100ms(){
	digitalWrite(_pin, HIGH);
	delay(100);
	digitalWrite(_pin, LOW);
}

void MyRelay::on_200ms(){
	digitalWrite(_pin, HIGH);
	delay(200);
	digitalWrite(_pin, LOW);
}

void MyRelay::on_1ms(){
	digitalWrite(_pin, HIGH);
	delay(1);
	digitalWrite(_pin, LOW);
}
void MyRelay::on_time(int time){
	digitalWrite(_pin, HIGH);
	delay(time);
	digitalWrite(_pin, LOW);
}