# Laser Security System for Farmers using Arduino and GSM

## Project Overview

This project presents a low-cost laser based security system designed to protect agricultural fields from animals and intruders. The system uses a laser beam aligned with an LDR sensor to form a virtual security boundary. When the beam is interrupted, the Arduino Uno detects the change and activates an alarm while sending SMS and call alerts to the farmer using a GSM module.

## Objectives

* Protect crops from animals and unauthorized entry
* Provide real-time intrusion alerts to farmers
* Implement a low-cost embedded security solution

## Components Used

* Arduino Uno
* GSM Module (SIM900 / SIM800)
* LDR Sensor
* Laser Module
* Buzzer
* Breadboard and connecting wires
* Power supply

## Working Principle

1. A laser beam is continuously aligned with an LDR sensor.
2. The LDR monitors the intensity of the laser light.
3. If an object interrupts the beam, the LDR resistance changes.
4. Arduino detects this change in voltage.
5. The system activates a buzzer alarm and sends SMS/call alerts through the GSM module.

## Practical Prototype Testing

The prototype was developed and tested to verify the intrusion detection system. During testing, the laser beam was directed toward the LDR sensor to create a security boundary. When the beam was interrupted, the system successfully triggered both local buzzer alerts and remote GSM notifications.

## Field Testing Video

Watch the practical testing demonstration here:
https://drive.google.com/file/d/1GpRvIws9QPuYOpkc5pPfM8FleZjuOQDc/view?usp=drivesdk

## Applications

* Agricultural field protection
* Farm boundary monitoring
* Intrusion detection systems
* Smart agriculture solutions

## Future Improvements

* Integration with IoT platforms for remote monitoring
* Solar power supply for outdoor deployment
* Mobile application for real-time alerts

## Author

Developed as an Embedded Systems project using Arduino and GSM communication technology.
