class Solution {
private:
    bool dfs(const vector<vector<int>>& graph, vector<int>& color,
             int curr, int currColor) {

        // Traverse all adjacent vertices
        for (int neighbor : graph[curr]) {

            // If neighbor is uncolored, assign opposite color
            if (color[neighbor] == -1) {

                color[neighbor] = 1 - currColor;

                // If conflict is found deeper in DFS
                if (!dfs(graph, color, neighbor, 1 - currColor))
                    return false;
            }

            // Adjacent vertices have same color -> Not Bipartite
            else if (color[neighbor] == currColor) {
                return false;
            }
        }

        return true;
    }

public:
    bool isBipartite(vector<vector<int>>& graph) {

        int n = graph.size();

        // -1 denotes uncolored vertex
        vector<int> color(n, -1);

        // Handle disconnected components
        for (int i = 0; i < n; i++) {

            if (color[i] == -1) {

                // Start DFS with color 0
                color[i] = 0;

                if (!dfs(graph, color, i, 0))
                    return false;
            }
        }

        return true;
    }
};