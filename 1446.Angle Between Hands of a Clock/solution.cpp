class Solution {
public:
    double angleClock(int hour, int minutes) {
        double h = hour * 30; // 1hr -> 30deg
        double m = minutes * 6; // 1min -> 6deg

        double hm = h + minutes * 0.5; //1min hr hnd moves 0.5deg
        double diff = abs(hm - m);
        return min(abs(360 - diff), diff);
    }
};