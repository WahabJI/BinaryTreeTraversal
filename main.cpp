#include <iostream>
#include <vector>
using namespace std;

//function to find location of root in inorder 
int search(vector<int> inorder, int root){
    for(int x = 0; x < inorder.size(); x++){
        if(inorder[x] == root){
            return x;
        }
    }
}
void postorder(int length, vector<int> preorder, vector<int> inorder){
    int root = search(inorder, preorder[0]);

    if(root != 0){
        vector<int> temp(preorder.begin()+1,preorder.end());
        postorder(root, temp, inorder);
    }

    if(root != length - 1){
        vector<int> newPreorder(preorder.begin()+root+1,preorder.end());
        vector<int> newInorder(inorder.begin()+root+1, inorder.end());
        postorder(length-root-1, newPreorder, newInorder);
    }

    cout << preorder[0] << " ";
}

int main(){
    //taking in length of input
    int length = 0;
    cin >> length;

    //creating vectors to store preorder and inorder traversal
    vector<int> preorder(length);
    vector<int> inorder(length);

    //storing preorder traversal
    for(int x = 0; x < length; x++){
        cin >> preorder[x];
    }

    //storing inorder traversal
    for(int x = 0; x < length; x++){
        cin >> inorder[x];
    }

    postorder(length, preorder, inorder);
    return 0;
}