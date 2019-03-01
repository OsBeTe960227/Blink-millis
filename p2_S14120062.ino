boolean estado=true;
unsigned long tEncendido=0;
unsigned long tApagado=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  digitalWrite(13,estado);
}

void loop() {
  // put your main code here, to run repeatedly:
  if((millis()-tEncendido>=2000)&&estado==true){
    estado=false;
    digitalWrite(13,estado);
    tApagado=millis();
  }
  if((millis()-tApagado>=4000)&&estado==false){
    estado=true;
    digitalWrite(13,estado);
    tEncendido=millis();
  }
}
