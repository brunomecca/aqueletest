#ifdef AA
int testeA = 10;

int testeA2;
#endif

#ifdef BB
int testeB;
int testeB2 = 10;
#endif

int bb(){
	return testeA;
}

int aa(){
	return 10;
}

int aaTogether(){
	return 10;
}

int arguTest(int a){
	return a + 10;
}

int main(){
	int teste = arguTest(arguTest(aa()));
}