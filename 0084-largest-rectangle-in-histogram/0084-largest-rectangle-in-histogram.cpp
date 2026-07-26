class Solution {
public:
   vector<int> NSL(vector<int>& arr){
      vector<int>left;
      stack<pair<int,int>>s;
      int pseudoindex = -1;
    for(int i=0;i<arr.size();i++){
    if(s.size()==0){
        left.push_back(pseudoindex);
    }
    else if(s.size()>0 && s.top().first<arr[i]){
        left.push_back(s.top().second);
    }
    else if(s.size()>0 && s.top().first>=arr[i]){
        while(s.size()>0 && s.top().first>=arr[i]){
            s.pop();
        }
        if(s.size()==0)
         left.push_back(pseudoindex);
        else
         left.push_back(s.top().second);
    }
    s.push({arr[i],i});
  }
   return left;
    }
     vector<int>  NSR(vector<int>& arr){
     vector<int>right;
stack<pair<int,int>>r;
int pseudoindex = arr.size();
for(int i=arr.size()-1;i>=0;i--){
    if(r.size()==0){
        right.push_back(pseudoindex);
    }
    else if(r.size()>0 && r.top().first<arr[i]){
        right.push_back(r.top().second);
    }
    else if(r.size()>0 && r.top().first>=arr[i]){
        while(r.size()>0 && r.top().first>=arr[i]){
            r.pop();
        }
        if(r.size()==0)
         right.push_back(pseudoindex);
        else
         right.push_back(r.top().second);
    }
    r.push({arr[i],i});
}
reverse(right.begin(),right.end());
return right;
    }
    int largestRectangleArea(vector<int>& arr) {
       vector<int>left = NSL(arr);
        vector<int>right = NSR(arr);
int maxArea = 0;
for(int i =0;i<arr.size();i++){
    int width = right[i]-left[i]-1;
    int area = arr[i]*width;
   maxArea = max(maxArea,area);
}
 return maxArea;

    };
};



