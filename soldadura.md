
## Encender y apagar ledPOR BOTON
const int LED=13;
const int BOTON=7;
int val;
void setup(){
pinMode(LED,OUTPUT);
pinMode(BOTON,INPUT);
}
void loop(){
val=digitalRead(BOTON);
if  (val==HIGH){
digitalWrite(LED,HIGH);
}
else { digitalWrite(LED,LOW);
}
}

![image](https://user-images.githubusercontent.com/78345639/115360579-084d2b80-a1c0-11eb-98a3-528b1658d22b.png)
