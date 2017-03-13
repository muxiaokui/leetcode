/*Author: JerryYan
  comment:water
  值得纪念的第一道用python写的题目
  顺便py不支持++  --操作
*/
class Solution(object):
    def constructRectangle(self, area):
        mid = int(math.sqrt(area))
        while mid >0:
            if area % mid ==0:
                return [int(area/mid),int(mid)]
            else:
                mid-=1
