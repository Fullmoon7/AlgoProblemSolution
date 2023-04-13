class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0, d = 0;
        for(int i = 0; i < instructions.length(); i++){
            switch(instructions[i]){
                case 'G':
                    switch(d){
                        case 0:
                            y++;
                            break;
                        case 1:
                            x++;
                            break;
                        case 2:
                            y--;
                            break;
                        case 3:
                            x--;
                            break;
                    }
                    break;
                case 'L':
                    d = (d+3)%4;
                    break;
                case 'R':
                    d = (d+1)%4;
                    break;
            }
        }
        printf("%d %d %d", x, y ,d);
        bool ret = false;
        switch(d){
            case 0:
                if(x == 0 && y == 0){
                    ret = true;
                }
                break;
            case 1:
                ret = true;
                break;
            case 2:
                ret = true;
                break;
            case 3:
                ret = true;
                break;
        }
        return ret;
    }
};