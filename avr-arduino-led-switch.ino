void setup() {
  // put your setup code here, to run once:
  // 1 OUTPUT, 0 INPUT
  DDRD = DDRD & (~(1 << PD6) && ~(1 << PD0));   // PINS 6,0 as input
  PORTD = 0x00;
}

void loop() {
  // put your main code here, to run repeatedly:
  if (PIND & (1 << PD6)) {
    PORTD |= (1 << PD7);
  } else {
    PORTD &= ~(1 << PD7);
  }
}
