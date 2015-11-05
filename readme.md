#Trophy Storage Countdown (C++)
C++ in Xcode terminal project

Reads variable from event.txt, deducts 1 from the number stored, and then writes back the new number in place of the first.

Reads a line (only line) as an int
does some math
puts number back

##Purpose
theCO has a trophy that counts down seconds until date. I was trying to update a stored number in a file (seconds until event date) on an Arduino without installing a RTC chip. The stored number on event.txt would be pulled, updated, and put back. This idea works as long as the device isn't turned off

##Why this route?
Well, originally the the seconds were stored in a variable, but if the Arduino was turned off the seconds would restart. No good.

##Outcome
The Arduino didn't have a SSD. So, I started to look at writing to the EPPROM, to store the remaining seconds, but couldn't get the EPPROM variable to be set to the right remaining number. This repo works in Xcode. I tried to put it in the [Arduino IDE](https://www.arduino.cc/en/Main/Software), but the include header files were such a mess to figure out. I stop here.

EPPROM tut I tried:
https://www.arduino.cc/en/Tutorial/EEPROMWrite

theCO Trophy Arduino event countdown project:
(counts down in seconds for a dramatic effect)
https://github.com/attheCO/trophy-countdown

#Todos
None at the moment. Any suggestions?
