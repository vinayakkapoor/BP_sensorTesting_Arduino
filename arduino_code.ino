#define trigPin 9
#define echoPin 10
#define safeDistance 10
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  float duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) * 0.0344;

  delay(100);
  
  if (distance >=2 && distance <= safeDistance){
    Serial.print(distance);   
  }
  else {    
    Serial.print(0);    
  }
  
}
