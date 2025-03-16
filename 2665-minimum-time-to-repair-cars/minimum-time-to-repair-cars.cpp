class Solution {
public:
typedef long long ll;
 bool isValid(vector<int>& ranks,ll mid,int cars){
    ll carFixed=0;
    for(int i=0;i<ranks.size();i++){
        carFixed+=sqrt(mid/ranks[i]);
    }
    return carFixed>=cars;
 }
    long long repairCars(vector<int>& ranks, int cars) {
     ll l=1;
     int maxR=*max_element(ranks.begin(),ranks.end());
     ll r=1LL*maxR*cars*cars; 
     ll result=-1;  
     while(l<=r){
       ll mid=l+(r-l)/2;
       if(isValid(ranks,mid,cars)){
        result=mid;
        r=mid-1;
       } else
       l=mid+1;
     }
     return result;
    }
};