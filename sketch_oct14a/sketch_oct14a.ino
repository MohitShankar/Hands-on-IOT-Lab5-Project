void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);



}
int val =0;
void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(0);
Serial.println(val);
digitalWrite(1, LOW);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);

if(val > 205)
{
  digitalWrite(7, HIGH);   //using pin 7 as a replacememt for pin 1.
 
} else digitalWrite(7, LOW);

if(val > 310)
{
  digitalWrite(2, HIGH);
}

if(val > 420 )
{
  digitalWrite(3, HIGH);
}

if(val > 540)
{
  digitalWrite(4, HIGH);
}

if(val > 600)
{
  digitalWrite(5, HIGH);
}



}
