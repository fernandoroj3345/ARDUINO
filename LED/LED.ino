#define YELLOW 9
#define BLUE 10
#define RED 11
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
serial.begin(8000);
}

void loop() {
  // put your main code here, to run repeatedly:
  serial,print("on yellow");
  digitalWrite(yellow, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  serial,println("off yellow");
  digitalWrite(yellow, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
  
  serial,print("on red");
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for a second
  serial,print("on red");
  digitalWrite(red, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);    

  serial,print("on blue");
  digitalWrite(blue, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                       // wait for a second
  serial,print("ON BLUE");
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);    
  
}
