class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        if(len(s)%2 == 1):return False
        for q in s:
            if(q =="{" or q == "[" or q == "("):
                stack.append(q)
            else:
                if(len(stack) != 0 ):
                    st = stack.pop()
                else:
                    st = ""
                if( (st=="(" and q ==")" ) or(st=="{" and q =="}" )or (st=="[" and q =="]" ) ) :
                    continue
                else:
                    return False
        if(len(stack)!=0):
            return False
        return True       
                
           