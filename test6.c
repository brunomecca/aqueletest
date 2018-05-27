#define A
#define B
#define C

#ifdef A
int testeA = 10;

int testeA2;
#endif

#ifdef B
int testeB;
int testeB2 = 10;
#endif

int main(){

	testeB = 10;

	testeA2 = testeB + 10;

	testeA = 10 + 10;

	testeA = testeB + testeB2 + testeA;

	int testeLocal = 20;

	testeLocal = testeB + testeB2 + testeA;

	testeA = testeA2 + testeB + testeLocal;

	return 0;
}