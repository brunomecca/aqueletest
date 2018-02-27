#ifdef AAA
int teste3 = 0;
void aa(){

}
int hello = 10;
#endif

#ifdef BBB
int ko = 104;
int aaacx = 30;
#endif

#ifdef CCC
void bb(){
	aa();
	teste3 = 30;
	ko = 30 + aaacx;
}
#endif

#ifdef FUNC
int cx(){
	ko = 100;
	return 15;
}
#endif

int main(){
	bb();
	testeTrueTrue = testeTrueTrue2;
}

int testeTrueTrue = 10;
int testeTrueTrue2 = testeTrueTrue;