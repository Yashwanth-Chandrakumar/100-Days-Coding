def isValidParenthesis(str: str) -> bool:
    opening = {'(','[','{'}
    closing = {')':'(',']':'[','}':'{'}
    stack=[]
    for char in str:
        if char in opening:
            stack.append(char)
        else:
            if not stack or stack.pop()!=closing[char]:
                return False
    
    return not stack
    
