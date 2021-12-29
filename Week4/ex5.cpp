
using namespace std;

void dfs(std::vector< std::list<int> > adj) {
    std::stack<int> S;
    std::vector<bool> visited(adj.size());
    S.push(1); // Bắt đầu từ đỉnh số 1
    while (!S.empty()) {
        int u=S.top();
        if (!visited[u]){
            visited[u] = true;
            std::cout<< u << std::endl;
        }
        if (!adj[u].empty()){
            int v=adj[u].front(); adj[u].pop_front();
            if(!visited[v]){
                S.push(v);
            }
        }else { S.pop();}
    }
}
