  int motor1 = 5;
int motor2 = 7;
int motor1A = 4;
int motor2A = 6;
int dist = 15;
int val2;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(motor1A, OUTPUT);
  pinMode(motor2A, OUTPUT);
  pinMode(dist, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val2 = analogRead(dist);
  
  analogWrite(motor1, 150);
  digitalWrite(motor1A, LOW);
  analogWrite(motor2, 150);
  digitalWrite(motor2A, LOW);

  if(val2 > 200){
    digitalWrite(motor1, LOW);
    digitalWrite(motor1A, LOW);
    digitalWrite(motor2, LOW);
    digitalWrite(motor2A, LOW);  
  }
    
}
