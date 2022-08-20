
#include <Servo.h>

int angulo0 = 120;
int angulo1 = 90;
int angulo2 = 110;
int angulo3 = 30;

Servo miservo0;
Servo miservo1;
Servo miservo2;
Servo miservo3;

void setup()
{
  miservo0.attach(11);
  miservo1.attach(10);
  miservo2.attach(9);
  miservo3.attach(6);
}

void loop()
{

  miservo1.write(110);
  delay(1000);

  for (int angulo3 = 30; angulo3 < 100; angulo3 += 1)
  {
    miservo3.write(angulo3);
    delay(25);
  }
  delay(1000);

  for (int angulo2 = 110; angulo2 >= 70; angulo2 -= 1)
  {
    miservo2.write(angulo2);
    delay(25);
  }
  delay(1000);

  for (int angulo0 = 120; angulo0 >= 50; angulo0 -= 1)
  {
    miservo0.write(angulo0);
    delay(25);
  }

  delay(1000);

  for (int angulo2 = 70; angulo2 < 110; angulo2 += 1)
  {
    miservo2.write(angulo2);
    delay(25);
  }
  delay(1000);

  for (int angulo3 = 100; angulo3 >= 30; angulo3 -= 1)
  {
    miservo3.write(angulo3);
    delay(25);
  }

  delay(1000);

  for (int angulo2 = 110; angulo2 >= 70; angulo2 -= 1)
  {
    miservo2.write(angulo2);
    delay(25);
  }
  delay(1000);

  for (int angulo0 = 50; angulo0 < 120; angulo0 += 1)
  {
    miservo0.write(angulo0);
    delay(25);
  }
  delay(1000);

  for (int angulo2 = 70; angulo2 < 110; angulo2 += 1)
  {
    miservo2.write(angulo2);
    delay(25);
  }
  delay(1000);
}
