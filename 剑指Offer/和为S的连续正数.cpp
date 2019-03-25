// 我的思路: 通过数学规律
class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int> > res;
        // HashTable
        vector<int >  hashTable (sum+2);
        hashTable[2] = 1;
        for (int i = 3 ; i < sum; i++) {
            hashTable[i] = hashTable[i-1]+i-1;
        }
        
        for (int i = 1 ; i <= sum>>1; i++){
            for (int j = 2 ; j < sum>>1 ; j++){
                if ((sum-hashTable[j] )%j == 0 )
                {  
                    vector<int > sequence (j , i); 
                for (int k = 0 ; k < j; k++)
                    sequence[k]+=k;
                res.push_back(sequence);}
            }
        }
        return res;
    }
};


//左神的思路，双指针问题
//当总和小于sum，大指针继续+
//否则小指针+
class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int> > allRes;
        int phigh = 2,plow = 1;
         
        while(phigh > plow){
            int cur = (phigh + plow) * (phigh - plow + 1) / 2;
            if( cur < sum)
                phigh++;
             
            if( cur == sum){
                vector<int> res;
                for(int i = plow; i<=phigh; i++)
                    res.push_back(i);
                allRes.push_back(res);
                plow++;
            }
             
            if(cur > sum)
                plow++;
        }
         
        return allRes;
    }
};


class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        int l = 1,r = 1,sumx = 1;
        vector<vector<int> > ans;
        while(l <= r){
            r ++;
            sumx += r;
            while(sumx > sum){
                sumx -= l;
                l ++;
            }
            if(sumx == sum && l != r){
                vector<int> tmp;
                for(int i = l;i <= r;i ++)  tmp.push_back(i);
                ans.push_back(tmp);
            }
        }
        return ans;
    }
};
