//indica el estado del PIR, podemos ver si está recibiendo señal o no
int led=8;
int pir=7;
int estadoPir;

void setup() {
  
  pinMode(led,OUTPUT);
  pinMode(pir,INPUT);
  Serial.begin(9600);
  digitalWrite(led,LOW);
  Serial.println("los estados del pir son: ");
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
}

void loop() {
estadoPir=digitalRead(pir);
Serial.println(estadoPir);
}

