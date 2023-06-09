/*给你一份『词汇表』（字符串数组） words 和一张『字母表』（字符串） chars。

假如你可以用 chars 中的『字母』（字符）拼写出 words 中的某个『单词』（字符串），那么我们就认为你掌握了这个单词。

注意：每次拼写（指拼写词汇表中的一个单词）时，chars 中的每个字母都只能用一次。

返回词汇表 words 中你掌握的所有单词的 长度之和。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/find-words-that-can-be-formed-by-characters
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<int,int>count;
        int ans=0;
        for(auto ch:chars){
            count[ch]++;
        }
        int len=words.size();
        for(int i=0;i<len;++i){
            map<int,int>temp;
            int flag=1;
            for(auto ch:words[i]){
                temp[ch]++;
            }
            for(auto ch:words[i]){
                if(count.find(ch)==count.end()||temp[ch]>count[ch]){
                    flag=0;
                    break;
                }
            }
            if(flag){
                ans+=words[i].size();
            }
        }
        return ans;
    }
};