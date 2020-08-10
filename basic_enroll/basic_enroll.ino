/*

*/
#include <Keyboard.h>

#define email "enroll@gmail.org"
#define password "enrollpassword"

void setup() {
  pinMode(17, OUTPUT);
  delay(1000);         // Give device time to reconginze device as native keyboard
  Keyboard.begin();    // Enter Enrollment
  Keyboard.press(128);
  Keyboard.press(130);
  Keyboard.press('e');
  delay(1000);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print(email);  // Login
  Keyboard.write(176);
  delay(1500);            // Needs to be double-checked
  Keyboard.print(password);
  Keyboard.write(176);
}

                     // Show that the code is finished executing, keep from executing again
void loop() {
  digitalWrite(17, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite(17, LOW);    // turn the LED off by making the voltage LOW
  delay(100);               // wait for a second
}
