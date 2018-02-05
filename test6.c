#ifdef AAA
int aa(int a){
	printf("teste de função");
	return a+1;
}
const auto short int zzzc = 30;
#endif

void bb(int a, int b){
	aa(a);

}

#ifdef BBB
int main(){
	int a = 400;
	bb(a);	
}
#endif