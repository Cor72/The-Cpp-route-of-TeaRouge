        sort(a.begin(),a.end(), [](const auto& a, const auto& b){
        return a.second > b.second;
    });
    
    
    
    sort(a.begin(), a.end(), [](const auto& a, const auto& b){
        if (a.second != b.second) {
            return a.second > b.second;
        }
        return a.first < b.first;
    });