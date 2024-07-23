//int arr[]=[1,2,3,4]
//or
//vector<int> arr={1,2,3,4}
//A vector in which all value are vector type
//int a[];
//int b[];
//int c[];
//int arr[3][3]{1,2,3},{4,5,6},{7,8,9}
//Collection of the vector is known as 2D array
//vector<vector<int>v1={{1,2,3},{4,5,6},{7,8,9}}
//v1[0][2]
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int total = 0; // Initialize total perimeter
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                if (grid[i][j] == 1) {
                    // Check the left side
                    if (j == 0 || grid[i][j-1] == 0) {
                        total++;
                    }
                    // Check the right side
                    if (j == grid[i].size() - 1 || grid[i][j+1] == 0) {
                        total++;
                    }
                    // Check the top side
                    if (i == 0 || grid[i-1][j] == 0) {
                        total++;
                    }
                    // Check the bottom side
                    if (i == grid.size() - 1 || grid[i+1][j] == 0) {
                        total++;
                    }
                }
            }
        }
        
        return total; 
    }
};
