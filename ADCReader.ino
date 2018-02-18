#include <ntp-time.h>
NtpTime* ntpTime;
String hhmmss(unsigned long int now)  //format value as "hh:mm:ss"
{
   String hour = String(Time.hourFormat12(now));
   String minute = String::format("%02i",Time.minute(now));
   String second = String::format("%02i",Time.second(now));
   return hour + ":" + minute + ":" + second;
};
void setup() {
    pinMode(7, OUTPUT);
    pinMode(A0, INPUT);
	pinMode(A1, INPUT);
	pinMode(A2, INPUT);
	pinMode(A3, INPUT);
	pinMode(A4, INPUT);
	pinMode(A5, INPUT);
	ntpTime = new NtpTime(1);  // Do an ntp update every minute
    ntpTime->start();
    Serial1.begin(9600);
}

void loop() {
    Particle.publish("time", hhmmss(Time.now()));
    Serial1.print(hhmmss(Time.now()));
    for(int i=0; i<8; i++){
        char ch[1];
        char val[4];
        itoa(i, ch, 10);
        itoa(analogRead(i), val, 10);
        Particle.variable(ch, val);
        Particle.publish(ch, val);
        Serial1.print(",");
        Serial1.print(ch);
        Serial1.print(",");
        Serial1.print(val);
    }
    Serial1.println();
    digitalWrite(7, HIGH);
    delay(100);
    digitalWrite(7, LOW); 
    delay(1000);
}
