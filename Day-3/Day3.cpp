/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void traverse(TreeNode* root,ostringstream &os){
    if(root==NULL){
        os<<"# ";
        return;
    }
    os<<root->val<<" ";
    traverse(root->left,os);
    traverse(root->right,os);
}
    
    TreeNode* build(istringstream &is){
    string tmp;
    is>>tmp;
    if(tmp=="#") return NULL;
    auto root=new TreeNode(stoi(tmp));
    root->left=build(is);
    root->right=build(is);
    
    return root;
}

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        ostringstream os;
    traverse(root,os);
    return os.str();
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream is(data);
    return build(is);
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));