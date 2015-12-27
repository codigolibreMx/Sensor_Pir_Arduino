const int LED=3;
const int PIR=2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(PIR,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int valor = digitalRead(PIR);
  Serial.println(valor);
  if(valor == HIGH){
    digitalWrite(LED,HIGH);
  }else{
    digitalWrite(LED,LOW);
  }
}

