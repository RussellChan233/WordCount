#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int const MOD = 1e9+7;
int main(int argc, char** argv) {
	//Ԥ���� 
	char filename[1005]; // �ļ��� 
    char fileress[1005]; // �ļ�·�� 
    char prm[10]; // ������ 
    char* ress_end = strrchr(argv[0], '\\');
    *(ress_end + 1) = '\0';
    strcpy(prm, argv[1]);
    strcpy(filename, argv[2]);
    strcpy(fileress, argv[0]);
    if(filename[2] == '\\' && filename[1] == ':')
        strcpy(fileress, filename);
    else
        strcat(fileress, filename);
    // ��ʼͳ�� 
    freopen(fileress, "r", stdin);
    char ans;
    bool flag = true; // �жϵ�ǰλ���Ƿ�λ�ڵ���֮�� 
    int charsum = 0; // �ַ��� 
    int wordsum = 0; // ������ 
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
    // ������ 
    if(prm[1] == 'c')
        printf("�ַ���:%d\n", charsum);
    if(prm[1] == 'w')
        printf("������:%d\n", wordsum);
	return 0;
}
