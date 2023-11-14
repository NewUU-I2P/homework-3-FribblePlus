#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    int number = 0;
    std::string answer;
    if (macAddress[0] == 'F' and macAddress[1] == 'F' ){
        answer =  "Broadcast";
    }else {
        number = (macAddress[1] - '0');
        if(number > 9) number ++;
        if (number % 2 == 0) {
            answer = "Unicast";
        } else {
            answer = "Multicast";
        }
    }
    return answer;
    // make use of control flow statements
    // return result;
}
