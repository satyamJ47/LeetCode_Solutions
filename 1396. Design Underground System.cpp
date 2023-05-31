class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>>log;
    unordered_map<string,pair<int,int>>avg;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        log[id] = {stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        // if(log.find(id)!=log.empty())
        // {
            avg[log[id].first+" "+stationName].first+=(t-log[id].second);
            avg[log[id].first+" "+stationName].second++;
            log.erase(id);
        // }
    }
    
    double getAverageTime(string startStation, string endStation) {
        return (double)avg[startStation+" "+endStation].first/avg[startStation+" "+endStation].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
