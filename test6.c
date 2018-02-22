#ifdef AAA
int teste3 = 0;
void aa(){

}
#endif

#ifdef BBB
int var = teste3;
#endif

#ifdef CCC
void bb(){
	aa();
	teste3 = 30;
	teste3 = 40;
	teste3 = 50;
	var = 30;
}
#endif

int main(){
	bb();
	var = 10;	
}