/*Author: JerryYan
  comment:water
  ֵ�ü���ĵ�һ����pythonд����Ŀ
  ˳��py��֧��++  --����
*/
class Solution(object):
    def constructRectangle(self, area):
        mid = int(math.sqrt(area))
        while mid >0:
            if area % mid ==0:
                return [int(area/mid),int(mid)]
            else:
                mid-=1
