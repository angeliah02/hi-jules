/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       clairey poo                                               */
/*    Created:      Wed Sep 25 2019                                           */
/*    Description:  i love team c                                             */
/*                                                                            */
/*    Name:   687C                                                            */
/*    Date: 02252022                                                          */
/*    Class:                                                                  */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// leftDrive            motor_group   9, 10           
// rightDrive           motor_group   1, 2            
// barMotor             motor_group   4, 3            
// armMotor             motor_group   7, 8            
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

// A global instance of competition
competition Competition;

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
 
}

void drivercontrol(void){
  while (true){
    int leftDriveSpeed = Controller1.Axis3.position();
    int rightDriveSpeed = Controller1.Axis2.position();

    leftDrive.setVelocity(leftDriveSpeed, percent);
    rightDrive.setVelocity(rightDriveSpeed, percent);
    leftDrive.spin(forward);
    rightDrive.spin(forward);

    }

}

// Main will set up the competition functions and callbacks.


int main() {
  //Set up callbacks for autonomous and driver control periods. 
  Competition.autonomous(autonomous); 
  Competition.drivercontrol(drivercontrol); 

  //Prevent main from exiting with an infinite loop
  while (true) {
    wait(100, msec); 
  }
}
