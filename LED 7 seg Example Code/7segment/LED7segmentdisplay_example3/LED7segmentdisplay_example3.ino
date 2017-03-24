/********************************************************
/****** 7 Segment LED driver board Basic Code 3 *********
/****** by Matt Little **********************************
/****** Date: 5/4/13 ************************************
/****** info@re-innovation.co.uk ************************
/****** www.re-innovation.co.uk *************************
/********************************************************

This example uses the Serial Shift output to control three 7 segment LED displays
Data is shifted out serially and only when all the shift registers are filled does the latch cause
the LED outputs to update.
The LED boards require 12V supply as they contain strings of 4 LEDs.
This example code is for three 7 segment displays wired in series.
The wiring for each board is as follows (P1 and P2):

  Pin 1  ->  Serial LATCH -> A3 on Arduino (in this example)
  Pin 2  ->  Serial CLOCK -> A5 on Arduino (in this example)
  Pin 3  ->  Serial DATA  -> A4 on Arduino (in this example)  
  Pin 4  ->  GROUND       -> GND on Arduino
  Pin 5  ->  +5V          -> +5V on Arduino
  Pin 6  ->  GROUND       -> GND for LED supply
  Pin 7  ->  +12V         -> +12V for LED supply

To connect together serially, connect P1 to P2 of the next unit.
Use a 0.1uF capacitor between Pin 1 (sLATCH) and Pin 4 (GND) to prevent flicker on the display.

see www.re-innovation.co.uk for more details
 
*/

// This is for the serial shifted output data
const int sLatch = A3;   //Pin connected to ST_CP of 74HC595
const int sData = A4;    //Pin connected to DS of 74HC595
const int sClk =  A5;    //Pin connected to SH_CP of 74HC595

long int number1 = 0;  // This will be the displayed data
long int number2 = 0;  // This will be the displayed data
long int number3 = 0;  // This will be the displayed data

void setup()
{
  Serial.begin(9600);    // Set up a serial output for data display and changing parameters

  //set pins to output so you can control the shift register
  pinMode(sLatch, OUTPUT);
  pinMode(sClk, OUTPUT);
  pinMode(sData, OUTPUT);  
}

void loop()
{
  
  for(int i=0;i<999;i++)
  {
    if(i<10)
    {
      number1 = int7segment(i);
      number2 = B00000000;
      number3 = B00000000;
    }
    else if(i<100)
    {
      number1 = int7segment(i%10);
      number2 = int7segment(i/10);
      number3 = B00000000;
    }
    else if(i<1000)
    {
      number1 = int7segment(i-(i/10)*10);
      number2 = int7segment((i/10)%10);
      number3 = int7segment(i/100);
    }
    
    // take the latchPin low so the LEDs don't change while you're sending in bits:
    digitalWrite(sLatch, LOW);
    // shift out the bits:
    // Send data via 3 shift registers:  
    shiftOut(sData, sClk, MSBFIRST, number3);  // Puts out data onto all three digits 
    shiftOut(sData, sClk, MSBFIRST, number2); 
    shiftOut(sData, sClk, MSBFIRST, number1); 
    //take the latch pin high so the LEDs will light up:
    digitalWrite(sLatch, HIGH);
    
    // Put info out onto serial port for testing
    Serial.println(i);
    Serial.println(number1);
    Serial.println(number2);
    Serial.println(number3);
    delay(100);   // Delay for a second
    
  }
}

// This function returns the correct binary value to display the integer
int int7segment (int segmentData)
{
  int displayData;
  
  switch (segmentData)
  {
    case 0:
      displayData = B11111100;  // The number 0 in binary   
    break;
    case 1:
      displayData = B01100000;  // The number 1 in binary   
    break;
    case 2:
      displayData = B11011010;  // The number 2 in binary   
    break;
    case 3:
      displayData = B11110010;  // The number 3 in binary   
    break;
    case 4:
      displayData = B01100110;  // The number 4 in binary   
    break;
    case 5:
      displayData = B10110110;  // The number 5 in binary   
    break;
    case 6:
      displayData = B10111110;  // The number 6 in binary   
    break;
    case 7:
      displayData = B11100000;  // The number 7 in binary   
    break;
    case 8:
      displayData = B11111110;  // The number 8 in binary   
    break;
    case 9:
      displayData = B11110110;  // The number 9 in binary
    break; 
    case 10:
      displayData = B00000001;  // Decimal point ON  
    break;
      
  }
  return displayData;
}
