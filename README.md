# PhotonStack
A bunch of stacked shields for the Particle Photon.
Assembly video: https://www.youtube.com/watch?v=XreFps8lWMY
## Materials
1. 3x7 cm protoboard
2. 2 4x6 cm protoboard
3. 0.1" female headers
4. 0.1" male headers
5. 2 0.1" jumpers
6. Sparkfun OpenLog
7. µSD card
8. Hookup wire (~30 AWG)
9. Particle Photon
## Tools
1. Soldering iron
2. Tweezers
3. Wire stripper
4. Wire Cutter
5. Helping hands or other gripper
## Construction
### OpenLog Shield
1. Cut two lengths of female header 12 units long
2. Cut two lengths of male header 12 units long
3. Cut two lengths of male header 2 units long
4. Cut one length of male header 6 units long
5. Cut one length of female header 6 units long
6. Put the two 12-unit lengths of female header on the Photon
7. Solder the female headers in place on the 3x7 cm protoboard as in the image
8. Solder the 6-unit female header on the OpenLog
9. Put the 6-unit male header in the female header on the OpenLog
10. Place the OpenLog unit in place two rows below the Photon on the board as in the image
11. Solder the 6-unit male pins in place on the bottom of the board
12. Place the two 2-unit male headers in place according to the image and solder in place
13. Connect one of the 2-units to the TX pin of the Photon using hookup wire
14. Connect the other of the 2-units to the RX pin of the Photon using hookup wire
15. Connect the opposite side of the TX 2-unit to the RXI pin of the OpenLog
16. Connect the opposite side of the RX 2-unit to the TXO pin of the OpenLog
17. Connect the VCC pin of the OpenLog to the 3V3 pin of the Photon
18. Connect the GND pin of the OpenLog to the one of the GND pins of the Photon
19. Put the jumpers in place on the TX and RX connection pins
20. Remove the Photon from its socket
21. Place one of the 12-unit male headers in next to the bottom of the 12-unit female header
22. Solder all pins of the 12-unit male header in place on the top of the board
23. Use the tweezers to pry the black connecting strip to the end, but not off, of the pins
24. Bridge solder all pins to the female 12-unit header
25. Repeat the previous four steps for the other half of the socket
### Analog and Digital Shields
1. Cut two lengths of female header 12 units long
2. Cut two lengths of male header 12 units long
3. Cut eight lengths of male header 3 units long 
4. Put the two 12-unit lengths of female header on the Photon
5. Solder the female headers in place on the 4x6 cm protoboard as in the image
6. Remove the Photon from its socket
7. Place one of the 12-unit male headers in next to the bottom of the 12-unit female header
8. Solder all pins of the 12-unit male header in place on the top of the board
9. Use the tweezers to pry the black connecting strip to the end, but not off, of the pins
10. Bridge solder all pins to the female 12-unit header
11. Repeat the previous four steps for the other half of the socket
12. Place the eight 3-units aligned to the bottom left of the 12-unit for an analog board, and to the bottom right of the 12-unit for a digital board (as in the image)
13. Solder bridge each inside pin of the 3-units to its respective pin
14. Bend a male pin or a piece of hookup wire to connect the outside row of pins to the GND pin and solder it in place
15. Solder bridge all of the pins in the ground row
16. Solder a piece of hookup wire to the 3V3 pin and to the nearest middle pin of the 3-units
17. Solder bridge all of the pins in the power row
