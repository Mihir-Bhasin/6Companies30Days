int sol(Node*root, int &count,int x)
    {
        
        	if(!root)
	return 0;
	
	int ls=sol(root->left,count, x);
	int rs=sol(root->right,count, x);
    int sum =ls + rs +root->data;
    
    
    
    if(sum==x)
    count++;
    return sum;
    }

int countSubtreesWithSumX(Node* root, int x)
{
	// Code here
	int count=0;
	if(!root)
	return 0;
	
	int ls=sol(root->left,count, x);
	int rs=sol(root->right,count, x);
    
    
    
    
    if((ls +rs+root->data)==x)
    count++;
    return count;
}
