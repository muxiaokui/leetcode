/*Author: JerryYan
  comment:water
  solved by py
*/
class Solution(object):
    def findContentChildren(self, g, s):
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        g.sort()
        s.sort()
        i =0
        ret =0
        for tmp in s:
            if i == len(g):
                break;
            if tmp >= g[i]:
                ret+=1
                i+=1
        return ret
