// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++11
    vector<vector<int> > chs(S.size()+1,vector<int>(4,0));
    
    for(int i=0; i<S.size(); i++){
        for(int j=0; j<4; j++)
            chs[i+1][j] = chs[i][j];
        switch(S[i]){
            case 'A': chs[i+1][0]=chs[i][0]+1; break;
            case 'C': chs[i+1][1]=chs[i][1]+1; break;
            case 'G': chs[i+1][2]=chs[i][2]+1; break;
            case 'T': chs[i+1][3]=chs[i][3]+1; break;
            default: break;
        }
    }
    vector<int> res;
    for(int i =0; i<P.size(); i++){
           int j;
           for( j=0; j<4; j++){
                if(chs[Q[i]+1][j]-chs[P[i]][j]!=0)
                    break;
           }
           res.push_back(j+1);
    }
    return res;
}
