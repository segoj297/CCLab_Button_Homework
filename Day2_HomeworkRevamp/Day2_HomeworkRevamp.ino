
int led = 13;
int button = 8;
int val = 0;
int old_val = 0;
int state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(button);
  if ((val == HIGH) && (old_val == LOW)){
    state = 1 -state;
    delay (10);
  }

  old_val = val;
  if (state == 1) {
    digitalWrite (led, HIGH);
  }else{
    digitalWrite (led, LOW);
  }
}
