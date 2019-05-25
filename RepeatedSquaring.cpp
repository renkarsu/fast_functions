int RepeatedSquaring(int n, int p, int m){
	if(p == 0) return 1;
	else if(p&1) return n*RepeatedSquaring(n, p-1, m);
	else{
		int t = RepeatedSquaring(n, p/2, m);
		return t*t % m;
	}
}
