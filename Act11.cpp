// DESCOMENTAR PUNTOS PARA PROBARLOS, TANTO EN ESTA COMO EN LA OTRA PLACA
/*<------------ PUNTO NUM. 1 ------------>*/
/*void setup(){
  Serial.begin(9600);
}
//Escucha activamente si hay datos que leer
void loop(){
  if (!Serial.available()) {
    //Si no los hay, no hace nada
  }
  else{
    //Si sí los hay, inicializa y hace número el valor
    //del búfer y llama a la función
    uint32_t numAccount = Serial.parseInt();
  	showNumbers(numAccount);
  }
}

//Función que imprime los mensajes con el valor del búfer
void showNumbers(uint32_t numAccount){
  Serial.print("Numero de cuenta en base8: ");
  Serial.println(numAccount, OCT);
  
  Serial.print("Numero de cuenta en base2: ");
  Serial.println(numAccount, BIN);
  
  Serial.print("Numero de cuenta en base10: ");
  Serial.println(numAccount);
  
  Serial.print("Numero de cuenta en base16: ");
  Serial.println(numAccount, HEX);
  Serial.println();
}*/


/*<------------ PUNTO NUM. 2 ------------>*/
/*void setup(){
  Serial.begin(9600);
}

struct Estudiante {
  long unsigned int numeroCuenta;
  char nombreCompleto[50];
  char carrera[50];
  char universidad[50];
  char telefono[17];
  char correo[50];
};

Estudiante estudiantes[] = {
  {20186389, "Samuel Becerra", "Ingenieria de Software", "Universidad de Colima", "312 180 1100", "fbecerra0@ucol.mx"},
  {20201234, "Esteban Cortina", "Ingenieria de Software", "Universidad de Colima", "312 103 2760", "ecortina@ucol.mx"},
  {20221234, "Aplle Gonzalez", "Ingenieria de Software", "Universidad de Colima", "312 134 5124", "jgonzalez@ucol.mx"},
  {20201234, "Porfirio Jaime", "Ingenieria de Software", "Universidad de Colima", "3141072073", "pjaime@ucol.mx"},
  {20231234, "Isaac Ponce", "Ingenieria de Software", "Universidad de Colima", "3120310 6556", "iponce@ucol.mx"}
};

int numEstudiantes = 5;

void buscarEstudiante(long unsigned int numCuenta) {
  for(int i = 0; i < numEstudiantes; i++) {
    if(estudiantes[i].numeroCuenta == numCuenta) {
      Serial.println("Numero de cuenta: " + String(estudiantes[i].numeroCuenta));
      Serial.println("Nombre completo: " + String(estudiantes[i].nombreCompleto));
      Serial.println("Carrera: " + String(estudiantes[i].carrera));
      Serial.println("Universidad: " + String(estudiantes[i].universidad));
      Serial.println("Telefono: " + String(estudiantes[i].telefono));
      Serial.println("Correo: " + String(estudiantes[i].correo));
      Serial.println();
      return;
    }
  }
  Serial.println("No se encontro ningun estudiante con el numero de cuenta " + String(numCuenta));
  Serial.println();
}


void loop() {
  // Esperar a que se reciba un número de cuenta
  while (!Serial.available()) {
    ;
  }

  // Leer el número de cuenta y buscar al estudiante correspondiente
  long unsigned int numCuenta = Serial.parseInt();
  buscarEstudiante(numCuenta);
}*/

/*<------------ PUNTO NUM. 6 ------------>*/
/*<------------ PLACA TRANSMISORA ------------>*/
/*#include <SoftwareSerial.h>
#define TxPin 2
#define RxPin 3

SoftwareSerial transmisor(TxPin,RxPin);

void setup(){
  Serial.begin(9600);
  transmisor.begin(4800);
}

void loop(){
  transmisor.write("Hola desde el transmisor");
  delay(1000);
  if(transmisor.available()){
    String mensajePlaca2 = transmisor.readString();
    Serial.println("Mensaje de receptor recibido: " + mensajePlaca2);
    delay(2000);
  }
}*/

/*<------------ PLACA RECEPTORA ------------>*/
/*#include <SoftwareSerial.h>
#define RxPin 2
#define TxPin 3

SoftwareSerial receptor(TxPin,RxPin);

void setup(){
  Serial.begin(9600);
  receptor.begin(4800);
}

void loop(){
  if(receptor.available()){
    Serial.print("Mensaje de transmisor entrante: ");
    String mensajePlaca1 = receptor.readString();
    Serial.println(mensajePlaca1);
    //delay(1500);
    receptor.write("Hola desde placa 2 \n");
  }
}*/