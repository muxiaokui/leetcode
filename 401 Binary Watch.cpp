/*Author: JerryYan
   comment:同一个题目的cpp版本 学习一个bitset的使用方法，很有意思
   可以直接统计二进制的1的个数了bitset<32>(a).count() 比自己写不知道高到哪里去了
   具体看http://blog.163.com/lixiangqiu_9202/blog/static/53575037201251121331412/
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
