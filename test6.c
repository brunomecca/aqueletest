#include "lib/ae.h"
#include "ae/ae2/jo.h"

#ifdef AAA
int teste3 = 0;
int alo = 10;
void aa(){
	int b = 30;
	int xxaa = 100;
	char o = 'b';
}
int hello = 10;
#endif

#ifdef BBB	
int ko = 104;
int aaacx = 30;
#endif

int bb (int);

#ifdef CCC
int bb(int xc){
	alo = 10 + 10;
	aa();
	teste3 = 30;
	ko = 30 + aaacx;
	int lop = 1;
	return lop;
}
#endif

#ifdef FUNC
int cx(){
	alo = alo + 11;
	ko = 100 + bb(20);
	teste3 = 1;
	return 15;
}
#endif

#ifdef JZ
int az(){
	alo = 10;
	teste3 = 1;
	testeTrueTrue = 111;
	return 10;
}
#endif

int main(){
	teste3 = alo + 10;
	bb(20);
	testeTrueTrue = testeTrueTrue2;
	char dd = 'd';
}

int testeTrueTrue = 10;
int testeTrueTrue2 = testeTrueTrue;