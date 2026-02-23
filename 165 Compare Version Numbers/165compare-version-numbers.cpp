class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n1 = version1.length(), n2 = version2.length(), value = 0, p1 = 0, p2 = 0;
        bool flag = true;
        
        while(p1<n1 || p2<n2){
            
            if(p1<n1 && (p1==0 || version1[p1-1] == '.')){
                while(p1<n1 && version1[p1] == '0') p1++;
            }
            
            if(p2<n2 && (p2==0 || version2[p2-1] == '.')){
                while(p2<n2 && version2[p2] == '0') p2++;
            }
            
            if(p1>=n1 && p2>=n2) break;
            
            if((p1>=n1 && version2[p2] == '.') || (p2>=n2 && version1[p1] == '.')){
                if(value) return value;
                p1++;
                p2++;
                continue;
            }
            
            if((p1>=n1 || version1[p1] == '.') && version2[p2] != '.'){
                return -1;
            }
            if((p2>=n2 || version2[p2] == '.') && version1[p1] != '.'){
                return 1;
            }

            if(version1[p1] == '.' && version2[p2] == '.'){
                if(value) return value;
                p1++;
                p2++;
                continue;
            }

            if(version1[p1] > version2[p2] && flag){
                value = 1;
                flag = false;
            }else if(version2[p2] > version1[p1] && flag){
                value = -1;
                flag = false;
            }
            p1++;
            p2++;
        }
        return value;
    }
};