class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        def intege(str):
            t = 1
            i = len(str)-1
            s = 0
            while i != -1:
                s = s + (ord(str[i]) - 48)*t
                t = t*10
                i -= 1
            return s
        def strin(n):
            st = ""
            if n == 0:
                return chr(48)
            while n != 0:
                r = n%10
                n = n//10
                a = chr(r + 48)
                st = st + a
            return st[::-1]
    
        return strin( intege(num1)*intege(num2) )
        