class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int byte = 0;
        for(int i = 0; i < data.size(); i++){
            int n = data[i];
            
            if(n > 255){
                return false;
            }
            else if((n&128) == 0){
                byte = 1;
            }
            else if((n&224) == 192){
                byte = 2;
            }
            else if((n&240)==224){
                byte = 3;
            }
            else if((n&248) == 240){
                byte = 4;
            }else{
                return false;
            }
            
            for(int k = 1; k<byte; k++){
                if(k+i >= data.size()){
                    return false;
                }
                else if( (data[k+i]&192) != 128){
                    return false;
                }
            }
            i = i + byte - 1;
        }
        
        return true;
    }
};
