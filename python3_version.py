class Solution:
    def romanToInt(self, s: str) -> int:
        single = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
        double = {'IV':4, 'IX':9, 'XL':40, 'XC':90, 'CD':400, 'CM':900}
        
        integer = 0
        i = 0
        while i < len(s):
            if i - 1 < len(s) and s[i:i+2] in double:
                integer = integer + double[s[i:i+2]]
                i += 2
            else:
                integer = integer + single[s[i:i+1]]
                i += 1
                
        return integer
