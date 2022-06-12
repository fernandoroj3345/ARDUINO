#define Verde 1
#define Amarillo 2
#define Rojo 3
int color;

void setup()
{
 pinMode(Verde, OUTPUT);
 pinMode(Amarillo, OUTPUT);
 pinMode(Rojo, OUTPUT);
}

void loop()
{
  color++;
  if(color==1)
  { 
  Serial.println("VERDE");
  digitalWrite(Verde, HIGH);
  delay(3000);
  digitalWrite(Verde, LOW);
  delay(750);
  }
  if(color==2)
  { 
  Serial.println("AMARILLO");
  digitalWrite(Amarillo, HIGH);
  delay(1000);
  digitalWrite(Amarillo, LOW);
  delay(200);
  }
  if(color==3)
  { 
  Serial.println("ROJO");
  digitalWrite(Rojo, HIGH);
  delay(3000);  
  digitalWrite(Rojo, LOW);
  delay(500);
  color==0;
  }
}
