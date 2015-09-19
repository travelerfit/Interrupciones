int bandera;
int z;

void setup(){
Serial.begin(9600);
delay(2000);
}

void serialEvent(){
  if (Serial.available()>0){
  z=(int)Serial.read();
   if(z!=13){
   bandera=1;
   //Serial.println("frd");
   }
  }
 }


void interrupcion(){

    if (z=='1'){ 
        Serial.println("C");
       
      }

      if(z=='2'){
      Serial.println("D");
     
      }
      if(z=='3'){
      Serial.println("E");
    
      }

    if(z=='4'){
      Serial.println("F");
    
      }
  
  
  
      bandera=0;
}

void loop(){
  
  if(bandera==1){
    //Serial.println(z);
   interrupcion();
    }
    
    
  
}

 void borrarBuffer(){
 while(Serial.available()){
 Serial.read();
 }
 }


