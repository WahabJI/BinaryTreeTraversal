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
vector<int> postorder(int length, vector<int> preorder, vector<int> inorder){

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

    return 0;
}