struct TreeNode{
int Data;
TreeNode *LeftChildPtr, *RightChildPtr;

};

TreeNode* Root=NULL;

void InsertElement(TreeNode* &TempNodePtr,int val);
void Preorder(TreeNode* TempNodePtr);
void Inorder(TreeNode* TempNodePtr);
void Postorder(TreeNode* TempNodePtr);
void BFS(TreeNode* TempNodePtr);
