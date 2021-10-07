 // Your code here
        if(a.size() != b.size()) return false;
        
        int arr[26] = {0};
        
        for(int i = 0; i < a.size(); ++i) {
            arr[a[i]-'a']++;
            arr[b[i]-'a']--;
        }
        
        for(int i = 0; i < 26; ++i) {
            if(arr[i] != 0) return false; 
        }
        
        return true;
