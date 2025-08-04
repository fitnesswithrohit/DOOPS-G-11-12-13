class Solution {
public:
    int majorityElement(vector<int>& arr) {
    //Moores Voting Algorithm
    int count=0;
    int element;
    int n=arr.size();

    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            element = arr[i];
        }
        else if(element == arr[i]) count++;
        else{
            count--;
        }
    }
    return element;
    }
};