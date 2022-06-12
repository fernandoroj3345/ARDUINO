#define led1 5
#define led2 9
#define led3 12


void setup() {
  // put your setup code here, to run once:
pinMode (led1, OUTPUT);
pinMode (led2, OUTPUT);
pinMode (led3, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("encendido");
digitalWrite(led1, HIGH);
delay(1000);

Serial.println("apagado");
digitalWrite(led1, LOW);
delay(1000);

Serial.println("encendido");
digitalWrite(led2, HIGH);
delay(1000);

Serial.println("apagado");
digitalWrite(led2, LOW);
delay(1000);

Serial.println("encendido");
digitalWrite(led3, HIGH);
delay(1000);

Serial.println("apagado");
digitalWrite(led3, LOw);
delay(1000);
}
