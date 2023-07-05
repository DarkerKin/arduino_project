int pin1 = 2;
int pin2 = 4;
int pin3 = 6;
int pin4 = 8;
int pin5 = 10;
int wait = 700;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // this is the a binary counter upto 5 bits
  bin_counter(0,0,0,0,0);
  delay(wait);
  bin_counter(0,0,0,0,1);
  delay(wait);
  bin_counter(0,0,0,1,0);
  delay(wait);
  bin_counter(0,0,0,1,1);
  delay(wait);
  bin_counter(0,0,1,0,0);
  delay(wait);
  bin_counter(0,0,1,0,1);
  delay(wait);
  bin_counter(0,0,1,1,0);
  delay(wait);
  bin_counter(0,0,1,1,1);
  delay(wait);
  bin_counter(0,1,0,0,0);
  delay(wait);
  bin_counter(0,1,0,0,1);
  delay(wait);
  bin_counter(0,1,0,1,0);
  delay(wait);
  bin_counter(0,1,0,1,1);
  delay(wait);
  bin_counter(0,1,1,0,0);
  delay(wait);
  bin_counter(0,1,1,0,1);
  delay(wait);
  bin_counter(0,1,1,1,1);
  delay(wait);//
  bin_counter(1,0,0,0,0);
  delay(wait);
  bin_counter(1,0,0,0,1);
  delay(wait);
  bin_counter(1,0,0,1,0);
  delay(wait);
  bin_counter(1,0,0,1,1);
  delay(wait);
  bin_counter(1,0,1,0,0);
  delay(wait);
  bin_counter(1,0,1,0,1);
  delay(wait);
  bin_counter(1,0,1,1,0);
  delay(wait);
  bin_counter(1,0,1,1,1);
  delay(wait);
  bin_counter(1,1,0,0,0);
  delay(wait);
  bin_counter(1,1,0,0,1);
  delay(wait);
  bin_counter(1,1,0,1,0);
  delay(wait);
  bin_counter(1,1,0,1,1);
  delay(wait);
  bin_counter(1,1,1,0,0);
  delay(wait);
  bin_counter(1,1,1,0,1);
  delay(wait);
  bin_counter(1,1,1,1,1);
  delay(wait);
}

void Blink(int pin, int num, int Time){
  int value = 0;
  while(value<num){
    digitalWrite(pin,HIGH);
    delay(Time);
    digitalWrite(pin,LOW);
    delay(Time);
    value++;
    }
}

void on(int pin){
  digitalWrite(pin,HIGH);
}

void off(int pin){
  digitalWrite(pin,LOW);
}

void bin_counter(int a, int b, int c, int d, int e){
  if(a==1){
    on(pin1);
  }else{
    off(pin1);
  }
  if(b==1){
    on(pin2);
  }else{
    off(pin2);
  }
  if(c==1){
    on(pin3);
  }else{
    off(pin3);
  }
  if(d==1){
    on(pin4);
  }else{
    off(pin4);
  }
  if(e==1){
    on(pin5);
  }else{
    off(pin5);
  }
}
