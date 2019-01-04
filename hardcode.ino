int motor1 = 30;
int motor2 = 22;
int motor1A = 34;
int motor2A = 26;

int photo1 = 9;
int photo2 = 12;
int photo3 = 10;

int val;
int val1;
int light1;
int light2;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(motor1A, OUTPUT);
  pinMode(motor2A, OUTPUT);
  pinMode(photo1, INPUT);
  pinMode(photo2, INPUT);
  pinMode(photo3, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(motor1, HIGH);
  digitalWrite(motor1A, LOW);
  digitalWrite(motor2, HIGH);
  digitalWrite(motor2A, LOW);
  delay(5000);

  digitalWrite(motor1, LOW);
  digitalWrite(motor1A, LOW);
  digitalWrite(motor2, HIGH);
  digitalWrite(motor2A, LOW);
  delay(550);

  digitalWrite(motor1, HIGH);
  digitalWrite(motor1A, LOW);
  digitalWrite(motor2, HIGH);
  digitalWrite(motor2A, LOW);
  delay(1500);

  digitalWrite(motor1, LOW);
  digitalWrite(motor1A, LOW);
  digitalWrite(motor2, HIGH);
  digitalWrite(motor2A, LOW);
  delay(1200);

  digitalWrite(motor1, HIGH);
  digitalWrite(motor1A, LOW);
  digitalWrite(motor2, HIGH);
  digitalWrite(motor2A, LOW);
  delay(1500);

  digitalWrite(motor1, LOW);
  digitalWrite(motor1A, LOW);
  digitalWrite(motor2, HIGH);
  digitalWrite(motor2A, LOW);
  delay(1250);

  digitalWrite(motor1, HIGH);
  digitalWrite(motor1A, LOW);
  digitalWrite(motor2, HIGH);
  digitalWrite(motor2A, LOW);
  delay(1500);

  digitalWrite(motor1, LOW);
  digitalWrite(motor1A, LOW);
  digitalWrite(motor2, HIGH);
  digitalWrite(motor2A, LOW);
  delay(600);

  digitalWrite(motor1, HIGH);
  digitalWrite(motor1A, LOW);
  digitalWrite(motor2, HIGH);
  digitalWrite(motor2A, LOW);
  delay(1500);
  
  digitalWrite(motor1, HIGH);
  digitalWrite(motor1A, LOW);
  digitalWrite(motor2, LOW);
  digitalWrite(motor2A, LOW);
  delay(5000);

  digitalWrite(motor1, HIGH);
  digitalWrite(motor1A, LOW);
  digitalWrite(motor2, HIGH);
  digitalWrite(motor2A, LOW);
  delay(1500);
  
  
}
