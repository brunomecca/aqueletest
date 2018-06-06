#ifdef AA
int areal = 100;
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

#ifdef INSIDE
int *y;
#endif

#ifdef X
int k;
#endif

int main(){
	#ifdef INSIDEMAIN
	#ifdef INSIDEMAIN2
	y = a2;
	#endif
	#endif
	
	#ifdef INSIDE2
	int y2;
	y2 = k;
	#endif

	#ifdef B
	k++;
	#endif
	aa();
	cc(bb());
	int zz = areal + a2;
	a2 = aa() + bb() + cc(b2);
	b2 = areal;
	aa();
	zz = cc(20);
	return 0;

	return 0;
}

#ifdef A_REAL
int x;
#endif

int foo(){
	#ifdef C_REAL
	int a_inside = 10;
	#endif
	#ifdef B_REAL
	x = a_inside;
	#endif
}

