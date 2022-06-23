class Solution {
public:
    bool static comp(vector<int> &a,vector<int> &b){ //sort acc to the last day
        return a[1]<b[1];
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        int n=courses.size();
        sort(courses.begin(),courses.end(),comp);
        if(courses.size()<=0)
            return 0;
        priority_queue<int> pq;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=courses[i][0];
            pq.push(courses[i][0]);
            if(sum>courses[i][1]){
                sum-=pq.top();
                pq.pop();
            }
        }
        return pq.size();
    }
};