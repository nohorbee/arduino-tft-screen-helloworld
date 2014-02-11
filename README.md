#arduino-tft-screen-helloworld

##About
This app is a kind of working "Hello World" project to test and document the proper usage of the TFT Arduino libraries for controlling LCD.

###Hands On

####1.Connections

This is the connection schema I used for the project:  

* **VCC**: 5V  
* **GND**: Ground  
* **SCL**: Pin 13  
* **SDA**: Pin 12  
* **Res**: 8  
* **CS**: 10  
* **DC**: 9  

You can easily change this connections configuration by wiring it different in your circuit and, of course, changing the code properly.

In this case:

    #define cs   10  
    #define dc   9  
    #define rst  8   

####2. Steps
1. Clone the repository
2. Open ScreenHelloWorld\ScreenHelloWorld.ino with your Android IDE (If you have not installed it, please follow the steps indicated [here](http://arduino.cc/en/Guide/HomePage)).
3. Connect your *Arduino* circuit to the USB.
4. Deploy the program.

####3. What you should see?
A simple animated "ball" moving along the screen.

##Motivation
I've spent more hours than expected trying to make the screen work, basically because of the lack of ***good*** documentation. It turned to be really simple.

##Doesn't Covered
Even though I'm using a TFT with SD card reader, this example doesn't make use of it.  
The example should work with TFT without SD card reader as well.

##Considerations
This app is using the standard TFT library that comes with Arduino SDK. I have also tried other manufacturers' since the screen I'm using is from SaintSmart and the libraries I've downloaded from its page, simple didn't work (at least, not following the documentation).
