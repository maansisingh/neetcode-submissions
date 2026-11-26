class Solution {
public:
    vector<int> minAvailableDuration(vector<vector<int>>& slots1, vector<vector<int>>& slots2, int duration) {

        vector<int> commonSlot;

        int i = 0; //slots1
        int j = 0; //slots2

        sort(slots1.begin(), slots1.end());
        sort(slots2.begin(), slots2.end());
        while(i < slots1.size() && j < slots2.size()) {
            int start = max(slots1[i][0], slots2[j][0]);
            int end = min(slots1[i][1], slots2[j][1]);
            if(end - start >= duration) {
                commonSlot.push_back(start);
                commonSlot.push_back(start + duration);
                break;
            }
            if(slots1[i][1] < slots2[j][1]) {
                i++;
            } else {
                j++;
            }


        }
        return commonSlot;
        
        /*
        
        greater of the two in slots1[i][0] and slots2[i][0] - start
        smaller of the two in slots1[i][1] and slots2[i][1] - end
        
        is end - start >= duration?
            yes -> return [start, start + duration]
            no -> go to the next time slots and compare, repeat algorithm

        slots1: 

        [10, 50]
        [60, 120]
        [140, 210]

        slots2 = 
        
        [0,15]
        [60,70]

        slots1=[[0,10]]
        slots2=[[100,300],[200,210],[300,350],[500,520]]

        duration=15
        

        slightly different algorithm:

        the slots dont have to line up you can compare slots1[0] with slots2[1] for example

        two independent pointers i and j that move through slots[1] and slots[2] independently


        */
    }
};
