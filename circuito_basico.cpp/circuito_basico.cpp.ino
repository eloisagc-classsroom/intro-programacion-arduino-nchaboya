void setup (){
 pinMode(13 , OUTPUT) ; // configura el pin 13 como salida
}
void loop (){
 digitalWrite (13 , HIGH) ;
 delay (1000) ; // Wait for 1000 millisecond (s)
 digitalWrite (13 , LOW) ;
 delay (1000) ; // Wait for 1000 millisecond (s)
}
