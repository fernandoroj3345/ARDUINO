#define led1 9
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("encendido");
digitalWrite( led1,HIGH);
delay(1000);
Serial.println("apagado")
digitalWrite( led1,LOW);
delay(1000);

}
