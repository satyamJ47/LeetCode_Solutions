class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
      int dX = coordinates[1][0] - coordinates[0][0];
    	int dY = coordinates[1][1] - coordinates[0][1];

			int n = coordinates.size();
			for(int i=2;i<n;i++)
			{
				auto p = coordinates[i];
				if(dX*(p[1]-coordinates[0][1])!=dY*(p[0]-coordinates[0][0]))return false;
			}
			return true;	
    }
};
