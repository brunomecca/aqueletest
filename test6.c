#ifdef AAA
int teste3 = 0;
void aa(){

}
#endif

#ifdef BBB
int ko = teste3;
#endif

#ifdef CCC
void bb(){
	aa();
	teste3 = 30;
	teste3 = 40;
	teste3 = 50;
	ko = 30;
}
#endif

#ifdef FUNC
int cx(){
	return 15;
}
#endif

int main(){
	bb();
	ko = 10;
	ko = cx();
}