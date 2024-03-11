const int trig = 8;
const int echo = 9;

int duration = 0;
int distance = 0;


void setup() {
  // put your setup code here, to run once:

   pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:



  
  digitalWrite(trig, HIGH);
delay(1000);
digitalWrite(trig, LOW);

duration = pulseIn(echo, HIGH);
distance = (duration/2) / 100; 
Serial.println(distance);

}
