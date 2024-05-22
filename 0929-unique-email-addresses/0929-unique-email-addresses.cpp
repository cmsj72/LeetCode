class Solution {
public:
    void func(string address, unordered_set<string>& st){
        string local, domain;
        for(int i = 0; i < address.length(); i++){
            if(address[i] == '@'){
                local = address.substr(0, i);
                domain = address.substr(i + 1);
                cout << local << " " << domain << endl;
                break;
            }
        }
        for(int i = 0; i < local.length(); i++){
            if(local[i] == '+'){
                local = local.substr(0,i);
                break;
            }
        }
        int i = 0;
        while(i < local.length()){
            if(local[i] == '.'){
                local.erase(local.begin() + i);
            }else{
                i++;
            }
        }
        st.insert(local + "@" + domain);
    }
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        for(auto s : emails){
            func(s, st);
        }
        return st.size();
    }
};