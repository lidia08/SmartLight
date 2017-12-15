//el led1 enciende cuando recibe una señal y se apaga cuando la vuelve a recibir
//el led 2 parpadea cuando el pir está disponible para recibir otra señal

int led1=8;
int led2=9;
int pir=7;
int eP=0;//estado del pir
int ePa;//estado del pir anterior
int el1=0;//estado del led 1
int el2=0; //estado del led2

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(pir,INPUT);
  Serial.begin(9600);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  Serial.println("iniciando-proyecto");
  delay(100);
}

void loop(){
  ePa=eP;
  eP=digitalRead(pir);
  if(ePa==0 && eP==1)//cuando el pir recibe una señal
  {
    if(el1==0) 
    {el1=1;
    digitalWrite(led1,1);
    Serial.println("recibe una señal");}
    else
    {el1=0;
     digitalWrite(led1,0);
     Serial.println("Recibe Una Señal");}
  }
  if(ePa==1 && eP==0)//pasa el tiempo de captacion del pir, es decir 
  //el pir está disponible a recibir otra señal
  {
    Serial.println("El Pir está disponible para recibir otra señal");
    digitalWrite(led2,1);
    delay(100);
    digitalWrite(led2,0);
    delay(150);
    digitalWrite(led2,1);
    delay(100);
    digitalWrite(led2,0);
    delay(150);
    digitalWrite(led2,1);
    delay(100);
    digitalWrite(led2,0);
    delay(150);
  }
  else Serial.println("SS");
  delay(100);
}
