#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

vector<string> break_lines(const string& input_line){
    stringstream ss(input_line);
    std::vector<string> words;
    string word; 
    while(ss >> word){
        words.push_back(word);
    };
    return words;
};

//struct tag {
//    tag_name = 
//}


struct assign_attribute(const vector<string> &words){

    for(auto& item: words){
        if (item.find('<')!= std::string::npos){
            tag
        }

    }

}

int main() {
    
    vector<string> lines, words;
    lines.push_back("<tag1 value = \"HelloWorld\">");

    words = break_lines(lines[0]);


     for (const auto& word : words) {
        std::cout << word << std::endl;
    }
    return 0;
}
