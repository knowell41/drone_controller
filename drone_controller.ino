
const int Lrx = A1;
const int Lry = A0;
const int Rrx = A3;
const int Rry = A2;
const int Lbtn = 3;
const int Rbtn = 4;
void setup() {
  pinMode(Lbtn, INPUT_PULLUP);
  pinMode(Rbtn, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  Serial.println(direction_());

}

String direction_() {
  String LbStatus = "";
  String RbStatus = "";
  String LxDir = "";
  String LyDir = "";
  String RxDir = "";
  String RyDir = "";
//  Serial.println("Lrx: " + String(analogRead(Lrx)));
//  Serial.println("Rrx: " + String(analogRead(Rrx)));
//  Serial.println("Lry: " + String(analogRead(Lry)));
//  Serial.println("Rry: " + String(analogRead(Rry)));
  int Lb = digitalRead(Lbtn);
  int Rb = digitalRead(Rbtn);
  int Lx = analogRead(Lrx);
  int Rx = analogRead(Rrx);
  int Ly = analogRead(Lry);
  int Ry = analogRead(Rry);
  
  if(Lx>600) {
    LxDir = "#1";
  }
  else if(Lx<400){
    LxDir = "#0";
  }
  else
  {
    LxDir = "#2";
  }

  if(Ly>600) {
    LyDir = "$1";
  }
  else if(Ly<400){
    LyDir = "$0";
  }
  else
  {
    LyDir = "$2";
  }

 if(Rx>600) {
    RxDir = "%1";
  }
  else if(Rx<400){
    RxDir = "%0";
  }
  else
  {
    RxDir = "%2";
  }

  if(Ry>600) {
    RyDir = "^1";
  }
  else if(Ry<400){
    RyDir = "^0";
  }
  else
  {
    RyDir = "^2";
  }

  
  if(Lb == LOW)
  {
//    Serial.println("Left button pressed");
    LbStatus = "!1";
  }
  else
  {
    LbStatus = "!0";
  }
  if(Rb == LOW)
  {
//    Serial.println("Right button pressed");
    RbStatus = "@1";
  }
  else
  {
    RbStatus = "@0";
  }
  String cmd = LbStatus+RbStatus+LxDir+LyDir+RxDir+RyDir;
  return cmd;
}
