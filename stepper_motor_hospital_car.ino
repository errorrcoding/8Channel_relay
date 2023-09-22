#include <Stepper.h>

#include <string.h>
#include <vector>
#include <WiFi.h>
#include <WebServer.h>
#include <WiFiClient.h> 
#include <MFRC522.h>
String status="down";

struct Command
{
    String name;
    float priority;
};
// Define the number of steps per revolution for your stepper motor
const int STEPS_PER_REVOLUTION = 200;
const char *ssid = "";
const char *password = "";

// Create Stepper objects for each motor
Stepper stepper1(STEPS_PER_REVOLUTION, 0, 2); // Motor 1: Steps (0), Direction (2) bl
Stepper stepper2(STEPS_PER_REVOLUTION, 16, 4); // Motor 2: Steps (16), Direction (4) fr
Stepper stepper3(STEPS_PER_REVOLUTION, 5, 17); // Motor 3: Steps (5), Direction (17)br
Stepper stepper4(STEPS_PER_REVOLUTION,14,12); // Motor 4: Steps (14), Direction (12) fl
Stepper stepper5(STEPS_PER_REVOLUTION,27 ,26);// TR vending machine
Stepper stepper6(STEPS_PER_REVOLUTION,19 ,18);//BL vending machine
Stepper stepper7(STEPS_PER_REVOLUTION,23 ,22);//TL  vending machine
Stepper stepper8(STEPS_PER_REVOLUTION,32,21);  //BR vending machine
Stepper stepper9(STEPS_PER_REVOLUTION,15,25);  //الرافعة

int i=0;
int j=0;
int x=0;
float desiredDistance=0;
const float wheelRadius = 0.75;                                         // Radius of the wheels in centimeters
const float wheelCircumference = 2 * (22/7.0) * wheelRadius;                 // Circumference of the wheel
const float distancePerStep = wheelCircumference / STEPS_PER_REVOLUTION; // Distance traveled per step
const int stepsPerRevolution=200;
int stepsX;
int stepsY;
std::vector<Command> myVector;
String firstElement;
WebServer server(80);

void toMiddle(){


 if(status=="down"){
for(int i=0;i<3;i++){
  stepper9.step(-800);  
    
  }
  status="middle";
}

if(status=="up"){
 for(int i=0;i<8;i++){
                for(int j=0;j<800;j++){
         stepper9.step(1);
         if(i>=6)
         delayMicroseconds(400);

                }

              
    
                }
status="middle";

}


}

void dropItemA(){

  stepper7.step(800); 
}
void loadItemA(){
    stepper7.step(-800); 
}
void dropItemB(){
   stepper5.step(800);
}
void loadItemB(){
   stepper5.step(-800);
}
void dropItemC(){
stepper6.step(800);
}
void loadItmeC(){
stepper6.step(-800);
}
void dropItemD(){
stepper8.step(-800);
}
void loadItemD(){
stepper8.step(800);
}

int cheackTime(){
int count=0;
for(int i=0;i<5;i++){
if (Serial.available()) {
  char com = Serial.read();
if(com=='C'){
goDown();
dropItemC();
return counter;

}
if(com=='D'){
goDown();
dropItemD();
return counter;
}
if(com=='A'){

dropItemA();
return counter;

}
if(com=='B'){
  dropItemB();
  return counter;
}
delay(1000);
count++;



}




}
return counter;

}
int isRegistered(){

  return true;
}

