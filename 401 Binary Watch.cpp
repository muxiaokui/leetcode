/*Author: JerryYan
   comment:ͬһ����Ŀ��cpp�汾 ѧϰһ��bitset��ʹ�÷�����������˼
   ����ֱ��ͳ�ƶ����Ƶ�1�ĸ�����bitset<32>(a).count() ���Լ�д��֪���ߵ�����ȥ��
   ���忴http://blog.163.com/lixiangqiu_9202/blog/static/53575037201251121331412/
*/
class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> ret;
        for(int i=0;i<12;i++)
        for(int j=0;j<60;j++)
        if(bitset<10>(i<<6 | j ).count() == num)
        ret.push_back(to_string(i)+(j<10?":0" : ":")+ to_string(j) );
        return ret;
    }
};
