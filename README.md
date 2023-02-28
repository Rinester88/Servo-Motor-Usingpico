# Servo-Motor-Using pico and MQTT 

## Description 
MQTT (Message Queuing Telemetry Transport) is a lightweight messaging protocol that is commonly used in IoT (Internet of Things) applications. MQTT allows devices to publish and subscribe to messages on a broker, which acts as a message hub for the system.

To use a servo motor with a Raspberry Pi Pico and MQTT, you will need to connect the servo motor to the Pico's GPIO pins, as described in my previous answer. You will also need to set up an MQTT broker and client on the Raspberry Pi Pico.

To use a servo motor with a Raspberry Pi Pico, you will need to connect the servo motor to the Pico's GPIO pins. The servo motor typically has three wires: power, ground, and signal. The power and ground wires are connected to the Pico's 5V and GND pins, respectively. The signal wire is connected to one of the Pico's PWM (pulse-width modulation) pins.

## Components Required
![image](https://user-images.githubusercontent.com/111410933/221851568-1dfdd9f7-a120-4a78-ab7e-92e8145ba1cb.png)
W5500-EVB-Pico is a microcontroller evaluation board based on the Raspberry Pi RP2040 and fully hardwired TCP/IP controller W5500 – and basically works the same as Raspberry Pi Pico board but with additional Ethernet via W5500.

![image](https://user-images.githubusercontent.com/111410933/221851773-00299ac2-cdeb-4794-a7f2-239a3a4b7f87.png)
Servomotor is a rotary actuator or linear actuator that allows for precise control of angular or linear position, velocity and acceleration. It consists of a suitable motor coupled to a sensor for position feedback.

![image](https://user-images.githubusercontent.com/111410933/221851888-dcf54f80-c817-4390-af81-fe1721f7459f.png)
A jumper wire is an electric wire that connects remote electric circuits used for printed circuit boards. By attaching a jumper wire on the circuit, it can be short-circuited and short-cut (jump) to the electric circuit.

# Circuit Diagram
![image](https://user-images.githubusercontent.com/111410933/221853283-9815608e-8aa9-4570-99ed-f0f328c79bd7.png)


To connect the servo motor to the Wiznet W5100, you will need to connect the wire (usually orange or yellow) of the servo motor to one of the PWM pins on the W5100. You will also need to connect the ground wire (usually brown or black) of the servo motor to the ground pin on the W5100.

You can then use a suitable library or code to control the servo motor using the PWM pin. The exact code or library you use will depend on your specific microcontroller or development board, as well as the programming language you are using.
