#include <iostream>
#include <string>
using namespace std;

string sol(const std::string& s) {
    if (s.empty()) {
        return "null";
    }

    size_t pos = s.find("//");
    string result;
    
    if (pos == string::npos) {
        result = s;
    } else {
        result = s.substr(0, pos);
    }
    return result.empty() ? "null" : result;
}

int main() {
    string line;
    getline(std::cin, line);  // 读取一整行（包括空格）

    cout<<sol(line);
    return 0;
}