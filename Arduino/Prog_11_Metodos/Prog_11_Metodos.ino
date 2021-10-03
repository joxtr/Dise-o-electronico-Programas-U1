
int led[5]= {9,10,15};

int led_prender;

void setup() {
  // put your setup code here, to run once:

for(int i =0;i<5;i++){
pinMode(led_1,OUTPUT);
}

randomSeed(analogRead(A0);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  
  led_prender=random(5);
  cambiar_led(led_prender);
delay(2000);
  }
  void cambiar_led(int j){
     for(int i =0; i<5;i++){
    digitalWrite(led[i],0);
  }
  digitalWrite(led[j],1);
  }

  
