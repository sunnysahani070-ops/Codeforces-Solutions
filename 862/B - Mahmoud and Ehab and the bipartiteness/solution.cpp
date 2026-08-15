#include <iostream>
#include <vector>
 
using namespace std;
 
// Adjacency list to represent the tree
vector<vector<int>> adj;
// Array to keep track of the count of nodes in each bipartite set
long long cnt[2];
 
// DFS to color the graph and count nodes in each set
void dfs(int node, int parent, int color) {
    cnt[color]++; // Increment the count for the current color
    
    for (int neighbor : adj[node]) {
        if (neighbor != parent) {
            // Visit neighbors with the opposite color (1 - color)
            dfs(neighbor, node, 1 - color);
        }
    }
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
 
    adj.resize(n + 1);
    
    // Read the n - 1 edges
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    // Start DFS from node 1, parent 0, and initial color 0
    dfs(1, 0, 0);
 
    // Calculate the maximum possible edges in the bipartite graph
    long long max_possible_edges = cnt[0] * cnt[1];
    
    // The answer is the maximum possible edges minus the existing edges (n - 1)
    long long answer = max_possible_edges - (n - 1);
 
    cout << answer << "
";
 
    return 0;
}