// Example from the NoU3 documentation! 
// https://alfredo-nou3.readthedocs.io/robot_programming_tutorial_Pesto_Link.html

#include <Alfredo_NoU3.h>
#include <PestoLink-Receive.h>

NoU_Motor leftMotor(1);
NoU_Motor rightMotor(2);
NoU_Servo basketServo(1);

NoU_Drivetrain drivetrain(&leftMotor, &rightMotor);

void setup() {
    NoU3.begin();
    PestoLink.begin("Name me!"); // Change this name before uploading!
}

void loop() {
    float rotation = 0;
    float throttle = 0;

    // Set the throttle of the robot based on what key is pressed
    rotation = -1 * PestoLink.getAxis(0);
    throttle =  1 * PestoLink.getAxis(1);

    // Make the robot drive
    drivetrain.arcadeDrive(throttle, rotation);

    // Control the servo
    if (PestoLink.buttonHeld(0)) {
        basketServo.write(180);
    }
    else {
        basketServo.write(0);
    }
}
