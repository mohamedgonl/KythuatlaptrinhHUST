
using namespace std;

void bfs(vector< list<int> > adj) {
    queue<int> Q;
    vector<bool> visited(adj.size());
    Q.push(1); // Bắt đầu từ đỉnh số 1

    while (!Q.empty()) {
        int u=Q.front();
        if (!visited[u]){
            visited[u] = true;
            std::cout<< u << std::endl;
        }
        if (!adj[u].empty()){
            int v=adj[u].front(); adj[u].pop_front();
            if(!visited[v]){
                Q.push(v);
            }
        }else { Q.pop();}
    }
}
