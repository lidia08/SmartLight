//comprobacion si el PIR recibe señal
int led=8;
int pir=7;
int estadoPir;

void setup() {
  
  pinMode(led,OUTPUT);
  pinMode(pir,INPUT);
  Serial.begin(9600);
  digitalWrite(led,LOW);
  Serial.println("Hola Mundo xd");
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
}

void loop() {
estadoPir=digitalRead(pir);

if(estadoPir==1){
  digitalWrite(led,HIGH);
  Serial.println("DETECTADO");
  delay(100);
  }
 
}

