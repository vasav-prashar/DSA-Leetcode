class Solution {
public:
    int solve(int topL,int topR,int bottomR,int bottomL,int p,int distRay,int q){
        if(distRay==p)
            return topR;
        if(distRay==0)
            return bottomR;
        if(distRay*2<=p)
          return solve(topR,topL,bottomL,bottomR,p,q+distRay,q);
        else
            return  solve(bottomR,bottomL,topL,topR,p,q+distRay-p,q);
    }
    int mirrorReflection(int p, int q) {
       int topL=2,topR=1,bottomR=0,bottomL=-1;
        return solve(topL,topR,bottomR,bottomL,p,q,q);
    }
};