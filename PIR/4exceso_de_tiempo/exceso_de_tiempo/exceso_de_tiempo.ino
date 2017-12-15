int led1=8;
int led2=9;
int pir=7;
int eP=0;//estado del pir
int ePa;//estado del pir anterior
int el1=0;//estado del led 1
int el2=0; //estado del led2
long t=30000;//tiempo que yo establezco 3 minutos
long T=0;//tiempo total del sistema
long t1=0;//tiempo de iniciado

void setup()
{ pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(pir,INPUT);
  Serial.begin(9600);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  Serial.println("iniciando-proyecto");
  delay(100);}

void loop()
{ ePa=eP;
  eP=digitalRead(pir);
  T=millis();//tiempo total desde el iniciado del sistema

    if(ePa==0 && eP==1)//cuando el pir recibe una señal
    {
      t1=millis();//tiempo inicial
      digitalWrite(led1,1);
      Serial.println("recibe una señal"); 
    }

     if(ePa==1 && eP==0)
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
     delay(150);} 
     
   if(T-t1>t)
  {
    el1=0;
    digitalWrite(led1,0);
    Serial.println("exceso de tiempo");
  }
} 
