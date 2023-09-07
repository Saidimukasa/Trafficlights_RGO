// variables
int GREEN = 2;
int YELLOW = 3;
int RED = 4;
int DELAY_GREEN = 500;
int DELAY_YELLOW = 500;
int DELAY_RED = 500;
int DELAY_BETWEEN_BLINKS = 500; // Delay between each blink

// basic functions
void setup()
{
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop()
{
  double_blink(GREEN, DELAY_GREEN);
  double_blink(YELLOW, DELAY_YELLOW);
  double_blink(RED, DELAY_RED);
}

void double_blink(int pin, int delayTime)
{
  for (int i = 0; i < 2; i++) {
    digitalWrite(pin, HIGH);
    delay(delayTime);
    digitalWrite(pin, LOW);
    delay(delayTime);
  }
  // Add a delay between sets of double blinks
  delay(DELAY_BETWEEN_BLINKS);
}
