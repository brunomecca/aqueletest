#ifdef AA
int testeA = 10;

int testeA2;
#endif

#ifdef BB
int testeB;
int testeB2 = 10;
#endif

int test = 10;

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
	testeA = aa();
	testeB = bb();
	testeA = aaTogether();

	testeB2 = aaTogether() +  test;
	testeB2 = aaTogether() + aa();

	testeB2 = arguTest(10);

	int local = 10;
	int local2 = 10;
	testeB2 = arguTest(local);

	testeB2 = arguTest(local + local2);

	testeB2 = local + local2 + arguTest(20);

	testeB2 = local + local2 + arguTest(local) + arguTest(local2);
}