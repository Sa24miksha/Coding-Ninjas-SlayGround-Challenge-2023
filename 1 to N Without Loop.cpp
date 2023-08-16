void res(int x, vector<int> &ans){
    if(x==0){
        return;
    }
    res(x-1,ans);
    ans.push_back(x);
}

vector<int> printNos(int x) {
   vector<int> ans;
   res(x,ans);
   return ans;
}
