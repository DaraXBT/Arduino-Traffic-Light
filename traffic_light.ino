int G1 = 2;
int Y1 = 3;
int R1 = 4;

int R2 = 5;
int Y2 = 6;
int G2 = 7;

void setup() {
  // Configure all LED pins as outputs
  pinMode(G1, OUTPUT);
  pinMode(Y1, OUTPUT);
  pinMode(R1, OUTPUT);

  pinMode(G2, OUTPUT);
  pinMode(Y2, OUTPUT);
  pinMode(R2, OUTPUT);
}

void loop() {
  
  // Traffic Light 1: Green
  digitalWrite(G1, HIGH);
  digitalWrite(R2, HIGH);  
  delay(5000);

  // Traffic Light 1: Yellow
  digitalWrite(G1, LOW);
  digitalWrite(Y1, HIGH);
  delay(2000);

  // Traffic Light 1: Red
  digitalWrite(Y1, LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW); 
  
  // Traffic Light 2: Green 
  digitalWrite(G2, HIGH); 
  digitalWrite(R1, HIGH); 
  delay(5000);

  // Traffic Light 2: Yellow
  digitalWrite(G2, LOW);
  digitalWrite(Y2, HIGH);
  delay(2000);

  // Traffic Light 2: Red
  digitalWrite(Y2, LOW);
  digitalWrite(R2, HIGH);  
  digitalWrite(R1, LOW); 
}
