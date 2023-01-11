//6274. Reward Top K Students

#include<bits/stdc++.h>
class Solution {
public:
    
    
    vector<string> splitWord(string str)
{
        vector<string> reportWords;
    // Find length of given variable
    int n = str.length();
 
    // Create an empty string
    string word = "";
 
    // Iterate over the string character by character using
    // For loop
    for (int i = 0; i < n; i++) {
 
        // Check if the current iteration is equal to ' ' or
        // it's the last character
        if (str[i] == ' ' or i == (n - 1)) {
 
            // Print word
            string reportWord= word + str[i];
            reportWords.push_back(reportWord);
            word = "";
        }
 
        // Add current character in word string
        else {
            word += str[i];
        }
    }
        
    return reportWords;
}
    
    
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        
        vector<int> studentPoints;
        vector<int>finalAns;
        
        int len = report.size();
        
        for(int i=0;i<len;i++){
            
            int studentPoint=0;
            
            int currStudentId = student_id[i];
            string currStudentReport = report[i];
            
            //go through each string word by word,
            //check if word is present in positive or negative feedback
            vector<string> reportWords = splitWord(currStudentReport);
            
            //compare positive
            
            for(int i=0;i<reportWords.size();i++){
                for(int j=0;j<positive_feedback.size();j++){
                    
                    if(reportWords[i]==positive_feedback[j]){
                        studentPoint = studentPoint+3;
                    }
                }
            }
            
            for(int i=0;i<reportWords.size();i++){
                for(int j=0;j<negative_feedback.size();j++){
                    
                    if(reportWords[i]==negative_feedback[j]){
                        studentPoint = studentPoint-1;
                    }
                }
            }
            
            studentPoints.push_back(studentPoint);
        }
        
        sort(studentPoints.begin(), studentPoints.end(), greater<int>());
        
        for(int i=0;i<k;i++){
            finalAns.push_back(studentPoints[i]);
        }
        return finalAns;
    }
};