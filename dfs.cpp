//Take the x-axis downward and the y-axis right
//h = hight, w = width
//Because of void, I don't have to write "return" in the end.
void dfs(int x, int y){
	if(y < 0 || w <= y || x < 0 || h <= x || maze[y][x] == '#') return;
	if(reached[y][x]) return;

	reached[y][x] = true;

//check the 4 ways, but find the new way, immediatry go this way.
//find not experienced way, go there and check around
	dfs(x+1, y);
	dfs(x-1, y);
	dfs(x, y+1);
	dfs(x, y-1);
}
