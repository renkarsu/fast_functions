	int r,c; cin >> r >> c;
	//Take the x-axis downward and the y-axis right
	int sy, sx, gy, gx; cin >> sx >> sy >> gx >> gy;
	//0-origin
	--sx;--sy;--gx;--gy;
	//depth is minimum effort
	int depth{}, x{}, y{};
	tuple<int, int, int> coor(sx, sy, depth);//coordinate
	queue<tuple<int, int, int>> q; q.push(coor);
	vector<string> v(r);
	for(int i = 0, i_len = (int)r; i < i_len; ++i){
		cin >> v[i];
	}
 
	while(!q.empty()){
		auto now = q.front(); q.pop();
		x = get<0>(now); y = get<1>(now), depth = get<2>(now);
 
		if(x == gx && y == gy) cout << depth << endl;;
		
		for(int i = 0, i_len = (int)4; i < i_len; ++i){
			auto next = make_tuple(x+dx[i], y+dy[i], depth+1);
			//Because of 0-origin [0,n-1]. not [1,n]
			if(0 <= get<0>(next) && get<0>(next) <= r-1
		    && 0 <= get<1>(next) && get<1>(next) <= c-1
			&& v[get<0>(next)][get<1>(next)] == '.'){
 
				v[get<0>(next)][get<1>(next)] = 'x';
				q.push(next);
 
			}
		}
	}
