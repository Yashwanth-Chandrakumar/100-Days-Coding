from typing import Optional

class TreeNode:
    def __init__(self, data: int):
        self.data = data
        self.left = None
        self.right = None


def kthSmallest(root: Optional[TreeNode], k: int) -> int:
    result = None
    count = 0

    def inorder(node: Optional[TreeNode]):
        nonlocal result, count, k

        if node is None or count >= k:
            return

        inorder(node.left)

        count += 1
        if count == k:
            result = node.data
            return

        inorder(node.right)

    inorder(root)
    return result
    pass
