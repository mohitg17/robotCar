int photo1 = 0;
int photo2 = 1;
int dist = 15;
int val;
int val1;
int val2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(photo1, INPUT);
  pinMode(photo2, INPUT);
  pinMode(dist, INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(photo1);
  val1 = analogRead(photo2);
  val2 = analogRead(dist);
  Serial.println("Resistor 1");
  Serial.println(val);
  Serial.println("Resistor 2");
  Serial.println(val1);
  Serial.println("Distance");
  Serial.println(val2);
  delay(2500);

  
}
