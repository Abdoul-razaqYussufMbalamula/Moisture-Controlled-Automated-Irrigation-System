/*
 Project Name: MOISTURE CONTROLLED AUTOMATED IRRIGATION SYSTEM 
 Revision Date: 02/01/2022
 Arthur: ABDOUL-RAZAQ YUSSUF MBALAMULA
 //------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 Purpose: The device is developed to serve as an alternative for implementing an effective irrigation system. The system works by informing farmers when watering plants,
 when to start and when to stop, so as not to waste water.
 //------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 System Input: Soil Moisture Sensors - To measure the moisture level in the soil
 System Output: LEDs - To indicate when the water is enough or not 
 //------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 System Work: The moisture detection process is carried out by placing the moisture sensors in their respective parts of the soil. The sensors are set to give feedback
              to a certain level of moisture, depending on how much water is needed for the particular soil or plant. During the watering process, once the required amount
              is reached, the LED of that particular sensor will be activated.
 //------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 */

 //DEFINITIONS
int led1 = 4;     //Indicating the LED 1 is connected to Digital Pin 4
int led2 = 5;    //Indicating that the LED 2 is connected to Digital Pin 5

// THE CODE SETUP
void setup() {
  
pinMode(led1, OUTPUT);    //LED 1 is defined as an output
pinMode(led2, OUTPUT);    //LED 2 is defined as an output
Serial.begin(9600);       // initialize serial communication at 9600 bits per second

}


// THE MAIN CODE
void loop() {

int sensorValue1 = analogRead(A1);   //reads the input on Analog Pin 1

if (sensorValue1 >=600 && sensorValue1 <=800){  //If the moisture level reaches the value between 600-800, the LED 1 will be activated
Serial.println(sensorValue1);
    digitalWrite(led1, LOW);  //LED 1 is OFF
  }
  else {
Serial.println(sensorValue1);
    digitalWrite(led1, HIGH);  //LED 1 is ON
   
  }
 
int sensorValue2 = analogRead(A2); //reads the input on Analog Pin 2


if (sensorValue2 >=600 && sensorValue2 <=800){   //If the moisture level reaches the value between 400-600 the LED 2 will be activated
Serial.println(sensorValue2);                    //Lower values means the moisture is high
    digitalWrite(led2, LOW);  //LED 2 is OFF
  }
  else {
Serial.println(sensorValue2);
    digitalWrite(led2, HIGH);  //LED 2 is ON
  } 
delay(1000);    //delays for 1 second before turning the LED ON or OFF
}
