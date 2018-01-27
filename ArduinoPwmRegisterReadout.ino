//    ArduinoPwmRegisterReadout 
//    Pwm registers readout for atmega 328
//    Copyright (C) <2017>  <Xander Jansen>
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU Affero General Public License as published
//    by the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU Affero General Public License for more details.
//
//    You should have received a copy of the GNU Affero General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.

void setup() {
 Serial.begin(9600);
delay(100);
Serial.println("TCCR0A: "+(String)TCCR0A);
Serial.println((String)
"COM0A1 " 
+"COM0A0 "
+"COM0B1 "
+"COM0B0 "
+"  -   "
+"  -   "
+"WGM01 "
+"WGM00 ");
Serial.println(+"   "
+(String)bitRead(TCCR0A, 7)+"      "
+(String)bitRead(TCCR0A, 6)+"      "
+(String)bitRead(TCCR0A, 5)+"      "
+(String)bitRead(TCCR0A, 4)+"     "
+(String)bitRead(TCCR0A, 3)+"     "
+(String)bitRead(TCCR0A, 2)+"     "
+(String)bitRead(TCCR0A, 1)+"     "
+(String)bitRead(TCCR0A, 0)+"\n\n");

Serial.println("TCCR0B: "+(String)TCCR0B);
Serial.println((String)
"FOC0A  " 
+"FOC0B  "
+"   -   "
+"   -   "
+" WGM02 "
+"CS02 "
+" CS01 "
+" CS00 ");
Serial.println(+"   "
+(String)bitRead(TCCR0B, 7)+"      "
+(String)bitRead(TCCR0B, 6)+"      "
+(String)bitRead(TCCR0B, 5)+"      "
+(String)bitRead(TCCR0B, 4)+"     "
+(String)bitRead(TCCR0B, 3)+"     "
+(String)bitRead(TCCR0B, 2)+"     "
+(String)bitRead(TCCR0B, 1)+"     "
+(String)bitRead(TCCR0B, 0)+"\n\n\n\n");

Serial.println("TCCR1A: "+(String)TCCR1A);
Serial.println((String)
"COM1A1 " 
+"COM1A0 "
+"COM1B1 "
+"COM1B0 "
+"  -   "
+"  -   "
+"WGM11 "
+"WGM10 ");
Serial.println(+"   "
+(String)bitRead(TCCR1A, 7)+"      "
+(String)bitRead(TCCR1A, 6)+"      "
+(String)bitRead(TCCR1A, 5)+"      "
+(String)bitRead(TCCR1A, 4)+"     "
+(String)bitRead(TCCR1A, 3)+"     "
+(String)bitRead(TCCR1A, 2)+"     "
+(String)bitRead(TCCR1A, 1)+"     "
+(String)bitRead(TCCR1A, 0)+"\n\n");

Serial.println("TCCR1B: "+(String)TCCR1B);
Serial.println((String)
"ICNC1  " 
+"ICES1  "
+"  -   "
+" WGM13 "
+" WGM12 "
+" CS12 "
+" CS11 "
+" CS10 ");
Serial.println(+"   "
+(String)bitRead(TCCR1B, 7)+"      "
+(String)bitRead(TCCR1B, 6)+"      "
+(String)bitRead(TCCR1B, 5)+"      "
+(String)bitRead(TCCR1B, 4)+"     "
+(String)bitRead(TCCR1B, 3)+"     "
+(String)bitRead(TCCR1B, 2)+"     "
+(String)bitRead(TCCR1B, 1)+"     "
+(String)bitRead(TCCR1B, 0)+"\n\n\n\n");

Serial.println("TCCR2A: "+(String)TCCR2A);
Serial.println((String)
"COM2A1 " 
+"COM2A0 "
+"COM2B1 "
+"COM2B0 "
+"  -   "
+"  -   "
+"WGM21 "
+"WGM20 ");
Serial.println(+"   "
+(String)bitRead(TCCR2A, 7)+"      "
+(String)bitRead(TCCR2A, 6)+"      "
+(String)bitRead(TCCR2A, 5)+"      "
+(String)bitRead(TCCR2A, 4)+"     "
+(String)bitRead(TCCR2A, 3)+"     "
+(String)bitRead(TCCR2A, 2)+"     "
+(String)bitRead(TCCR2A, 1)+"     "
+(String)bitRead(TCCR2A, 0)+"\n\n");

Serial.println("TCCR2B: "+(String)TCCR2B);
Serial.println((String)
"FOC2A  " 
+"FOC2B  "
+"   -   "
+"   -   "
+"WGM22 "
+" CS22 "
+" CS21 "
+" CS20 ");
Serial.println(+"   "
+(String)bitRead(TCCR2B, 7)+"      "
+(String)bitRead(TCCR2B, 6)+"      "
+(String)bitRead(TCCR2B, 5)+"      "
+(String)bitRead(TCCR2B, 4)+"     "
+(String)bitRead(TCCR2B, 3)+"     "
+(String)bitRead(TCCR2B, 2)+"     "
+(String)bitRead(TCCR2B, 1)+"     "
+(String)bitRead(TCCR2B, 0)+"\n\n");


}

void loop() {
  // put your main code here, to run repeatedly:

}