void reverseCar90Left(){



for( x=0;x<28;x++){

for( i=0;i<50;i++)
{
  if(x==27 &&i==6){
    break;
  }

    if (Serial.available()) {
    char co = Serial.read();

    // Process the received command

      if (co == 'B') {
          Serial.println("x value");
          Serial.println(x);
          Serial.println("i :value");
          Serial.println(i);
          Serial.println("J value");
          Serial.println(j);
 
    }


    // Add more commands as needed

    // Add a small delay to avoid flooding the Serial communication
  }

 stepper1.step(0);//bl

  stepper2.step(1);//fr

  stepper3.step(1);//br

  stepper4.step(0);//fl
  
}

  

 



for(j=0;j<50;j++)
{
  if(x==27&&j==6){
    break;
  }

  if (Serial.available()) {
    char com = Serial.read();



      if (com == 'B') {
          Serial.println("x value");
          Serial.println(x);
          Serial.println("i :value");
          Serial.println(i);
          Serial.println("J value");
          Serial.println(j);
        
        



    }
    // Add more commands as needed

    // Add a small delay to avoid flooding the Serial communication
  }
  stepper2.step(0);//fr

  stepper4.step(1);//fl

  stepper1.step(1);//bl

  stepper3.step(0);//br
}
}


}


void moveBack(int steps){


  desiredDistance = steps;
   stepsX = int(desiredDistance / distancePerStep);
   stepsY = int(desiredDistance / distancePerStep);
   stepsY--;
  for(int i=0;i<stepsY;i++)
{
  stepper1.step(1);//bl

  stepper2.step(-1);//fr

  stepper3.step(-1);//br

  stepper4.step(1);//fl
  

}


}
void executeCommand()
{

    if (!myVector.empty())
    {
     server.handleClient();

      delay(3000);
        server.handleClient();
        firstElement = myVector.front().name;
         myVector.erase(myVector.begin());
        if(firstElement=="room1"){
          reverseCar180();
          moveForward(90);
          reverseCar90Right();
          moveBack(6);
          moveForward(100);
         
        }
    else if(firstElement=="room2"){
    reverseCar180();
    moveForward(90);
    reverseCar90Left();
    moveBack(6);
    moveForward(90);
       }


         Serial.print(firstElement);
        Serial.println(":served");
       

    }


}
bool compareCommands(const Command &cmd1, const Command &cmd2)
{
    return cmd1.priority > cmd2.priority;
}
 


void HTTP_handleRoot() {
  server.send(200, "text/plain", "Hello, ESP32!");
}



void handleState() {
  if (server.hasArg("State") && server.hasArg("P")) {
    String room = server.arg("State");
    float pri = server.arg("P").toFloat();
    // Serial.print("Room: ");
    // Serial.println(room);
    // Serial.print("Priority: ");
    // Serial.println(pri); 
    if(room=="room1"){
 Command a;
        a.name = "room1";
        a.priority = pri;
        myVector.push_back(a);
        std::sort(myVector.begin(), myVector.end(), compareCommands);
    }
    else if(room=="room2"){
     Command a;
        a.name = "room2";
        a.priority = pri;
        myVector.push_back(a);
        std::sort(myVector.begin(), myVector.end(), compareCommands);
    }
    else if(room="room3"){
       Command a;
        a.name = "room3";
        a.priority = pri;
        myVector.push_back(a);
        std::sort(myVector.begin(), myVector.end(), compareCommands);
    }

   
  }
  server.send(200, "text/plain", "OK");
}




void setup() {
  Serial.begin(115200);
  // Set the speed for each motor in steps per second (adjust as needed)
  int motorSpeed = 255; // Adjust the value as needed
  
  // Set the motor speed for each stepper motor
  stepper1.setSpeed(motorSpeed);
  stepper2.setSpeed(motorSpeed);
  stepper3.setSpeed(motorSpeed);
  stepper4.setSpeed(motorSpeed);
  stepper5.setSpeed(120);
  stepper6.setSpeed(120);
  stepper7.setSpeed(120);
  stepper8.setSpeed(120);
  stepper9.setSpeed(1000);
  
//wifi
 
 WiFi.begin(ssid, password);
 

while (WiFi.status() != WL_CONNECTED) {
  
  delay(100); //500
  Serial.println(".");
}

Serial.println("");
Serial.println("Wifi Connected");
Serial.println("Server started ");

Serial.println(WiFi.localIP()); 

 
  server.on("/", handleState);
  server.begin();
}


  // Calculate the number of steps needed to rotate the car 180 degrees (2 revolutions)
