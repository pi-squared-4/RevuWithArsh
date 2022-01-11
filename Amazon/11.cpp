// class Solution
// {
//     public:
//     //Function to serialize a tree and return a list containing nodes of tree.
//     void helper(Node* root, vector<int > &a){
//         if(root == NULL){
//             a.push_back(int(NULL));
//             return;
//         }
//         a.push_back(root->data);
//         helper(root->left, a);
//         helper(root->right, a);
//         return;
//     }
    
    
//     vector<int> serialize(Node *root) 
//     {
//         //Your code here
//         vector<int > a;
//         helper(root, a);
//         return a;
//     }
    
//     //Function to deserialize a list and construct the tree.
//     int idx = 0;
//     Node * deSerialize(vector<int> &a)
//     {
//        //Your code here
//        if((a.size()-1)<idx||a[idx]==NULL)
//        {
//            idx++;
//            return NULL;
//        }
//        Node*root=new Node(a[idx++]);
//        root->left=deSerialize(a);
//        root->right=deSerialize(a);
//        return root;
//     }

// };