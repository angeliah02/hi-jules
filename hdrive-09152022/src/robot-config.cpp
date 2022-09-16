#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor leftDriveMotorA = motor(PORT9, ratio18_1, true);
motor leftDriveMotorB = motor(PORT10, ratio18_1, true);
motor_group leftDrive = motor_group(leftDriveMotorA, leftDriveMotorB);
motor rightDriveMotorA = motor(PORT1, ratio18_1, false);
motor rightDriveMotorB = motor(PORT2, ratio18_1, false);
motor_group rightDrive = motor_group(rightDriveMotorA, rightDriveMotorB);
motor barMotorMotorA = motor(PORT4, ratio36_1, true);
motor barMotorMotorB = motor(PORT3, ratio36_1, false);
motor_group barMotor = motor_group(barMotorMotorA, barMotorMotorB);
motor armMotorMotorA = motor(PORT7, ratio36_1, false);
motor armMotorMotorB = motor(PORT8, ratio36_1, false);
motor_group armMotor = motor_group(armMotorMotorA, armMotorMotorB);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}