# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Codec:
    def traverse(self,root,path):
        if not root:
            path.append("None")
            return 
        path.append(str(root.val))
        self.traverse(root.left,path)
        self.traverse(root.right,path)
        
        
    def build(self,data):
        if data[0]=='None':
            data.pop(0)
            return 
        else:
            root=TreeNode(data[0])
            data.pop(0)
            root.left=self.build(data)
            root.right=self.build(data)
        return root
    
    
    def serialize(self, root):
        if root is None:
            return []
        path=[]
        self.traverse(root,path)
        path=','.join(path)
        return path
    
    
    def deserialize(self, data):
        if not data:
            return 
        data=data.split(',')
        return self.build(data)

# Your Codec object will be instantiated and called as such:
# codec = Codec()
# codec.deserialize(codec.serialize(root))