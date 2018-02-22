#ifdef AAA
int aa(){
	printf("teste de função");
	return 1;
}
#endif

#ifdef BBB
void bb(){
	aa();
}
#endif

int main(){
	bb();	
}