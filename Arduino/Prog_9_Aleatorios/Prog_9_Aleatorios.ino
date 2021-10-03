int led_1 = 10;
int led_2 = 11;
int led_3 = 12;
int led_4 = 13;

int led_prender; //0,1,2,3
void setup() {
  // put your setup code here, to run once:


 pinMode(led_1,OUTPUT);
 pinMode(led_2,OUTPUT);
 pinMode(led_3,OUTPUT);
 pinMode(led_4,OUTPUT);

 //randomSeed(6) //normalizaa
 randomSeed(analogRead(A0)); //la semilla tendra un valor entre 0 y 1023
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_1, 0);
  digitalWrite(led_2, 0);
  digitalWrite(led_3, 0);
  digitalWrite(led_4, 0);

  led_prender = random(4); // [0-(n-1)]
  // random(min,max)   [min -(max - 1)]

  switch(led_prender){
    case 0:
    digitalWrite(led_1, 1);
    break;
    case 1:
    digitalWrite(led_2, 1);
    break;
    case 2:
    digitalWrite(led_3, 1);
    break;
    case 3:
    digitalWrite(led_4, 1);
    break;
  }
  delay(2000);
}
