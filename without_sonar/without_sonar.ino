

int leftMotor[] = {10, 11};
int rightMotor[] = {5, 6};

//Here we have created two 'objects', one for the servo and one for the ultrasonic senso

//Below we are creating unsigned integer variables which we will use later on in the code. They are unsigned as they will only have pos

void setup()                                            //This block happens once on startup
{
  Serial.begin(9600); 
   for (int i = 0; i < 2; i++){
        pinMode(leftMotor[i], OUTPUT);
        pinMode(rightMotor[i], OUTPUT);
   }//I have included the serial initialize but commented it out, if you want to debug and print information to the serial monitor just uncomment
  
  //Here we are setting the pin modes. As we will sending out signals from the pins we set them as outputs
                                   //The servo is attached to pin 9
}
void setMotors(int l, int r)
{
    if (l >= 0 && r >= 0)
    {
        analogWrite(leftMotor[0], l);
        digitalWrite(leftMotor[1], LOW);
        analogWrite(rightMotor[0], r);
        digitalWrite(rightMotor[1], LOW);
    }

    else if (l < 0 && r < 0)
    {
        r = -r;
        l = -l;
        digitalWrite(leftMotor[0], LOW);
        analogWrite(leftMotor[1], l);
        digitalWrite(rightMotor[0], LOW);
        analogWrite(rightMotor[1], r);
    }

    else if (l > 0 && r < 0)
    {
        analogWrite(leftMotor[0], l);
        digitalWrite(leftMotor[1], LOW);
        digitalWrite(rightMotor[0], LOW);
        analogWrite(rightMotor[1], r);
    }

    else if (l < 0 && r > 0)
    {
        digitalWrite(leftMotor[0], LOW);
        analogWrite(leftMotor[1], l);
        analogWrite(rightMotor[0], r);
        digitalWrite(rightMotor[1], LOW);
    }

    else
    {
        digitalWrite(leftMotor[0], LOW);
        digitalWrite(leftMotor[1], LOW);
        digitalWrite(rightMotor[0], LOW);
        digitalWrite(rightMotor[1], LOW);
    }
}
void loop()                                           //This block repeats itself while the Arduino is turned on
{

 setMotors(-200,-200);
//  delay(2000);
//  setMotors(0,150);
//  delay(2000);
// setMotors(150,0);
//  delay(2000);
// setMotors(-150,-150);
//  delay(2000);
 
}

