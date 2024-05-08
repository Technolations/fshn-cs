void interesi (float kapitali)
{
	//Banka jep interesat ne varesi te shumes qe keni depozituar,
	//Shkr nje program qe shfaq vitet, interesin dhe shumen e mbledhur
	//Deri kur interesi te behet 1000
	//Interesi = 3.5%
	int viti = 1;
	while (kapitali <= 1000) {
		kapitali = kapitali + kapitali*0.035;
		printf("Viti: %d Kapitali aktual: %f\n", viti, kapitali);
		viti++;
		}
}

void fibonaci (int max)
{
	//Shfaq serite e fibonacit deri ne nje kufize te dhene nga perdorusi
	//0,1,1,2,3,5,8,13
	int x1 = 0;
	int x2 = 1;
	int x3;
	int i = 3;
	printf("%d\n", x1);
	printf("%d\n", x2);
	while (i <= max)
	{
		x3 = x2 + x1;
		printf("%d\n", x3);
		x1 = x2;
		x2 = x3;
		i++;
	}
}

int prodhimi (int x1, int x2){
	//prodhimin e dy numrave pa perdorur shumezimin
	int i = 1;
	int p = 0;
	do {
	p = p + x1;
	i++;
	} while(i<=x2);
	return p;
}