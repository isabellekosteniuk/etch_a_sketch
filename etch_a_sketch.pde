import processing.serial.*;

Serial myPort;
String val;
int xcoord;
int ycoord;


void setup()
{
 String portName = Serial.list()[1];
 myPort = new Serial(this, portName, 9600);
 size(1500,1500);
 strokeWeight(5);
}

void draw()
{
 if (myPort.available() >0)
 {
  val = myPort.readStringUntil(124);
 
  if (val != null) {
    val = trim(val);
    int inputs[] = int(split(val, ","));
    if(inputs.length == 3) {
      xcoord = inputs[0];
      ycoord = inputs[1];
    
    }
   point(xcoord, ycoord);
  }
 }

}