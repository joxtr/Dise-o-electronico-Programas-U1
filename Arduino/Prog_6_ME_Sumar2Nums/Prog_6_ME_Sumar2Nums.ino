
//Variables
int dato;
int suma;
int estado;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  estado = 0;
  suma=0;

}

void loop() {
  // put your main code here, to run repeatedly:
  switch(estado){
    case 0:
    Serial.println("Ingresa un numero");
    estado=1;

    break;
    case 1:
    case 3:
    if(Serial.available()>0){
      dato=Serial.readString().toInt();
      
      if(estado == 1){
       //Serial.println("Estado 1");
        suma =dato;
        estado = 2;
      }else{
        //Serial.println("Estado 5");
        suma += dato;
      }
      estado = 4;
    }

    break;
    case 2:
    Serial.println("Ingresa otro numero");
    estado =3;

    break;
    case 4:
    Serial.println("La suma es:"+String(suma));

    break;
    default:

    break;
  }
delay(100);
}
