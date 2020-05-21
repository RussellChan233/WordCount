#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int const MOD = 1e9+7;
int main(int argc, char** argv) {
	//预处理 
	char filename[1005]; // 文件名 
    char fileress[1005]; // 文件路径 
    char prm[10]; // 操作符 
    char* ress_end = strrchr(argv[0], '\\');
    *(ress_end + 1) = '\0';
    strcpy(prm, argv[1]);
    strcpy(filename, argv[2]);
    strcpy(fileress, argv[0]);
    if(filename[2] == '\\' && filename[1] == ':')
        strcpy(fileress, filename);
    else
        strcat(fileress, filename);
    // 开始统计 
    freopen(fileress, "r", stdin);
    char ans;
    bool flag = true; // 判断当前位置是否位于单词之间 
    int charsum = 0; // 字符数 
    int wordsum = 0; // 单词数 
    while(~scanf("%c", &ans)) {
        charsum++;
        if(ans == ' ' || ans == '\n' || ans == ',' || ans == '\t' || ans == '\0') {
            if(!flag) {
                wordsum++;
                flag = true;
            }
        }
        else
            flag = false;
    }
    if(!(ans == ' ' || ans == '\n' || ans == ',' || ans == '\t' || ans == '\0')) {
        if(!flag) {
            wordsum++;
        }
    }
    fclose(stdin);
    // 输出结果 
    if(prm[1] == 'c')
        printf("字符数:%d\n", charsum);
    if(prm[1] == 'w')
        printf("单词数:%d\n", wordsum);
	return 0;
}
