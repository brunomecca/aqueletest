#ifdef AA
int testeA = 10;

int testeA2;
#endif

#ifdef BB
int testeB;
int testeB2 = 10;
#endif

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
	int k, z, x, c, a, b, j, d;
	k = z = x = c = a = b = j = d = 1;
	testeB = 1;
	testeA = (testeB2 * 10 + (k*z + (x-c)))/testeB + aa(arguTest(aaTogether(aa(b)) + d) + b + d) + b + j + arguTest(10) + d;
}