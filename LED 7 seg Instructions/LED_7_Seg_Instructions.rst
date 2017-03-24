Seg-O-Matic
============

Ever needed to have a large visual numerical display? 

This kit is a series connected large 7 segment LED driver. 

-Note: this kit will require an Arduino or other micro-controller to run.-

*By: Matthew Little*

*Date: 24th March 2017*

*email: hello@curiouselectric.co.uk*

Overview
-------
This kit is a series connected large 7 segment LED driver. 

It can drive a 1.75” (45mm) LED unit (included).

It requires 12V to function.

It is designed to connect to an Arduino or other micro-controller. Example code for the Arduino is available.

A 74HC595 shift register is used along with a UN2003 transistor array.

The decimal point can also be utilised.

-Note: this kit will require an Arduino or other micro-controller to run.-

Kit Contents
------------

.. image:: Instruction_Photos/components2_sm.jpg?raw=true
   :width: 400px
   
This kit contains the following parts:

+------+----------------------+-------------------------------------------------+
| REF  | Description          | Details                                         |
+======+======================+=================================================+
| 7SEG1   | Ultra-Capacitor   | 0.47F Electrolytic                              |
+------+----------------------+-------------------------------------------------+
| C1  | Capacitor             |  100uf Electrolytic De-coupling                 |
+------+----------------------+-------------------------------------------------+
| C2   | Capacitor            |  100nf Polyester De-coupling                    |
+------+----------------------+-------------------------------------------------+
| C3  | Capacitor             |  100nf Polyester. Line termination (if required)|
+------+----------------------+-------------------------------------------------+
| IC1   | Transistor array    |  ULN2003AD IC                                   |
+------+----------------------+-------------------------------------------------+
| R1,R2  | Resistors          |  1k Current limit for Decimal point             |
+------+----------------------+-------------------------------------------------+ 
| R6-12  | Resistors          | 330 For LED current limit segments              |
+------+----------------------+-------------------------------------------------+
| U1 |  Shift Register        |   74HC595                                       |
+------+----------------------+-------------------------------------------------+
| PCB  |  Circuit board       |                                                 |
+------+----------------------+-------------------------------------------------+

This photo shows where each of the components is placed on the PCB.

.. image:: Instruction_Photos/components3_sm.jpg?raw=true
   :width: 400px

Tools Required
--------------
The following tools will be required:

+-----------------+--------------------------+
| Tool            | Description              |
+=================+==========================+
| Soldering Iron  | 25W+ is best             |
+-----------------+--------------------------+
| Solder          | I use lead-free solder   |
+-----------------+--------------------------+
| Side-cutter     | For cutting excess leads |
+-----------------+--------------------------+

.. image:: Instruction_Photos/tools1.png?raw=true
   :width: 400px

A useful guide for learning to solder is available here:

https://cdn.shopify.com/s/files/1/0943/8168/files/soldercomic.pdf

And a more detaileld guide is available here:

https://cdn.shopify.com/s/files/1/0943/8168/files/FullSolderComic_EN.pdf

Step 1: Solder Resistors
------------------------
There are 9 resistors to solder into the areas marked R1, R2 and R6-R12. These control the current into the LEDs and hence their brightness.

Read the colour bands on the resistors or use a multimeter to identify the resistors.

Solder into the relevant places.

Their orientation does not matter.


+---------+---------------+--------------------------+
| REF     | Description   | Details                  |
+=========+===============+==========================+
| R1,R2   | 1k resistor   | Brown-Black-Red-Gold     |
+---------+---------------+--------------------------+
| R6-R12  | 330R resistor |  Orange-Orange-Brown-Gold|
+---------+---------------+--------------------------+

.. image:: Instruction_Photos/PCB1_sm.jpg?raw=true
   :width: 400px

Step 2: Solder Capacitors
------------------------

Identify and then solder in the capacitors. 

Check the orientation of C1. The white line on the side of C1 signifies negative side. 

The round pad on the PCB signifies negative. The longer lead signifies positive. The square pad on the PCB is positive.

To reduce the height of these components, bend over C1 as shown in the photo.

.. image:: Instruction_Photos/PCB2_sm.jpg?raw=true
   :width: 400px


Step 3: Solder the Transistor
------------------------
Check BC548 orientation. This fits into Q1.

.. image:: Instruction_Photos/PCB3_sm.jpg?raw=true
   :width: 400px

Step 4: Solder the 74HC595 shift register
------------------------
To keep the profile low, no IC holders are used in this design. You can add them if you would like to.

Ensure the 74HC595 is fitted into the correct socket.

Ensure the notch on the component lines up with the notch on the circuit board silk-screen.

**DOUBLE CHECK THIS** (if soldering directly in). It will be VERY difficult to change if you get it wrong.

.. image:: Instruction_Photos/PCB4_sm.jpg?raw=true
   :width: 400px

.. image:: Instruction_Photos/PCB5_sm.jpg?raw=true
   :width: 400px

Step 5: Solder the UN2003 transistor array
------------------------
To keep the profile low, no IC holders are used in this design. You can add them if you would like to.

Ensure the UN2003 is fitted into the correct socket.

Ensure the notch on the component lines up with the notch on the circuit board silk-screen.

**DOUBLE CHECK THIS** (if soldering directly in). It will be VERY difficult to change if you get it wrong.

