#include <Servo.h>
#include <ros.h>
#include <std_msgs/Int32MultiArray.h>

ros::NodeHandle nh;
Servo servo1;
Servo servo2;

int pos1 = 0;
int pos2 = 0;

void messageCb(const std_msgs::Int32MultiArray& centre) {

  int x = centre.data[0];
  int y = centre.data[1];
  int len=sizeof(centre.data);

//  for(int i=0;i<5;i++){
//  char buffer[20] = "printing 5 times";
//  nh.loginfo(buffer);}
  pos1 = constrain(pos1, 0, 180);
  pos2 = constrain(pos2, 0, 180);

  if (x > 130) {
    //    pos1=+10;
    servo1.write(pos1++);
    //    char buffer[10] = "move right";
    //    nh.loginfo(buffer);
    //    if (x <= 130)
    //    break;
  }
  if (x < -20) {
    servo1.write(pos1--);
    //    char buffer[10] = "move left";
    //    nh.loginfo(buffer);
  }
  if (y > -95) {
    servo2.write(pos2++);
    delayMicroseconds(200);
    char buffer[10] = "move dowm";
    nh.loginfo(buffer);
  }
  if (y < -40) {  //-78,-75 pe ball centre pe hai
    servo2.write(pos2--);
    delayMicroseconds(200);
    char buffer[10] = "move up";
    nh.loginfo(buffer);

    //  char x1 = centre.data[0];
    //  nh.loginfo(x); //cannot print integers

    //    while (x > 400 || y > 400 || x < -400 || y < -400) {
    //
    //      if (x > 400) {
    //        servo1.write(pos1++);
    //        char buffer[20] = "move left";
    //        nh.loginfo(buffer);
    //      }
    //      if (y > 400) {
    //        servo2.write(pos2++);
    //        char buffer[20] = "move up";
    //        nh.loginfo(buffer);
    //      }
    //      if (x < -400) {
    //        servo1.write(pos1--);
    //        char buffer[20] = "move right";
    //        nh.loginfo(buffer);
    //
    //      }
    //      if (y < -400) {
    //        servo2.write(pos2--);
    //        char buffer[20] = "move down";
    //        nh.loginfo(buffer);
    //
    //      }
    //    }
    //    Serial.print(pos1);
    //    Serial.print("   ");
    //    Serial.println(pos2);
  }
}
ros::Subscriber<std_msgs::Int32MultiArray> sub("centre", &messageCb );

void setup()
{
  nh.getHardware()->setBaud(57600);
  //  pinMode(9, OUTPUT);
  //    pinMode(10, OUTPUT);
  nh.initNode();
  nh.subscribe(sub);
  servo1.attach(9);
  servo2.attach(10);
  //  servo1.write(0);
  //  servo2.write(83);
  //  Serial.begin(9600);
}

void loop()
{
  nh.spinOnce();
  delay(1);
}
