// Calcular el cuadrado de un numero ingresado por el usuario


//Variables
int dato;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

while(Serial.available()==0){}
  dato = Serial.readString().toInt(); // numero 1 

while(Serial.available()==0){}
dato += Serial.readString().toInt(); // numero 2 

  Serial.println(dato);


delay(100);
}
