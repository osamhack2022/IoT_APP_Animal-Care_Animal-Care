#include <SoftwareSerial.h>

SoftwareSerial mySerial(9,10); // RX ! TX
char c; char str[800]; char uuid[78];
int count = 1; int tmp; int p;
int How_start_value(int tmp1); int value; int rssi1; int rssi2;int rssi3;
String beac;
bool state; 
bool ACC_E();

char check_end[5]={'D','I','S','C','E'};
char check_start[7]={'O','K','+','D','I','S','C'};
int a, b, d;
bool is_accurate_e;
bool is_accurate_s;
void findRSSI1();
void findRSSI3();
void findRSSI2();

void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
  Serial.println("Master!!");
  state = false;
}

void loop(){
  if(state == false){
    mySerial.print("AT+DISI?");
    //Serial.println("AT+DISI?");
    state =true;
  }

  if(mySerial.available()){
    String beac = mySerial.readString();
    Serial.println(beac);
    Serial.setTimeout(20);
  }
  findRSSI1();
  findRSSI2();
  findRSSI3();
  state = false;
}

void findRSSI1(){
  for(int i=0; i< 1500; i++){
    if(beac[i]=='7' && beac[i+1]=='6'&& beac[i+2]=='8'&& beac[i+3]=='E'){
      rssi1 = ((beac[i+7]-48)*10) + (beac[i+8]-48);
      rssi1 = rssi1*(-1);
      Serial.print("RSSI1 : ");
      Serial.println(rssi1);
      int a=1;
    }
  }
}
void findRSSI2(){
  for(int j=0; j< 1500; j++){
    if(beac[j]=='7' && beac[j+1]=='1'&& beac[j+2]=='F'&& beac[j+3]=='7'){
      rssi2 = ((beac[j+7]-48)*10) + (beac[j+8]-48);
      rssi2 = rssi2*(-1);
      Serial.print("RSSI2 : ");
      Serial.println(rssi2);
      int b=1;
    }
  }
}
void findRSSI3(){
  for(int o=0; o< 1500; o++){
    if(beac[o]=='6' && beac[o+1]=='9'&& beac[o+2]=='1'&& beac[o+3]=='7'){
      rssi3 = ((beac[o+7]-48)*10) + (beac[o+8]-48);
      rssi3 = rssi3*(-1);
      Serial.print("RSSI3 : ");
      Serial.println(rssi3);
      int d=1;
    }
  }
}
