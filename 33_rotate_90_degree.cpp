void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
  int row = matrix.size(), col = matrix[0].size();
    for(int i=0; i<row; i++){
        for(int j=0; j<i; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    int i = 0, j = row - 1;
    while(i < j){
        swap(matrix[i],matrix[j]);
        i++;
        j--;
    }
}
