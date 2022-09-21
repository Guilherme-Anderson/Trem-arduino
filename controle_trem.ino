//Código atualizado para o uso de 2 tip 122 por desvio.
#include <AFMotor.h>
AF_DCMotor motor(1);
unsigned char velo = 0x00;
int velocidade = 0;
const int tempo = 450;


const int bt01 = 24;
const int bt02 = 26;
const int bt03 = 28;
const int bt04 = 30;
const int bt05 = 32;
const int bt06 = 34;
const int bt07 = 36;
const int bt08 = 38;
const int bt09 = 40;
const int bt11 = 44;
const int bt10 = 42;
const int bt12 = 46;

//Cada botão deverá ter o seu oposto, para que o AMV possa ir para diferentes direções.

const int bt13 = 25;
const int bt14 = 27;
const int bt15 = 29;
const int bt16 = 31;
const int bt17 = 33;
const int bt18 = 35;//certo
const int bt19 = 37;//certo
const int bt20 = 39;//certo
const int bt21 = 41;//certo
const int bt23 = 45;
const int bt22 = 43;
const int bt24 = 47;//CERTO


int est_bt01 = true;
int est_bt02 = true;
int est_bt03 = false;
int est_bt04 = true;
int est_bt05 = true;
int est_bt06 = true;
int est_bt07 = false;
int est_bt08 = false;
int est_bt09 = false;
int est_bt10 = true;
int est_bt11 = true;
int est_bt12 = false;
int sentido =  false;

char mrv;
char estado;
char var;


void setup() {
  
  Serial.begin(9600);
  
  pinMode(bt01, OUTPUT);
  pinMode(bt02, OUTPUT);
  pinMode(bt03, OUTPUT);
  pinMode(bt04, OUTPUT);
  pinMode(bt05, OUTPUT);
  pinMode(bt06, OUTPUT);
  pinMode(bt07, OUTPUT);
  pinMode(bt08, OUTPUT);
  pinMode(bt09, OUTPUT);
  pinMode(bt10, OUTPUT);
  pinMode(bt11, OUTPUT);
  pinMode(bt12, OUTPUT);
  pinMode(bt13, OUTPUT);
  pinMode(bt14, OUTPUT);
  pinMode(bt15, OUTPUT);
  pinMode(bt16, OUTPUT);
  pinMode(bt17, OUTPUT);
  pinMode(bt18, OUTPUT);
  pinMode(bt19, OUTPUT);
  pinMode(bt20, OUTPUT);
  pinMode(bt21, OUTPUT);
  pinMode(bt22, OUTPUT);
  pinMode(bt23, OUTPUT);
  pinMode(bt24, OUTPUT);

  digitalWrite(bt01,LOW);
  digitalWrite(bt02,LOW);
  digitalWrite(bt03,LOW);
  digitalWrite(bt04,LOW);
  digitalWrite(bt05,LOW);
  digitalWrite(bt06,LOW);
  digitalWrite(bt07,LOW);
  digitalWrite(bt08,LOW);
  digitalWrite(bt09,LOW);
  digitalWrite(bt10,LOW);
  digitalWrite(bt11,LOW);
  digitalWrite(bt12,LOW);
  digitalWrite(bt13,LOW);
  digitalWrite(bt14,LOW);
  digitalWrite(bt15,LOW);
  digitalWrite(bt16,LOW);
  
      }

