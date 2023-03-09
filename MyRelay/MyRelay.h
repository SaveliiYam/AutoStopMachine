#pragma once
#include <Arduino.h>

class MyRelay{
	private:
		byte _pin;
	public:
		MyRelay(byte pin);
		void on_1ms();
		void on_50ms();
		void on_100ms();
		void on_200ms();
		void on_time(int time);
};