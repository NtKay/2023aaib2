# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def removeLeafNodes(self, root: Optional[TreeNode], target: int) -> Optional[TreeNode]:
        if root == None: return root #�S���F��,�N��������
        left = self.removeLeafNodes(root.left, target) # ���ΦP�@�Ө禡,�B�z���b��
        right = self.removeLeafNodes(root.right, target) # �ΦP�@�Ө禡,�B�z�k�b��
        if left == None and right==None and root.val==target: #�̫��ܸ��l,�B�ȬۦP
            return None #�ƻ򳣨S��,�浹���I��ڪ��H(�N�O��ۤv�R��)

        root.left = left #��s������R���᪺���G,���쥪��
        root.right = right #��s���k��R���᪺���G,����k��
        return root #��^�s������
