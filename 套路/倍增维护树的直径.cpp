/*
���ȶ�����������LCAԤ����
Ȼ���1-n���ΰ�i����,��ԭֱ��Ϊa--b
�����ڵ�ֱ��Ϊmax(a--b,a--i,b--i)


*/


int cal(int a,int b) //����a-b�������ϵĵ�ĸ���
{
    int t = LCA(a,b);
    return deep[a]+deep[b]-2*deep[t]+1;
}


