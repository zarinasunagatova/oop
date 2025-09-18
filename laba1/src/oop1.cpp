#include <string>
using namespace std;

string replace_nth_character(const string& text, int n, char old_value, char new_value) {
    if (n <= 0) {
        return text;
    }
    
    int count_old = 0;
    for (char c : text) {
        if (c == old_value) {
            count_old++;
        }
    }
    
    if (n > count_old) {
        return text;
    }
    
    string result = text;
    int occurrence_count = 0;
    
    for (size_t i = 0; i < result.length(); i++) {
        if (result[i] == old_value) {
            occurrence_count++;
            if (occurrence_count % n == 0) {
                result[i] = new_value;
            }
        }
    }
    
    return result;
}