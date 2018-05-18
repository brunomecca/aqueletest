#ifdef DEFF
int f(){
	return 10;
}
#endif

#ifdef C
void a(){
	#ifdef A
	int v = f();
	#endif
	f();
}
#endif