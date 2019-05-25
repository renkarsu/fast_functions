\begin{eqnarray}
N^{(20)} &=& \left(N^{(10)}\right)^2\\
         &=& \left(\left(N^{(5)}\right)^2\right)^2\\
         &=& \left(\left(N^{(1)}\times N^{(4)}\right)^2\right)^2\\
         &=& \left(\left(N^{(1)}\times \left(N^{(2)}\right)^2\right)^2\right)^2\\
         &=& \left(\left(N^{(1)}\times \left(\left(N^{(1)}\right)^2\right)^2\right)^2\right)^2\\
\end{eqnarray}

https://latex.codecogs.com/pdf.latex?\begin{eqnarray}&space;N^{(20)}&space;&=&&space;\left(N^{(10)}\right)^2\\&space;&=&&space;\left(\left(N^{(5)}\right)^2\right)^2\\&space;&=&&space;\left(\left(N^{(1)}\times&space;N^{(4)}\right)^2\right)^2\\&space;&=&&space;\left(\left(N^{(1)}\times&space;\left(N^{(2)}\right)^2\right)^2\right)^2\\&space;&=&&space;\left(\left(N^{(1)}\times&space;\left(\left(N^{(1)}\right)^2\right)^2\right)^2\right)^2\\&space;\end{eqnarray}

int RepeatedSquaring(int n, int p, int m){
	if(p == 0) return 1;
	else if(p&1) return n*RepeatedSquaring(n, p-1, m);
	else{
		int t = RepeatedSquaring(n, p/2, m);
		return t*t % m;
	}
}
