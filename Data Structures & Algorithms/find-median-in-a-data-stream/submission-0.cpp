class MedianFinder {
    priority_queue<int,vector<int>,less<int>>smallH;
    priority_queue<int,vector<int>,greater<int>>largeH;
public:
    MedianFinder() {}
    
    void addNum(int num) {
        smallH.push(num);
        if(!largeH.empty() && smallH.top()>largeH.top()){
            largeH.push(smallH.top());
            smallH.pop();
        }
        if(smallH.size()>largeH.size()+1){
            largeH.push(smallH.top());
            smallH.pop();
        }
        if(largeH.size()>smallH.size()+1){
            smallH.push(largeH.top());
            largeH.pop();
        }
    }
    
    double findMedian() {
        if(smallH.size()==largeH.size()){
            return (smallH.top()+largeH.top())/2.0;
        }
        else if(smallH.size()>largeH.size()){
            return smallH.top();
        }else{
            return largeH.top();
        }
    }
};
