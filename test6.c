#ifdef AA
int a = 100;
int a2 = 100;
int aa(){
	return b;
}
#endif

#ifdef BB
int b = 10;
int b2 = 100;
void bb(){
	return 10;
}
#endif

#ifdef CC
int cc(int a){
	return a + 10;
}
#endif

int main(){

	cc(bb());
	int zz = a + a2;
	a2 = aa() + bb() + cc(b2);
	b2 = a;
	aa();
	zz = cc(20);
	return 0;
}