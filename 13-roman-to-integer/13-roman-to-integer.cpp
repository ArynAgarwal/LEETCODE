class Solution {
public:
    int romanToInt(string s) {
        string rev;
        int a=s.length()-1;
        for(int i=0;i<s.length();i++){
            
            rev[i] = s[a-i];
            cout<<rev[i]<<endl;
        }
       
        map<char,int> m;
        m.insert(pair<char,int> ('I',1));
        m.insert(pair<char,int> ('V',5));
        m.insert(pair<char,int> ('X',10));
        m.insert(pair<char,int> ('L',50));
        m.insert(pair<char,int> ('C',100));
        m.insert(pair<char,int> ('D',500));
        m.insert(pair<char,int> ('M',1000));
        
        int result = 0;
        int last = 0;
        
        // cout<<rev[0]<<endl;
        // cout<<(m.find(rev[0]) == m.end())<<endl;
        // cout<<s.length()<<endl<<rev.size()<<endl;
        for(int i=0;i<s.length();i++){
            auto it = m.find(rev[i]);
            cout<<it->first<<"---"<<it->second<<endl;
            if(last<=(it->second)){
                result = result + (it->second);
                last = it->second;
            }
            else if(last>(it->second)){
                result = result - (it->second);
                last = it->second;
            }
            // cout<<result<<endl;
        }
        //cout<<result<<"---"<<last<<endl;
        // for (auto it = m.begin();it != m.end(); ++it){
        //     if(rev[i]==it->first){
        //         result=result + it->second;
        //         i++;
        //     }
        //     else if(rev[i]<it->first){
        //         for(auto itr = m.begin();itr != it;++itr){
        //             if(rev[i]==itr->first){
        //                 result = result - itr->second;
        //                 i++;
        //             }
        //         }
        //     }
        // }   
        return result;
            // cout << it->first << " = " << it->second << '\n';
//         for(int i=0;i<s.length();i++){
//             if(s[0]=='I'){
                
//             }
//         }
    }
};