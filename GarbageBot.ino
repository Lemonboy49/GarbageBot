const int trigPin = 9;
const int echoPin = 10;

// Motors
const int motor1 = 3;
const int motor2 = 4;
const int motor3 = 5;
const int motor4 = 6;

const int ledPin = 13;

long travelTime;
int distance;

void setup() {
  // UltraSonic Sensor
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  Serial.begin(9600);

  // MotorDriver
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(motor3, OUTPUT);
  pinMode(motor4, OUTPUT);
  
}

void loop() {
  // ULTRASONIC Sensor

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  travelTime = pulseIn(echoPin, HIGH);
  distance = travelTime * 0.034 / 2;

  delay(400);
  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < 8) {
    digitalWrite(ledPin, HIGH);
    }
  else {
    digitalWrite(ledPin, LOW);
  }

  // MOTOR
  analogWrite(motor1, 180);
  analogWrite(motor2, 0);
  analogWrite(motor3, 180);
  analogWrite(motor4, 0);
  

}
