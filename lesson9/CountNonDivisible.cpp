#include <algorithm>
#include <map>
//this method not fast enough 
vector<int> solution(vector<int> &A) {
    // write your code in C++11
    map<int,int> dic;
    map<int,vector<int> > divsors;
    int size = A.size();
    int max = *max_element(A.begin(),A.end());
    for(int i=0; i<size; i++){
        dic[A[i]]++;
        if(divsors.count(A[i])==0){
            vector<int> vec(1,1);
            divsors.insert(make_pair(A[i],vec));
        }
    }
    
    for(int i=2; i<= max; i++){
        int element = i;
        while(element <=max){
            if(divsors.count(element)!=0 &&  find(divsors[element].begin(),divsors[element].end(),i)==divsors[element].end()){
                divsors[element].push_back(i);   
            }
            element+=i;
        }
    }
    vector<int > res;
    for(int i=0; i<size; i++){
        vector<int> t = divsors[A[i]];
        int cnt = size;
        for(int j=0; j<t.size(); j++){
            cnt -= dic[t[j]];          
        }
        res.push_back(cnt);
    }
    return res;
}
