#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

class MotorControl {
public:
    MotorControl();
    void setPIDGains(double kp, double ki, double kd);
    double calculatePID(double setpoint, double processVariable);
    void setMotorSpeed(double speed);
    void motorBrake();

private:
    double Kp, Ki, Kd;
    double previousError;
    double integral;
};

#endif // MOTOR_CONTROL_H