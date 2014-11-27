const int A=8;
const int B=9;
const int C=2;
const int D=3;
const int E=4;
const int F=5;
const int G=6;

void setSegment (unsigned int value)
{
	digitalWrite(A, value & (1<<6));
	digitalWrite(B, value & (1<<5));
	digitalWrite(C, value & (1<<4));
	digitalWrite(D, value & (1<<3));
	digitalWrite(E, value & (1<<2));
	digitalWrite(F, value & (1<<1));
	digitalWrite(G, value & (1<<0));
}

void loop()
{
	setSegment (0b1110111);
  	delay(1000);
	setSegment (0b0011111);
	delay(1000);
	setSegment (0b0001110);
	delay(1000);
	setSegment (0b0111110);
	delay(1000);
	setSegment (0b1001111);
	delay(1000);
	setSegment (0b1000111);
	delay(1000);
	setSegment (0b0110000);
	delay(1000);
	setSegment (0b1101110);
	delay(1000);
	setSegment (0b1111010);
	delay(1000);
	setSegment (0b0110011);
	delay(1000);
	setSegment (0b1011011);
	delay(1000);
	setSegment (0b1011111);
	delay(1000);
	setSegment (0b1110000);
	delay(1000);
	setSegment (0b1111111);
	delay(1000);
	setSegment (0b1111011);
	delay(1000);
	setSegment (0b1111101);
	delay(1000);
}

void setup()
{
	pinMode(A, OUTPUT);
	pinMode(B, OUTPUT);
	pinMode(C, OUTPUT);
	pinMode(D, OUTPUT);
	pinMode(E, OUTPUT);
	pinMode(F, OUTPUT);
	pinMode(G, OUTPUT);
}
