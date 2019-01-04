int motor1 = 5;
int motor2 = 6;
int motor1A = 4;
int motor2A = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(motor1A, OUTPUT);
  pinMode(motor2A, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(motor1, HIGH);
  digitalWrite(motor1A, LOW);
  digitalWrite(motor2, HIGH);
  digitalWrite(motor2A, LOW);
}
