// C++ code

int temperature = 0;
int myDelay = 250;

void setup()
{
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
}

void loop()
{
    if(temperature < 50 && temperature > 10){

        digitalWrite(6, HIGH);
        delay(myDelay);
        digitalWrite(6, HIGH);
        delay(myDelay);

    }else if(temperature > 50 && temperature < 70){

        digitalWrite(7, HIGH);
        delay(myDelay);
        digitalWrite(7, LOW);
        delay(myDelay);

    }else{

        digitalWrite(8, HIGH);
        delay(myDelay);
        digitalWrite(8, LOW);
        delay(myDelay);

    }
}
