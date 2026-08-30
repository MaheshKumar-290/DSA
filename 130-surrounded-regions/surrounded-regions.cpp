class Solution {
public:
    void solve(vector<vector<char>>& board) {

        int n = board.size();
        int m = board[0].size();

        queue<pair<int, int>> qu;

        vector<vector<int>> visited(n, vector<int>(m, -1));

        for (int j = 0; j < m ; j++) {

            if (board[0][j] == 'O') {
                qu.push({0, j});
                visited[0][j] = 1;
            }
            
        }

        for (int j = 0; j < m; j++) {

            if (board[n-1][j] == 'O') {
                qu.push({n-1, j});
                visited[n-1][j] = 1;
            }
        }

        for (int j = 1; j < n; j++) {

            if (board[j][m-1] == 'O') {
                qu.push({j, m-1});
                visited[j][m-1] = 1;
            }
        }

        for (int j = 1; j < n; j++) {

            if (board[j][0] == 'O') {
                qu.push({j, 0});
                visited[j][0] = 1;
            }
        }

        while (!qu.empty()) {

            pair<int, int> node = qu.front();
            qu.pop();

            int r = node.first;
            int c = node.second;

            int row[] = {0, -1, 0, 1};
            int col[] = {1, 0, -1, 0};

            for (int i = 0; i < 4; i++) {

                int x = r + row[i];
                int y = c + col[i];

                if (x > -1 && x < n && y > -1 && y < m && visited[x][y] == -1 &&
                    board[x][y] == 'O') {

                    qu.push({x, y});
                    visited[x][y] = 1;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (visited[i][j] == -1) {

                    board[i][j] = 'X';
                }
            }
        }

       // return board;
    }
};