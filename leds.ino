int RedLed = 13;
int YollowLed = 10;
int GreenLed = 7;
void setup() {
pinMode(RedLed, OUTPUT);
pinMode(YollowLed, OUTPUT);
pinMode(GreenLed, OUTPUT);
}

void loop() {
digitalWrite(RedLed, HIGH);
delay(2000);
digitalWrite(RedLed, LOW);
digitalWrite(YollowLed, HIGH);
delay(500);
digitalWrite(YollowLed, LOW);
digitalWrite(GreenLed, HIGH);
delay(2000);
digitalWrite(GreenLed, LOW);
digitalWrite(RedLed, HIGH);
}
