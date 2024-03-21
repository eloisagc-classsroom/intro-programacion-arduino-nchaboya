int size = 4; // definimos el número de bits
int pin[4] = {0,1,2,3}; // Arreglo para acceder a los pines

// Inicializamos cada uno de los pines a utilizar
void setup()
{
  for (int i = 0; i < size ; i++){
    pinMode(pin[i], OUTPUT);
  }
}
// incializamos el contador con el número máximo
int c = pow(2,4);
void loop()
{
  
  // Con este ciclo, convertimos el número decimal a binario,
  // definiendo los pines que deberán encenderse según
  // el número dado
  float aux = c;
  for (int i = size-1; i >= 0 ; i--){
    if ((aux/pow(2, i)) >= 1){
    	digitalWrite(pin[i], HIGH);
      	aux = aux - pow(2, i);	
  	}
  	else{
      	digitalWrite(pin[i], LOW);
  	}
  }
  
  // Sí se llega a 0, reiniciamos el contador al número más alto
  if(c == 0){
    c = pow(2,4);
  }
  c --; // Decrementamos en 1 el contador
  delay(500); // Esperamos 500 milisegundos
}