#include <iostream>
#include <vector>
using namespace std;
int const N = 1e7+10;
vector<int> graph[N];
bool visited[N], found;
int destination;
void dfs(int vert) {
 visited[vert] = true;
 for (int child : graph[vert]) {
 if (child == destination) found = true;
 if (visited[child]) continue;
 dfs(child);
 }
}
int main() {
 int vertex, edge;
 cout << "Enter the number of vertices in the graph : ";
 cin >> vertex;
 cout << "Enter the number of edges in the graph : ";
 cin >> edge;
 cout << "Enter them serially :\n";
 for (int i = 0; i < edge; ++i) {
 int v1, v2;
 cin >> v1 >> v2;
 graph[v1].push_back(v2);
 graph[v2].push_back(v1);
 }

 int source;
 cout << "Enter the source node and destination : ";
 cin >> source >> destination;
 dfs(source);

 cout << (found ? "true" : "false") << '\n';
 return 0;
}
