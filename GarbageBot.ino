const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 13;

// Motors
const int in4 = 3;
const int in3 = 4;
const int in2 = 5;
const int in1 = 6;
const int ena = 7;



long travelTime;
int distance;

void setup() {
  // UltraSonic Sensor
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  Serial.begin(9600);

  // MotorDriver
  //  pinMode(motor1, OUTPUT);
  // pinMode(motor2, OUTPUT);
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);


  analogWrite(ena, 255); // Max
  analogWrite(in1, 255);
  digitalWrite(in2, 0);
  delay(2000);
}

void loop() {
  // ULTRASONIC Sensor
  //
  //  digitalWrite(trigPin, LOW);
  //  delayMicroseconds(2);
  //  digitalWrite(trigPin, HIGH);
  //  delayMicroseconds(10);
  //
  //  travelTime = pulseIn(echoPin, HIGH);
  //  distance = travelTime * 0.034 / 2;
  //
  //  delay(400);
  //  Serial.print("Distance: ");
  //  Serial.println(distance);
  //
  //  if (distance < 8) {
  //    digitalWrite(ledPin, HIGH);
  //  }
  //  else {
  //    digitalWrite(ledPin, LOW);
  //  }

  // MOTOR



}
