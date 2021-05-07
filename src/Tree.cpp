#include <iostream>
#include <queue>
#include "../include/tree.h"

using namespace std;


void InsertElement(TreeNode* &TempNodePtr,int value)
 {
     if (!TempNodePtr)
     {
         TempNodePtr= new TreeNode;
         TempNodePtr->Data = value;
         TempNodePtr->LeftChildPtr = NULL;
         TempNodePtr->RightChildPtr = NULL;
     }
     else
     {
         if (TempNodePtr->Data > value)
             InsertElement(TempNodePtr->LeftChildPtr, value);
         else
             InsertElement(TempNodePtr->RightChildPtr, value);
     }

 }

void Preorder(TreeNode* TempNodePtr){
 if(TempNodePtr){
    cout<<TempNodePtr->Data<<endl;
    Preorder(TempNodePtr->LeftChildPtr);
    Preorder(TempNodePtr->RightChildPtr);
 }

}
void Inorder(TreeNode* TempNodePtr){
 if(TempNodePtr){

    Inorder(TempNodePtr->LeftChildPtr);
    cout<<TempNodePtr->Data<<endl;
    Inorder(TempNodePtr->RightChildPtr);
 }
}
void Postorder(TreeNode* TempNodePtr){
 if(TempNodePtr){

    Postorder(TempNodePtr->LeftChildPtr);
    Postorder(TempNodePtr->RightChildPtr);
    cout<<TempNodePtr->Data<<endl;
 }

}
 void BFS(TreeNode* TempNodePtr)
 {
     if(!TempNodePtr)
        cout<<endl;
    else
    {
        queue<TreeNode*>NodesPtr;
        NodesPtr.push(TempNodePtr);

        while (!NodesPtr.empty())
        {
            TreeNode *queuePtr=NodesPtr.front();
            cout<<queuePtr->Data<<endl;
            if (queuePtr->LeftChildPtr)
            {
                NodesPtr.push(queuePtr->LeftChildPtr);
            }
            if (queuePtr->RightChildPtr)
            {
                NodesPtr.push(queuePtr->RightChildPtr);
            }
            NodesPtr.pop();
        }
    }

 }


