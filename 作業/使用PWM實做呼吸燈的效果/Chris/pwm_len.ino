#define LED_PWM 8
#define MAX_BRIGHTNESS 200
#define MIN_BRIGHTNESS 0
#define OBVERSE 1
#define REVERSE -1

int brightness = 0;
int shift_value = 25;
int delaytime = 250;
int Direction = OBVERSE;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PWM, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    analogWrite(LED_PWM, brightness);
  
    if(Direction==OBVERSE){
      brightness += shift_value;
    }else{
      brightness -= shift_value;
    }

    if(brightness >= MAX_BRIGHTNESS){
      Direction = REVERSE;
    }else if(brightness <= MIN_BRIGHTNESS){
      Direction = OBVERSE;
    }
    delay(delaytime);
}
