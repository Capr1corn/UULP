#include <stdio.h>

/**
 �����ַ����ڴ��еı����ʽ��
 **/
int main(int argc, const char * argv[]) {
    // insert code here...
    char  a[10] = "hello";
    char b [10] = "���";
    printf("%x\n",&a);
    printf("%s\n",a);
    
    printf("%llx\n",&b);
    printf("%s\n",b);
    
    //��ӡ�ڴ�ֵ������������ �������ʮ�����ơ�
    for (int i = 0; i < 10; i++)
    {
        printf("%d a = %llx b =%llx\n", i ,a[i],b[i]);
    }
    
    return 0;
}
