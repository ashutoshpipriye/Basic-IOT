
int Led = 8;
void setup(){
  pinMode(Led,OUTPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);
}
void loop(){
  int a = analogRead(A1);
  Serial.println(a);
  analogWrite(Led,a);
  delay(1000);
}
