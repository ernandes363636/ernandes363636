//Teste de Sensodo A0
#define led 7 // Porta do led
#define fotodiodo A0 // Porta analógica

void setup() {
   Serial.begin(9600);
   pinMode (led, OUTPUT); //Definição de saida para o LED
   pinMode (fotodiodo, INPUT); // Definição de entrada de dados na porta analógica
   
}

void loop() {
   digitalWrite(led, 1); //Liga o led
   float dadosLidos = analogRead(fotodiodo); //Variável local "dadosLidos" armazena os dados lidos na porta analógica
   Serial.print("Dados lidos: "); //Comando que informa o tipo de informação que vai ser apresentado no monitor serial
   Serial.println(dadosLidos); //Comando que apresenta no monitor serial os dados lidos na porta analógica
    
  if (dadosLidos > 1010.00){ //Condição inicial que compara a tensão de uma amostra de água limpa para que seja exibido a mensagem no monitor serial
      Serial.println("Água limpa da torneira"); //Imprime mensagem no monitor serial
      delay(1000);
  }else{
     if (dadosLidos > 1000.00 && dadosLidos < 1005.40){ //Condição inicial que compara a tensão de uma amostra de água pouco limpa para q seja exibido a mensagem no monitor serial
      Serial.println("Água limpa com 5mL de água com sabão");  //Imprime mensagem no monitor serial
      delay(1000);
  }else{
     if (dadosLidos > 978.00 && dadosLidos < 982.40){ //Condição inicial que compara a tensão de uma amostra de água suaja para que seja exibido a mensagem no monitor serial
     Serial.println("Água limpa com 20mL de água com sabão"); //Imprime mensagem no monitor serial
     delay(1000);
  }else{
     if (dadosLidos > 967.00 && dadosLidos < 977.40){//Condição inicial que compara a tensão de uma amostra de água muito suja seja pra q seja exibido a mensagem no monitor serial
     Serial.println("Água bruta. Somente água e sabão"); //Imprime mensagem no monitor serial
     delay(1000);
     }  
  }
 delay(1000);
} 
}
}
