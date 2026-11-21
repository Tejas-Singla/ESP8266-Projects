int ir=14;
int blue=12;
int red=13;
int buzzer=15;

void setup() {
  // put your setup code here, to run once:
pinMode(ir, INPUT);
pinMode(red, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(buzzer, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int irval=digitalRead(ir);
Serial.println(irval);

if(irval==0){
digitalWrite(blue, HIGH);
digitalWrite(red, LOW);
digitalWrite(buzzer, HIGH);

}else{
  digitalWrite(blue, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(buzzer, LOW);

}
delay(10);
}
