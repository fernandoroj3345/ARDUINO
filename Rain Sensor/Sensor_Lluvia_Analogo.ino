#define lluvia_sen A0
#define led 5
void setup ()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(lluvia_sen, INPUT);
}

void loop ()
{
  int valor = analogRead (lluvia_sen);
  int nivel= map(valor,300,1020,0,255);
  Serial.print ( "Value Analog" );
  Serial.println (nivel);
  analogWrite(led,nivel);
  delay(350);
  
}
