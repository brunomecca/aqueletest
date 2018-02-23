#ifdef AAA
int teste3 = 0;
void aa(){

}
#endif

#ifdef BBB
int ko = teste3;
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
	ko = cx();
}