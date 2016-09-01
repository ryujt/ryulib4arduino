void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  int brightness;
  brightness = analogRead(0);

  // 어느 정도 밝아야 하는지에 따라 800 대신 다른 숫자를 사용하시기 바랍니다.
  // 200 미만에서 동작하는 CDS 센서도 있습니다.
  if (brightness < 800) {
    tone(13, 1000);
  } else {
    noTone(13);
  }
}