void reverseCar180(){



for( x=0;x<58;x++){

for( i=0;i<50;i++)
{
  if(x==57 &&i==6){
    break;
  }

    if (Serial.available()) {
    char co = Serial.read();

    // Process the received command

      if (co == 'B') {
          Serial.println("x value");
          Serial.println(x);
          Serial.println("i :value");
          Serial.println(i);
          Serial.println("J value");
          Serial.println(j);
        
        



    }


    // Add more commands as needed

    // Add a small delay to avoid flooding the Serial communication
  }

 stepper1.step(-1);//bl

  stepper2.step(0);//fr

  stepper3.step(0);//br

  stepper4.step(-1);//fl
  
}

  

 



for(j=0;j<50;j++)
{
  if(x==57&&j==6){
    break;
  }

  if (Serial.available()) {
    char com = Serial.read();



      if (com == 'B') {
          Serial.println("x value");
          Serial.println(x);
          Serial.println("i :value");
          Serial.println(i);
          Serial.println("J value");
          Serial.println(j);
        
        



    }
    // Add more commands as needed

    // Add a small delay to avoid flooding the Serial communication
  }
  stepper2.step(-1);//fr

  stepper4.step(0);//fl

  stepper1.step(0);//bl

  stepper3.step(-1);//br
}
}


}

void reverseCar90Right(){



for( x=0;x<28;x++){

for( i=0;i<50;i++)
{
  if(x==27 &&i==6){
    break;
  }

    if (Serial.available()) {
    char co = Serial.read();

    // Process the received command

      if (co == 'B') {
          Serial.println("x value");
          Serial.println(x);
          Serial.println("i :value");
          Serial.println(i);
          Serial.println("J value");
          Serial.println(j);
        
        



    }


    // Add more commands as needed

    // Add a small delay to avoid flooding the Serial communication
  }

 stepper1.step(-1);//bl

  stepper2.step(0);//fr

  stepper3.step(0);//br

  stepper4.step(-1);//fl
  
}

  

 



for(j=0;j<50;j++)
{
  if(x==27&&j==6){
    break;
  }

  if (Serial.available()) {
    char com = Serial.read();



      if (com == 'B') {
          Serial.println("x value");
          Serial.println(x);
          Serial.println("i :value");
          Serial.println(i);
          Serial.println("J value");
          Serial.println(j);
        
        



    }
    // Add more commands as needed

    // Add a small delay to avoid flooding the Serial communication
  }
  stepper2.step(-1);//fr

  stepper4.step(0);//fl

  stepper1.step(0);//bl

  stepper3.step(-1);//br
}
}


}

void moveForward(int steps){


  desiredDistance = steps;
   stepsX = int(desiredDistance / distancePerStep);
   stepsY = int(desiredDistance / distancePerStep);
   stepsY--;
  for(int i=0;i<stepsY;i++)
{
  stepper1.step(-1);//bl

  stepper2.step(1);//fr

  stepper3.step(1);//brF


  stepper4.step(-1);//fl
  

}


}





void moveRight(){

for(int a=0;a<48;a++)
for( i=0;i<50;i++)
{




  stepper1.step(-1);//bl

  stepper2.step(0);//fr

  stepper3.step(0);//br

  stepper4.step(-1);//fl



}
}



void moveLeft(){

for(int a=0;a<12;a++)
for( i=0;i<200;i++)
{




  stepper1.step(0);//bl

  stepper2.step(1);//fr

  stepper3.step(1);//br

  stepper4.step(0);//fl



}
}

void goDown(){
 if(status=="up"){

   for(int i=0;i<11;i++){
                for(int j=0;j<800;j++){
         stepper9.step(1);
         if(i>=9)
         delayMicroseconds(400);

                }

              
    
                }
                status="down";
                }
     if(status=="middle"){
   for(int i=0;i<3;i++){
                for(int j=0;j<800;j++){
         stepper9.step(1);
         if(i>=1)
         delayMicroseconds(400);

                }

              
    
                }
                status="down";

     }
              
               


}


