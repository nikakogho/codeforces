    #include <bits/stdc++.h>
    using namespace std;
     
    #define a array
     
    const int N=2e3;
    int n, m, r, c, x, y, answer, nb[4][2]={{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
    string g[N];
    int costs[N][N];
    vector<a<int, 2>> spots[2];
    bool reached[N][N];
     
    int main() {
    	ios_base::sync_with_stdio(0);
    	cin.tie(0);
    	
    	cin >> n >> m >> r >> c >> x >> y, --r, --c;
    	for(int i=0; i<n; ++i)
    		cin >> g[i];
    	memset(costs, 1, sizeof(costs));
    	costs[r][c]=0;
    	spots[0].push_back({r, c});
    	while(spots[0].size()) {
    		for(int i=0; i<spots[0].size(); ++i) {
    			auto u=spots[0][i];
    			if(reached[u[0]][u[1]])
    				continue;
    			reached[u[0]][u[1]]=1;
    //			cout << u[0] << " " << u[1] << " " << d[u[0]][u[1]] << endl;
    			if(costs[u[0]][u[1]]>x||u[1]-c+costs[u[0]][u[1]]>y)
    				continue;
    			++answer;
    			for(int j=0; j<4; ++j) {
    				int ni=u[0]+nb[j][0], nj=u[1]+nb[j][1], nd=costs[u[0]][u[1]]+!j;
    				if(ni>=0&&ni<n&&nj>=0&&nj<m&&g[ni][nj]=='.'&&nd<costs[ni][nj]) {
    					costs[ni][nj]=nd;
    					spots[!j].push_back({ni, nj});
    				}
    			}
    		}
    		spots[0]=spots[1];
    		spots[1].clear();
    	}
    	cout << answer;
    }
