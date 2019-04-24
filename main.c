int blue = 9;
int red = 11;
int green = 10;
int state = 0; 
int when = 0;

void setup()
{
  //pinMode(A0,INPUT); //El sensor de sonido se conecta al pin 7
  pinMode(blue, OUTPUT);
    pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
 // boolean soundstate = digitalRead(7);
 double sensor = analogRead(A0);
 Serial.print("Val =  ");