void loop() {

  int var=Serial.read();

  if (var=='1'){
    if (est_bt01==true){
      est_bt01=false;
      digitalWrite(bt01,HIGH);
      delay(tempo);
      digitalWrite(bt01,LOW); 
       
      }
    else {
      est_bt01=true;
      digitalWrite(bt13,HIGH);
      delay(tempo);
      digitalWrite(bt13,LOW);
      
    }
      
   
      
  }
  if (var=='2'){
    if (est_bt02==true){
      est_bt02=false;
      digitalWrite(bt02,HIGH);
      delay(tempo);
      digitalWrite(bt02,LOW); 
       
      }
    else {
      est_bt02=true;
      digitalWrite(bt14,HIGH);
      delay(tempo);
      digitalWrite(bt14,LOW);
      
    }
  }
  if (var=='3'){
    if (est_bt03==true){
      est_bt03=false;
      digitalWrite(bt03,HIGH);
      delay(tempo);
      digitalWrite(bt03,LOW); 
       
      }
    else {
      est_bt03=true;
      digitalWrite(bt15,HIGH);
      delay(tempo);
      digitalWrite(bt15,LOW);
      
   }
  }

  
  if (var=='4'){   
      if (est_bt04==true){
      est_bt04=false;
      digitalWrite(bt04,HIGH);
      delay(tempo);
      digitalWrite(bt04,LOW); 
       
      }
    else {
      est_bt04=true;
      digitalWrite(bt16,HIGH);
      delay(tempo);
      digitalWrite(bt16,LOW);
      
   }
  
  }
  if (var=='5'){
      
      if (est_bt05==true){
      est_bt05=false;
      digitalWrite(bt05,HIGH);
      delay(tempo);
      digitalWrite(bt05,LOW); 
       
      }
      else {
      est_bt05=true;
      digitalWrite(bt17,HIGH);
      delay(tempo);
      digitalWrite(bt17,LOW);
      }
  
  }
  if (var=='6'){
      if (est_bt06==true){
      est_bt06=false;
      digitalWrite(bt06,HIGH);
      delay(tempo);
      digitalWrite(bt06,LOW); 
       
      }
      else {
      est_bt06=true;
      digitalWrite(bt18,HIGH);
      delay(tempo);
      digitalWrite(bt18,LOW);
      }
  
  }
  if (var=='7'){
      if (est_bt07==true){
      est_bt07=false;
      digitalWrite(bt07,HIGH);
      delay(tempo);
      digitalWrite(bt07,LOW); 
       
      }
      else {
      est_bt07=true;
      digitalWrite(bt19,HIGH);
      delay(tempo);
      digitalWrite(bt19,LOW);
      }
  
  
  }
  if (var=='8'){

      if (est_bt08==true){
      est_bt08=false;
      digitalWrite(bt08,HIGH);
      delay(tempo);
      digitalWrite(bt08,LOW); 
       
      }
      else {
      est_bt08=true;
      digitalWrite(bt20,HIGH);
      delay(tempo);
      digitalWrite(bt20,LOW);
      }
  
  
  }
  if (var=='9'){
      if (est_bt09==true){
      est_bt09=false;
      digitalWrite(bt09,HIGH);
      delay(tempo);
      digitalWrite(bt09,LOW); 
       
      }
      else {
      est_bt09=true;
      digitalWrite(bt21,HIGH);
      delay(tempo);
      digitalWrite(bt21,LOW);
      }
  
  
  }
  if (var=='a'){
      if (est_bt10==true){
      est_bt10=false;
      digitalWrite(bt10,HIGH);
      delay(tempo);
      digitalWrite(bt10,LOW); 
       
      }
      else {
      est_bt10=true;
      digitalWrite(bt22,HIGH);
      delay(tempo);
      digitalWrite(bt22,LOW);
      }
  
  
  }
  if (var=='b'){
  
      if (est_bt11==true){
      est_bt11=false;
      digitalWrite(bt11,HIGH);
      delay(tempo);
      digitalWrite(bt11,LOW); 
       
      }
      else {
      est_bt11=true;
      digitalWrite(bt23,HIGH);
      delay(tempo);
      digitalWrite(bt23,LOW);
      }
  
  
  }
  if (var=='c'){
    if (est_bt11==true){
      est_bt11=false;
      digitalWrite(bt12,HIGH);
      delay(tempo);
      digitalWrite(bt12,LOW); 
       
      }
     else {
      est_bt11=true;
      digitalWrite(bt24,HIGH);
      delay(tempo);
      digitalWrite(bt24,LOW);
      }
  
    
  }
//Comandos para a locomotiva.
  if (var=='d'){
    if (sentido==0){sentido=1;}
    else {sentido=0;}
  }

  if (var=='e'){
    velocidade=0;
  }
   if (var=='f'){
    velocidade=1;
  }
   if (var=='g'){
    velocidade=2;
  }
   if (var=='h'){
    velocidade=3;
  }
   if (var=='i'){
    velocidade=4;
  }
   if (var=='j'){
    velocidade=5;
  }
   if (var=='k'){
    velocidade=6;
  }
   if (var=='l'){
    velocidade=7;
  }
   if (var=='m'){
    velocidade=8;
  }
   if (var=='n'){
    velocidade=9;
  }
   if (var=='o'){
    velocidade=10;
  }
  else{
  set_velocidade();
  }
}

 void set_velocidade(){
  velo = map(velocidade, 0, 10, 0, 255);
  motor.setSpeed(velo);
  if (sentido==0){
    motor.run(FORWARD);    
   }
  if(sentido==1){
    motor.run(BACKWARD);
  }
 
 }
