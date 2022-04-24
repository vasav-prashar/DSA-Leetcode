class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>> checkInd; //Uid - {StationName, Time}
    unordered_map<string,pair<double,int>> routeMap; //RouteName - {TotalTime, Count}
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        checkInd[id]={stationName,t};
        
    }
    
    void checkOut(int id, string stationName, int t) {
        auto checkinid=checkInd[id];
        checkInd.erase(id);
        
        string routeName=checkinid.first+"_"+stationName;
        routeMap[routeName].first+=t-checkinid.second;
        routeMap[routeName].second+=1;
        
    }
    
    double getAverageTime(string startStation, string endStation) {
        string routeName = startStation + "_" + endStation;
        auto& route = routeMap[routeName];
        return route.first / route.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */