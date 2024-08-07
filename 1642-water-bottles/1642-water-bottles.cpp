class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drink = numBottles;
        while(numBottles >= numExchange){
            int exchange = numBottles / numExchange;
            drink += exchange;
            numBottles = exchange + (numBottles % numExchange);            
        }
        return drink;
    }
};