void goUp(){


                  // desiredDistance = 100;
                // stepsX = int(desiredDistance / distancePerStep);
                // stepsY = int(desiredDistance / distancePerStep);
                // moveForward(stepsY);
                //                 Serial.println("B");
                // stepper6.step(800);


if(status=="down")
{
  for(int i=0;i<11;i++){
  stepper9.step(-800);  
                
}
    status="up";                  
}
if(status=="middle"){
  for(int i=0;i<8;i++){
  stepper9.step(-800);  
                
}
    status="up";   

}

        
}


void loop() {


// move forward
// for(int i=0;i<200;i++)
// {
  
// x++;

//   stepper1.step(-1);//bl

//   stepper2.step(1);//fr

//   stepper3.step(1);//br

//   stepper4.step(-1);//fl
  

// }

// }




// //  move left

// for(int i=0;i<200;i++)
// {
// x++;

//   stepper1.step(0);//bl

//   stepper2.step(1);//fr

//   stepper3.step(1);//br

//   stepper4.step(0);//fl
  

// }

//  move right
// for( i=0;i<50;i++)
// {




//   stepper1.step(-1);//bl

//   stepper2.step(0);//fr

//   stepper3.step(0);//br

//   stepper4.step(-1);//fl



// }


if (Serial.available()) {
    char command = Serial.read();

    if (command == 'i') {

     goDown();
             
              
    }
    

if (command == 'u') {
      
  goUp();


    }

if(command=='M'){
toMiddle();


}

 if (command == 'A') {
                // desiredDistance = 100;
                // stepsX = int(desiredDistance / distancePerStep);
                // stepsY = int(desiredDistance / distancePerStep);
                // moveForward(stepsY);
                //                 Serial.println("B");
               
  toMiddle();              
dropItemA();
 int count=cheackTime();
 if(count==5){
   goUp();
 }

    }

    if (command == 'a') {
                // desiredDistance = 100;
                // stepsX = int(desiredDistance / distancePerStep);
                // stepsY = int(desiredDistance / distancePerStep);
                // moveForward(stepsY);
                //                 Serial.println("B");
               
loadItemA();


    }
    if (command == 'B') {

  toMiddle();
 dropItemB();
 int count=cheackTime();
 if(count==5){
   goUp();
 }  
  }
        if (command == 'b') {
loadItemB();

    // Add more commands as needed

    // Add a small delay to avoid flooding the Serial communication
  }

       if (command == 'C') {
                // desiredDistance = 100;
                // stepsX = int(desiredDistance / distancePerStep);
                // stepsY = int(desiredDistance / distancePerStep);
                // moveForward(stepsY);
                //                 Serial.println("B");


  goDown();
  dropItemC();
  int count=cheackTime();
 if(count==5){
   goUp();
 }  
        


    }
    
       if (command == 'c') {
                // desiredDistance = 100;
                // stepsX = int(desiredDistance / distancePerStep);
                // stepsY = int(desiredDistance / distancePerStep);
                // moveForward(stepsY);
                //                 Serial.println("B");
                
      loadItmeC();

    }
    if (command == 'D') {
                // desiredDistance = 100;
                // stepsX = int(desiredDistance / distancePerStep);
                // stepsY = int(desiredDistance / distancePerStep);
                // moveForward(stepsY);
                //                 Serial.println("B");
    goDown();  
  dropItemD();
 int count=cheackTime();
 if(count==5){
   goUp();
 }  


    }
          if (command == 'd') {
                // desiredDistance = 100;
                // stepsX = int(desiredDistance / distancePerStep);
                // stepsY = int(desiredDistance / distancePerStep);
                // moveForward(stepsY);
                //                 Serial.println("B");
               loadItemD();


    }



}
}

      







     


  //   server.handleClient();

  // executeCommand();










   // Process the received commandt