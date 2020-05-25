/*
Project 3 - Part 1a / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) Look at the picture of the car interior (Part1a pic.jpg).  
    Fill in the blanks below which break this car interior down into sub-objects.

    Several sub-objects are listed below that make up this car's interior.
        you're going to name several things that you'll find on each subobject
        you're going to name several things that each subobject can do.
        If you've seen "Family Feud", we are going to do what they do in that show

        A few blanks are filled in for you already.

Main Object: Car Interior
Sub Object 1: Steering Wheel
    Name 4 things you'll find on the:    Steering Wheel
        1) paddle shifters
        2) 'cruise control' controls
        3) stereo controls
        4) horn
    Name 2 things you can do with the:   Steering Wheel
        1) adjust cruise control settings.
        2) turn the car
        
Sub Object 2: Instrument Cluster
    Name 4 things you'll find on the:   Instrument Cluster
        1) speedometer
        2) tachometer
        3) rev meter
        4) fuel level
    Name 3 things you can do with the:   Instrument Cluster
        1) check revs
        2) check speed
        3) check fuel level
    
Sub Object 3: Environment Controls
    Name 3 things you'll find on the:    Environment Controls
        1) temperature
        2) fan speed
        3) front rear balance
    Name 3 things you can do with the:   Environment Controls
        1) adjust temperature
        2) adjust the fan speed
        3) adjust the balance between front and rear tempeatures

Sub Object 4: Infotainment System
    Name 3 things you'll find on the:    Infotainment System
        1) volume control
        2) playlist
        3) on/off
    Name 3 things you can do with the:   Infotainment System
        1) turn it on or off
        2) change the song
        3) adjust the volume

Sub Object 5: Seat 
    Name 3 things you'll find on the:    Seat
        1) seat belt
        2) leather
        3) headrest
    Name 2 things you can do with the:   Seat
        1) adjust the position
        2) adjst the angle
*/
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>

struct House // UDT 1
{
    int numberOfWindows = 20; // Member Variable
    int numberOfDoors = 2; // Member Variable
    float height = 20.5f; // Member Variable
    float width = 40.2f; // Member Variable
    int numberOfFloors = 2; // Member Variable

    void openWindows(bool itsTooHot); // Member Function
    void closeWindows(bool itsTooHot); // Member Function
    void turnOnHeating(bool itsTooCold, float temperature); // Member Function
};


struct Garden // UDT 2
{
    int numberOfPlants = 100; // Member Variable
    bool hasPond = true; // Member Variable
    
    void waterPlants(bool hoseOn, float waterPressure); // Member Function
    void feedFish(float howMuchFood, bool fishAreFull); // Member Function
};


struct Train // UDT 3
{
    struct Carriage // UDT 4 (Nested)
    {
        int length = 100; // Member Variable
        int numberOfSeats = 50; // Member Variable
    };
    
    
    int numberOfCarriages = 12; // Member Variable
    int numberOfPassengers = 127; // Member Variable
    bool isFull = false; // Member Variable
    
    void goToNextStation(int currentStationNumber, int nextStationNumber, int howFast, float distance); // Member Function
};


struct Motorcycle // UDT 5
{
    bool isFast = true; // Member Variable
    bool isCool = true; // Member Variable
    bool riderEgoInflated = true; // Member Variable
    
    void doASweetSkid(float tireTreadLost = 7.2f, bool fellowMotoristsIrritated = true); // Member Function
    void pullAWheely(float frontWheelElevation, bool spouseImpressed); // Member Function
    void revEngineLoudly(int soundPressureLevel, bool childrenAreScared); // Member Function
};


struct Zoo // UDT 6
{
    int numberOfVisitors = 400; // Member Variable
    int numberOfTigers = 37; // Member Variable
    int ticketPrice = 40;
    
    void takePayment(int promotionalDiscount = 20, bool discountApplied = false); // Member Function
    void releaseTigers(bool gateOpen, bool tigersAngry, int fear, int panic); // Member Function
};


struct Aeroplane // UDT 7
{
    int numberOfSeats = 400; // Member Variable
    int numberOfEngines = 4; // Member Variable
    bool pilotCanFly; // Member Variable
    bool enginesWork; // Member Variable
    
    void takeOff(bool permissionGranted, int speed, bool dontCrash); // Member Function
};


struct Sausage // UDT 8
{
    float length = 14.2f; // Memeber Variable
    float diameter = 3.2f; // Memeber Variable
    int tubularity = 3; // Memeber Variable
    bool isCooked = false; // Member Variable
    
    void cook(int howLong, float temperature); // Member Function
};


struct Pig // UDT 9
{
    struct PigsEar // UDT 10 (Nested)
    {
        bool earIsFloppy = true; // Memeber Variable
    };
    
    int roundness = 999; // Member Variable
    float width = 999.0f; // Member Variable
    float snoutLength = 33.3f; // Member Variable
    PigsEar leftEar; // Member Variable of User Defined Type
    PigsEar rightEar; // Member Variable of User Defined Type
    
    
    bool strokeOtherEar(PigsEar previousEar, PigsEar newEar ); // Member Function Using UDT Arguments
    
    void beFriendly(int  lovelinessFactor = 72, bool smellsTastyOats = true); // Member Function
    void trot(int howFar, int howFast); // Member Function
};

int main()
{
    std::cout << "good to go!" << std::endl;
    return 0;    
}


