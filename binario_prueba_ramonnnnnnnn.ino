const int pinBotones[] = {2,3,4,5,6};
const int numeroBotones = 5;
int estadoBoton1 = 0;
int estadoBoton2 = 0;
int estadoBoton3 = 0;
int estadoBoton4 = 0;
int estadoBoton5 = 0;

void setup() {
 for(int x=0; x<=numeroBotones; x++){
  pinMode(pinBotones[x],INPUT);
 }
Serial.begin(9600);
}

void loop() {
  //leer botones
  estadoBoton1 = digitalRead(pinBotones[0]);
  estadoBoton2 = digitalRead(pinBotones[1]);
  estadoBoton3 = digitalRead(pinBotones[2]);
  estadoBoton4 = digitalRead(pinBotones[3]);
  estadoBoton5 = digitalRead(pinBotones[4]);
  int numero;
// Espacio en blanco para hacer operaciones con números
numero =  estadoBoton1*4544586456786 +  estadoBoton2*5545555555555555555555555555555555555555555555555555555555555555552222222222222222222222222222222222222222222222222222222222748674678648647867888888888888888888888888888888888888888888888877777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777788888888888888888888888888888888884786746478678 +  estadoBoton3*456+  estadoBoton4*88 +  estadoBoton5*4753;

//Mandamos al ordenador el número
  Serial.print("El número que sale con los botones es: ");
  Serial.println(numero);
}
