int count(const BinaryNode *root){
    if (root == nullptr) 
       return 0;
    int num = 1;
    if (root->left != nullptr) {
       num = num + count(root->left);
    }
    if (root->right != nullptr) {
        num = num + count(root->right);
    }
    return num;
}

const Comparable & FindMed( ) const
{
    if( isEmpty( ) )
        throw UnderflowException{ };
    return findMed( root );
}

int FindMed(BinaryNode *root)
{ 
    if (root == nullptr){
        return 0; 
    }
  
    int num = count(root); 
    int temp = 0; 
    struct Node *curr_root = root, *pre, *prev; 
  
    while(curr_root != nullptr) { 
        if(curr_root->left == nullptr) { 
            temp++; 
            if(temp == (num+1)/2 && num % 2 != 0){
                return prev->data;
                } 
              else if(temp == (num/2)+1 && num % 2 == 0){
                return (prev->data + curr_root->data)/2;
              } 
              prev = curr_root; 
              curr_root = curr_root->right; 
        } 
        else{ 
            pre = curr_root->left; 
            while(pre->right != curr_root && pre->right != nullptr){ 
                pre = pre->right; 
              if(pre->right == nullptr){ 
                    pre->right = curr_root; 
                    curr_root = curr_root->left;
                } 
            } 
            else{ 
                pre->right = nullptr; 
                prev = pre; 
                temp++; 
                if(temp == (num+1)/2 && num % 2 != 0){
                    return curr_root->data;  
                }
                else if(temp == (num/2)+1 && num%2==0){ 
                    return (prev->data + curr_root->data)/2; 
                }
                prev = curr_root; 
                curr_root = curr_root->right; 
            }
        }
    }
} 