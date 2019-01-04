int motor1 = 5;
int motor2 = 7;
int motor1A = 4;
int motor2A = 6;

int photo1 = 0;
int photo2 = 1;
int dist = 15;

int val;
int val1;
int val2;
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
  pinMode(dist, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(photo1);
  val1 = analogRead(photo2);
  val2 = analogRead(dist); 
  light1 = 800;
  light2 = 800;

  if(val > light1 && val1 > light2){
    digitalWrite(motor1, LOW);
    digitalWrite(motor1A, LOW);
    digitalWrite(motor2, LOW);
    digitalWrite(motor2A, LOW);

  }

   if(val < light1 && val1 < light2) {
    analogWrite(motor1, 200);
    digitalWrite(motor1A, LOW);
    analogWrite(motor2, 200);
    digitalWrite(motor2A, LOW);
  
  }

  if(val < light1 && val1 > light2){
    digitalWrite(motor1, LOW);
    digitalWrite(motor1A, LOW);
    digitalWrite(motor2, 200);
    digitalWrite(motor2A, LOW);

  }

  if(val > light1 && val1 < light2){
    analogWrite(motor1, 200);
    digitalWrite(motor1A, LOW);
    digitalWrite(motor2, LOW);
    digitalWrite(motor2A, LOW);

  }

  if(val2 > 200) {
    digitalWrite(motor1, LOW);
    digitalWrite(motor1A, LOW);
    digitalWrite(motor2, LOW);
    digitalWrite(motor2A, LOW);    
  }
  
}
