# Final Project Online Design File

Group members:
* Anastasia Myers
* Lauren Shackleford
* Rebecca Stacy

Date: 4/16/2024

## Summary

The purpose of this project was to create a functional claw machine. As a group, we worked to decide what functions to include in our project. We concluded that our claw machine should have the following functions: A functional claw, user control over the claw, a mechanism to sense "coin" placement to play the game, and a structure to house the game. The result of this project was a small functional claw machine. This project was completed over several steps, the first step was to create the box that was housing the game. The next step was to create the gantry system as well as the claw, this led to coding each aspect in Arduino IDE (claw movement, drop, and closing). Followed by the integration of our code into an app and the addition of the "coin" sensor to signal the game to start.

During this project, we were also introduced to "scrum". Scrum is commonly used in settings where groups are working on a large project together. Scrum encourages communication and frequent project updates between team members which in turn can increase the efficiency of teamwork. As a result, we were able to practice efficient communication as a team. Being able to communicate interpersonally is an important skill for many jobs, so practicing it now was a valuable experience.

Project Video Description: [BAE 305 Final Project - Claw Machine](https://www.youtube.com/watch?v=2Kz2KVocflk)

## Design Description

### Box

#### Equipment
- 6 x 1/8" 11.5 x 23.5" Plywood
- 3 X 1/8" 12 x 12" Clear acrylic sheets
- Wood glue
- Epilog laser cutter
- Adobe Illustrator

#### Procedure

1. The files to laser-cut the required pieces for this build have been included in this repository. We created the files for this part of the project using Adobe Illustrator. There are a few small pieces included in this build so be mindful.
2. After cutting all the pieces, begin assembling by gluing supports to each wall of the box, followed by carefully gluing the walls of the machine to the base of the machine. The support pieces will aid in keeping the walls upright as the glue dries and will also serve as a resting point for the floor of the game.

|![IMAGE](https://github.com/Perc312/BAE305-SP24-Project/blob/main/Gluing2.jpg)|
|:---:|
| *Figure 1.* Box assembly procedure|
3. Glue the floor of the game together this involves creating small walls around the toy drop area and the hole where the wires are strung from the base to the gantry system. You can also glue the chute for the toy drop together and then glue it within the box. Do not glue the floor of the game down because you will need to remove it to work on circuitry that is stored below the floor.

|![IMAGE](https://github.com/Perc312/BAE305-SP24-Project/blob/main/FloorGlue.jpg)|
|:---:|
| *Figure 2.* Box assembly procedure|
|![IMAGE](https://github.com/Perc312/BAE305-SP24-Project/blob/main/ToyDrop.jpg)|
| *Figure 3.* Box assembly procedure|

4. Glue the supports for the acrylic sheet into the corners of the box. After these finish drying, slide the acrylic sheets into the supports, the bottom of the sheet will rest on the floor of the game as well. The sheets of acrylic and the floor of the game will remain unfixed so it is easy to open the mechanism up.



### Claw

#### Equipment
- 1/8" Plywood
- Servo motor
- Bolts and nuts
- Wood glue
- Epilog laser cutter
- Adobe Illustrator
- Empty bobbin
- String
- 1 motor

#### Procedure

1. The files to laser-cut the required pieces for this build have been included in this repository as well. We created the files for this part of the project using Adobe Illustrator. The files used to create the claw were inspired by designs found online. 
2. After cutting all the pieces, the servo motor should snap into the wood pieces, there are holes included to secure the two pieces to each other. Secure the two pieces together using a bolt and two nuts
3. Glue the end pieces of the claw onto the claw pieces, this increases the thickness of where the claw grips making it easier to grab things.
4. Add the gear pieces to the servo motor, they should be interlocking. This is done by first gluing a servo piece to the gear with the larger hole, followed by securing this gear to the servo motor. Afterward, use hardware to gently secure the other gear to the first gear. The two gears should be interlocked so when one moves the other moves as well. Ensure that the gears are in the closed position when doing this to make the process easier. 
5. Glue the empty bobbin onto one spoke of another motor so it spins like a wheel when the motor is on. Glue one end of a 20in length of string onto the bobbin so the string will wind around it when the motor spins. 
7. Attach the other end of the string to the claw so that the claw hangs evenly and is not tilted. 
6. Once the gantry section is complete, attach this motor with the claw attached below the bottom motor of the gantry (shown below).

|![image](https://github.com/Perc312/BAE305-SP24-Project/assets/156240511/70e9d909-c3cd-474b-b39b-4113b09d1071)|
|:---:|
| *Figure 4.* Gantry|

### Gantry

#### Equipment
- 4 x 12" long, 0.25" diameter aluminum rods
- Sliders
- 3 x Motors 
- Cardboard
- Rubber bands
- Glue
- Cardboard
- 1/8" plywood
- scotch tape

#### Procedure

1. Cut one 3in by 10in strip of cardboard, four 3in by 1in strips of cardboard, and one 3in by 3in square of cardboard. 
2. Cut notches 2 inches apart into two of the 3x1in strips (shown below).

|![image](https://github.com/Perc312/BAE305-SP24-Project/assets/156240511/d1379599-dae8-4c38-bb2e-3324241431d5)|
|:---:|
| *Figure 5.* Gantry assembly procedure|


3. Glue two sliders onto the 3x10in strip of cardboard 2 inches apart such that the aluminum tubes can be slid through perpendicular to the cardboard's long edge. 
4. Flip the strip over so the sliders are on the bottom. Glue the two notched 3x1in strips upright on either side of the 10in edge of the 3x10in strip (shown below). 

|![image](https://github.com/Perc312/BAE305-SP24-Project/assets/156240511/2fa5d70e-4c92-4aaf-a994-7d1ee640d097)|
|:---:|
| *Figure 6.* Gantry assembly procedure|


5. Glue two sliders onto the 3x3in cardboard square 2 inches apart. Slide two more aluminum rods through the sliders. 
6. Make sure the cardboard square can slide freely along the aluminum tubes. Glue each tube into the notches cut into the 3x1in strips so the sliders are facing down towards the long strip, and the tubes are parallel to each other and to the long side of the 3x10 in strip.
7. Once dry, flip the strip over and attach one motor in between the first set of sliders glued to the bottom of the long strip so the motor is parallel with the first set of rods and sliders. 
8. Once dry, flip the strip back over and attach a second motor onto the 3x3in square so it is parallel with the second set of rods and sliders. 
9. Glue the remaining two 3x1in cardboard strips vertically between the second set of rods so they stick up above them.
10. Poke a hole in each of these strips directly across from each other. Feed one rubber band through each hole and tie on each end so the rubber band is taught. The rubber band should go directly across one spoke of the second motor without touching the body of the motor. 
11. Wrap the rubber band around the spoke of the motor one time
12. Make a small disc out of scotch tape or any lightweight material to glue to the end of the spoke of the motor so the rubber band does not fall off. 
13. Cut two 3in by 4in rectangles of plywood with two 0.3in diameter holes drilled in the top 2 inches apart, and one 0.15in diameter hole drilled in between them (shown below).
 
|![image](https://github.com/Perc312/BAE305-SP24-Project/assets/156240511/67c97481-730e-4d5c-94cf-3d4ab6c4cebe)|
|:---:|
| *Figure 7.* Gantry assembly procedure|

14. Glue these rectangles onto the top of the box across from each other so the holes align such that the first set of rods can be inserted into them. The apparatus should be inserted so that the long cardboard strip is on top and the cardboard square hangs below.  
15. Repeat steps 10, 11, and 12 using the motor glued to the long strip and the smaller hole in each wood rectangle to thread the rubber band through. 
16. Stabilize as needed, final design shown below:

|![image](https://github.com/Perc312/BAE305-SP24-Project/assets/156240511/9f1d7088-e3f0-487f-accd-e3c19898f681)|
|:---:|
| *Figure 8.* Final gantry assembly|

### Wiring

#### Equipment
- 2 x Arduino red boards
- 2 X Dual TB6612FNG, H-bridge motor driver
- Line sensor
- Various wires (boy, and girl)

#### Procedure

This project used two arduinos, both of which were wired similarly to the diagram below, but the switch is not included in either circuit. For the first arduino, wire the circuit according to the diagram below for both motors. Also incorporate a line sensor and connect it to a digital pin, ground, and the voltage source; make sure that the wiring matches the labels on the sensor. For the second arduino, wire the circuit according to the diagram below for only one motor. Add a servo motor by connecting it to a PWM digital pin (via the attached white wire), ground (black wire), and voltage (red wire). Finally, connect the arduinos by connecting a digital pin in arduino 1 to a digital pin in arduino 2; we used pin 4 in arduino 1 and pin 2 in arduino 2. Also connect both the arduinos through ground.

|![image](https://github.com/Perc312/BAE305-SP24-Project/assets/156240511/3749d7ac-d0b7-4b3c-b662-f8eac3dc506e)|
|:-:|
|*Figure 9.* Wiring diagram|


### Code 

#### Equipment
- Arduino IDE

#### Procedure
The codes for the claw machine were built partially based off of codes from our prior labs which utilized the motors. Additions were made to account for the communication between the two arduinos, to use the line sensor to detect a coin, and to move a servo to open and close the claw. The final working codes are included in the depository files. Claw1 code runs the first arduino, which is connected the line sensor and X and Y axis motors (gantry) and also communicates to the second arduino and the app. ClawMachine2 code runs the second arduino which controls the Z axis motor and the servo motor for operating the claw. Make sure that the pins used in the code match with the actual circuit in order for the system to run properly.

### App

#### Equipment
- MIT App inventor
- LG G7 Phone

#### Procedure

1. Create a serial, a clock, six buttons, and two labels in the designer tab of MIT app inventor. Format the buttons and labels in the user interface as desired. The user resulting user interface is shown below.

|![image](https://github.com/Perc312/BAE305-SP24-Project/blob/main/ClawMachineUserInterface.png)|
|:-:|
|*Figure 10.* App user interface|

2. Use the blocks shown in Figure 10 to ensure that the app runs when it receives communication from the arduino, labels display that communication is received from the arduino, and all the buttons control the claw machine appropriately. In the blocks below, "CommsStatus" and "LabelDataArduino" are the names of the labels, and the names of the buttons are "Open_Serial," "Left," "Right," "Forward," "Backward," and "Drop_Claw." The serial and clock are called "Serial1" and "ReadFromArduino," respectively.

|![image](https://github.com/Perc312/BAE305-SP24-Project/blob/main/ClawMachineAppBlocks.png)|
|:-:|
|*Figure 11.* Blocks used to build app|




## Testing Description

### Box 

The only properties of the box that required testing were physical capabilities. This was tested after the glue had finished drying. We casually tested our physical capabilities by applying pressure in different areas. 

### Claw 

Test procedures for the claw included creating several claws physically.  

Our first claw was 3D printed, we tested this claw by wiring it and having it physically open and close. From this short test, we determined that the width this claw opened was too small to reliably grab objects in our game. So, we created a claw with greater grip strength and mobility. 

The second claw was provided to us by Dr. Jarro. We were unable to use this claw because it was difficult to incorporate a servo motor into it. 

Finally, we created a third claw. To test its capabilities, we wired it and coded it to open and close. This claw had the ability to fully open which is what we were looking for. This was done using Arduino IDE and a red board. 

When assembling the system, we needed to test how far the claw needed to drop, this was done by adjusting the motor parameters to ensure that when the claw dropped it did not collide with the floor of the game. Another parameter we needed to test with the claw before adding it to the system was how far the claw would open and close, as well as what the servo considered to be "home." Both of these were done using trial and error.

### Gantry

To make sure the gantry functioned properly, we had to test that the motor was powerful enough to pull the whole system along the rods, that the bearings could slide easily over the rods, and that the motor could move in a straight line along the rubber band from one end of the box to the other in both the x and y directions. 

To ensure that the system could meet these requirements, we tested these features continuously as we were building it. The most challenging part was keeping both sets of rods and bearings perfectly straight at any points where they were glued down. Otherwise, the motors could not slide on them. Our tests showed that connecting the gantry to the box affected how the rods were positioned, and we therefore settled on a design that allowed us to remove the gantry from the box and adjust it if needed. 

We tested each motor on its own before testing them together by isolating the part of the code that ran the motors. We then tested them again once the gantry had been incorporated into the box and attached to the claw so we could see how the added weight would affect their function. This test also showed whether the motors could stay on track along the rubber bands, and move smoothly across the rods. 

### Wiring, Code, & App 

To test our wiring capabilities, we connected each component individually and operated them one at a time. For the motors in the gantry, this involved determining if moving them created movement along the rubber band. As well as testing the claw drop capabilities, if the motor did its job. We used the same process for the claw’s servo motor. 

Dr. Jarro assisted us with the line sensor. To determine what would trigger the beginning of the game we tested what would and wouldn’t trigger the line sensor. This was done by utilizing a modified blink code to ensure that the sensor would detect the coin.  

To sum up our testing procedure we worked with each component individually prior to incorporating them into our full system. This made it clear immediately if a single component would have an issue with the entire system. The codes used to test individual are included as files in this repository. For testing:
 - Use motorspeeds code to check the motors
 - Use servomotortest code to check the servo
 - Use linesensortest code to check the sensor
 - Use DataToAppTest to check communication between the app and arduino

For our coding approach, our testing procedure could be described as trial and error. If we attached a component and it did not work with the code we problem solved until the component properly worked. 

### Entire system

To test the entire system we also used a trial and error approach. To test the functionality of the system we went ahead and attempted to use it and if parts had issues working we worked to find the issue and correct it. 

The functionality that we looked for in the entire system was a working gantry, a working claw drop button, a claw that closed on time, and that the claw would return to the toy drop area before opening.

Most importantly we wanted to make sure it was possible to win the game. 

## Design Decision Discussion

### Box 

When making the box we decided to use a laser cutter to cut the pieces out, this meant we also had to use Adobe Illustrator to create the design files for the box. Laser cutting was chosen because it provides precise and accurate cuts at a high speed.  

Before creating the boxes design, we decided on a few key components. The box had to have area for a gantry, and we also wanted it to be easy to take apart and reassemble so it would be easy to work on the wiring for the project. To begin, we decided on the size of the box. We wanted the product to be medium so there was enough space inside the box to wire the mechanism. Afterward we decided on window size, and placement. When choosing the placement of the windows we chose to have a 2-inch cover on the top of the box to help hide electronics from the users. 

One of the most important design components was the supports on the inside of the box. These supports are used to hold up the game floor without gluing it to the box. It was also necessary to include any holes in the design when laser cutting. The holes included in the design are for the toy drop, the line sensor, and a hole in the back for the wiring of the Arduinos. This design also hides most of the circuitry, helping it look cleaner than if the circuits were visible in the final design. We also cut a hole in the floor to string the wiring through, this was so we could wire it from the base to the top of the box where the gantry is located.  

To secure the pieces of the box together, we chose to use glue instead of hardware because wood glue provides a strong bond. This decision caused the box's construction to take longer because it was necessary to hold the pieces in place while the box dried. 
 
### Claw 

To design the claw, we wanted to use what we already had to reduce costs. What we had on hand was a mini servo which was included in our spark fun kits, we also had access to various hardware pieces, and scrap wood. The necessary function for a claw is to open and close on command so this worked with the servo motor.  

We chose to use a gear system for the claws opening and closing mechanism. This is because with gears if we move one gear then the other gear will move as well, allowing the claw to open and close with one gear.  

Apart from the fact that the servo motor was available to us, servo motors are also efficient and are capable of operating with high efficiency. This was attractive to use with a claw where we wanted to design how far to open and close it. Servo motors are also relatively easy to code in comparison to some other motors. 

### Gantry 

As the gantry was the most mechanically complicated part of this project, we looked at a lot of different designs from different creators online. Most designs required pretty specialized materials that we did not have the budget for, so we were limited in our design options. For our first attempt, we used the laser cutter to cut out wooden wheels to glue to the motor, and wooden tracks for them to "drive" across. However, this design was unstable and we had difficulty keeping the motors on track and supporting the weight of the claw. Therefore, we switched to a design from Liberman on YouTube that used rods with bearings, rubber bands, and cardboard. After building an initial test of this design, it was clear that it would be much more stable and effective than our first design.

In this design, there are two motors, one for movement in the x direction, and one for movement in the y direction. The motors are anchored to bearings which can slide freely along two sets of metal rods. The rubber bands act as tracks that the motors follow as they spin, pulling the entire apparatus in whichever way either motor is spinning. One issue we had with this design was that once the claw was attached, it was harder for the mechanism to slide along the rods, so we added some lubricant to solve this issue. 

### Wiring 

Before creating our wiring system, we decided on what was necessary to include to create a functioning system. We concluded that we needed to use three brush motors. Two motors were used to create movement along the gantry system, one motor was used to control the claw drop. We also needed to wire the servo motor which was used to open and close the claw. Finally, we added a line sensor to help trigger the beginning of the game.  

Because of these requirements, we needed to use two breadboards for this project. This was because one breadboard did not have enough pins to run more than two motors. Because we used two Arduinos, we had to work to connect them so they could communicate. 

Physically we hid the Arduinos underneath the game's flooring to give the project a cleaner look. We wired the gantry through a small hole in the floor of the game.  

### Code and app 

We decided to use an app for this project to avoid creating a physical control system. A physical control system would have involved creating a controller for claw movement, and this would have been more difficult than using code to control the motors. We were also familiar with coding motor movement because we used this skill for a few of our labs. Similarly, we used MIT app inventor to create our app because it had been introduced to us in lab.

In addition to the Open Serial button, which starts serial communication between the app and the arduino, our app included five buttons including forward, backward, right, left, and drop. Each button controlled the claw's position. The buttons we chose to include in our app were relatively simple, this was to create a clean interface and prevent confusion on the user's end. There is also a label which will turn green if the serial is open and red if the serial is not open.

## Test Results Discussion

### System capabilities

### Box

- The box houses both Arduinos.
- The box can be disassembled to work on internal wiring.
- The box can withstand minor physical forces.

#### Claw

- The claw is capable of dropping down to the floor and grabbing objects placed on the floor.
- The claw opens and closes once dropped.

#### Gantry

- The gantry can move the claw to any coordinate inside the box.
- The gantry supports the claw.

#### Wiring

- The system can operate with two Arduinos

#### Code & App

- The user is able to move the claw back and forth, left and right


### System limitations 

#### Box

- The dimensions are not quite exact, some of the corners look uneven, this is only an aesthetic problem.
- The box is quite small, so the user does not have much space to move the claw around. 

#### Claw

- The claw is limited in how wide the mouth can open, limiting the size of objects it can grab.
- The string supporting the claw is not directly centered, so the claw is slightly lopsided. 

#### Gantry

- The movement of the motors in the gantry is jerky.
- The gantry can only move the claw either left or right or back and forth; it can not go diagonally.
- This design is not very durable. 

#### Wiring

- The wiring for the machine must be physically connected to the Arduino
- It was necessary to use two Arduinos instead of conforming to one Arduino

#### Code & App

- The user can only move the claw around at certain increments each time they press the button, making dexterity difficult.

## Testing Results

### Claw opening

When the "Drop Claw" button is pressed on the app, the servo on the claw opens, then the unravels the string for a set amount of time, then the servo closes the claw, and the motor rewinds the string to bring the claw back up while closed. 

The result of testing the claw opening was that it worked best when it was open 12 degrees to closes at 1o degrees.

### Claw drop depth

We found to drop the claw it had to go down about 5.5 inches which required the motor to be turned for 1.1 seconds during the drop duration and 1.25 seconds for the rise back up.

### Gantry motor turn length

To move along the gantry we used a system where the system would move along the gantry in increments of one second. We also found that moving the claw four times was about the width of the entire system.

### Full system compatibility

The entire system works together and we were able to play and win our game.
