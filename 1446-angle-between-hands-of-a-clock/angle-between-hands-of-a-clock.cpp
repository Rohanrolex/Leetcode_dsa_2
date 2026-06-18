class Solution {
public:
    double angleClock(int hour, int minutes) {
         double p =  abs(30.0* hour - 5.5* minutes);
         if(p > 180) return 360-p;
         return p;
    }
};