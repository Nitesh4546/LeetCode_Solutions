int vals(char c){
    switch(c){
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
        default: return -1;
    }
}
int romanToInt(char* s) {
    int temp = 0;
    int n1 = 0;
    int n2 = 0;
    for(int i=0;i<strlen(s);i++){
        if(i+1<strlen(s)){
            n1 = vals(s[i]);
            n2 = vals(s[i+1]);
            if(n2 > n1){
                temp -= n1;
            }else{
                temp += n1;
            }
        }else{
            temp += vals(s[i]);
        }
    }
    return temp;
}