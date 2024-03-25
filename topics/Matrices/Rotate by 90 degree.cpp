Code valid for only Square Matrices:

--> Anticlockwise Rotation:
void rotateanticlockwise(vector<vector<int>>& matrix) 
{ 
    int n=matrix.size();
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<i;j++)
	   swap(matrix[i][j],matrix[j][i]);
    }
	
    for(int i=0;i<n/2;i++)
    	swap(matrix[i],matrix[n-1-i]);
} 


--> Clockwise Rotation:
void rotateclockwise(vector<vector<int>>& matrix) 
{
    int n=matrix.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
	   swap(matrix[i][j],matrix[j][i]);
    }
	
    for(int i=0;i<n;i++)
        reverse(matrix[i].begin(),matrix[i].end());   
}
