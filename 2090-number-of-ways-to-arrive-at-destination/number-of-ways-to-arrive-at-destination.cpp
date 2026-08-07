class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>>adj(n);

        for(auto it : roads){
            int u = it[0];
            int v = it[1];
            int w =it[2];

            adj[u].push_back({v,w});
            adj[v].push_back({u,w});   
        }
priority_queue<
pair<long long,int>,
vector<pair<long long,int>>,
greater<pair<long long,int>>
> pq;
        vector<long long> dist1(n,LLONG_MAX);
        vector<int>ways(n,0);
        ways[0] =1;
        dist1[0] = 0;

        pq.push({0,0});
        int mod = (int) (1e9+7);

        while(!pq.empty()){

            auto it = pq.top();
            long long  dist = it.first;
            int node = it.second;
            pq.pop();

            for(auto it : adj[node]){
                int  adjnode = it.first;
                int  d = it.second;

                if(dist + d < dist1[adjnode]){
                    dist1[adjnode] = dist+d;
                    pq.push({dist+d , adjnode});
                    ways[adjnode]= ways[node];
                }

                else if(dist + d == dist1[adjnode]){
                     ways[adjnode] = (ways[adjnode] +ways[node]) %mod;
                }
            }


        }
        return ways[n-1] %mod;

    }
};