.. image:: Instruction_Photos/PCB6_sm.jpg?raw=true
   :width: 400px

.. image:: Instruction_Photos/PCB7_sm.jpg?raw=true
   :width: 400px

Step 6: Solder on P1 and P2 connectors
------------------------
If you are going to link up a number of these units then you will need to add the INPUT and OUTPUT connectors. These are labelled P1 and P2.

To do this there are 7-way male and female header pins. I place the male in P2 (the output) and the female in P1 (the input).

In order for the connector to lie flat, the male header pins are NOT inserted in the usual way.
Instead we use the longer pins to go into the PCB (see photo).
Solder them in.
The black plastic strip can then be pushed back to expose more of the pins.

Cut off the excess from the pins through the circuit board.

These connectors are only needed if you are putting two or more boards together.

.. image:: Instruction_Photos/PCB8_sm.jpg?raw=true
   :width: 400px

.. image:: Instruction_Photos/PCB9_sm.jpg?raw=true
   :width: 400px
   
.. image:: Instruction_Photos/PCB10_sm.jpg?raw=true
   :width: 400px

Step 7: Solder the LED display
-----------------------------
The LED display is soldered on the reverse (solder) side of the PCB. This makes the whole unit much thinner.

You must ensure the correct orientation of the display.

The decimal point goes towards the bottom right hand corner of the PCB when looking at the solder side. The decimal point is on the end with P1 and P2, the input and output connections.

**DOUBLE CHECK THIS**. It will be **VERY** difficult to change if you get it wrong.

.. image:: Instruction_Photos/PCB11_sm.jpg?raw=true
   :width: 400px
   
.. image:: Instruction_Photos/PCB12_sm.jpg?raw=true
   :width: 400px   
   
Step 8: Build is Finished!
------------------------
Have a nice cup of tea.

Once the device is constructed, the next step is check it powers up OK and then to test with a programmed Arduino....

.. image:: Instruction_Photos/PCB13_sm.jpg?raw=true
   :width: 400px
   
.. image:: Instruction_Photos/InUse1_sm.jpg?raw=true
   :width: 400px

.. image:: Instruction_Photos/InUse2_sm.jpg?raw=true
   :width: 400px
   
.. image:: Instruction_Photos/InUse3_sm.jpg?raw=true
   :width: 400px   

Step 9: Connect to an Arduino
-----------------------------
There are 7 connections to the 7 segment LED boards. Pin 1 is the square pad. The connections are:

Pin 1 →  Serial LATCH   → A3 Arduino
Pin 2 →  Serial CLOCK  → A5 Arduino
Pin 3 →  Serial DATA     → A4 Arduino
Pin 4 →  GROUND         → GND Arduino
Pin 5 →  +5V                  → +5Arduino
Pin 6 →  GROUND
Pin 7 →  +12V 

In the example code for the Arduino, pin 1 (LATCH) is connected to A3, pin 2 (CLOCK) is connected to A5 and pin 3 (DATA) is connected to A4. The Ground and +5 must also be connected.

Step 10: Upload the example sketch 
----------------------------------
Note: These instructions assume you are familiar with the Arduino IDE and uploading Sketches. If not search online for some great tutorials.
This was tested on version 1.02.

Download the example code from www.re-innovation.co.uk.
Add this to your sketches folder.
Open and upload to your Arduino.

This should then run through the various example functions. 
Check the notes within the code for more details.

Step 11: Apply a 12V power supply
---------------------------------
The LED unit requires 12V DC to operate. This is due to the large size of the LED display, with four LEDs in each segment. The required voltage must be 8V or higher. The 330 ohm resistors limit the current from the 12V supply.

Apply 12V to pins 6 (Ground) and 7 (+12V DC). Use an adjustable current limit power supply (if possible) when testing this. If there are any bad connections, check your soldering and orientation of all components.
Note: If using a battery the ALWAYS ensure there is a fuse in the 12V power line.

Step 12: Build your project
---------------------------
Check www.re-innovation.co.uk for some examples of this kit in action.
We would love to hear and see your application and ideas. Please email any photos to info@re-innovation.co.uk, or leave comments.


Going Further
----------------------


Troubleshooting
--------------------


Circuit Schematic
-------------------
.. image:: Instruction_Photos/Schematic.png?raw=true
   :width: 400px

PCB overview
------------
.. image:: Instruction_Photos/SilkScreen.png?raw=true
   :width: 400px

Suppliers Information
----------------------
We would like you to be happy with this kit. If you are not happy for any reason then please contact us and we will help to sort it out.

Please email **hello@curiouselectric.co.uk** with any questions or comments or please tweet us at **@curiouselectric**

If any parts are missing from your kit then please email **hello@curiouselectric.co.uk** with details and, if possible, where the kit was purchased.

More technical information can be found via **www.curiouselectric.co.uk**

The GITHUB repository for all these files is: **https://github.com/curiouselectric/soldersolar**

This kit has been designed and produced by:

.. image:: Instruction_Photos/CuriousElectricCompany_Logo_Round_Logo_sm.png?raw=true
   :width: 400px


..

   The Curious Electric Company
   
   hello@curiouselectric.co.uk
   
   www.curiouselectric.co.uk
   
   Hopkinson,
   
   21 Station Street,
   
   Nottingham,
   
   NG2 3AJ, UK
