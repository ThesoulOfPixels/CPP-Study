//Hello.cpp | A test program
//At 2020.4.25
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "��Ŀһ:\n";
    int apples;//��������"apples",���ڴ���ƻ������
    cout << "Man: How many apples do you have?\n";
    cout << "(please enter a number here)\n";
    cin >> apples;//���û�����������Ϊƻ������
    cout << "Me: Oh,I have " << apples << " apples now.\n";
    cout << "Man: Look,here are two more.\n";
    apples = apples + 2;//ƻ������������
    cout << "Man: Now you have " << apples << " apples\n";
    cout << "--------------------------------------------\n";
    system("pause");
    cout << endl;
    cout << "��Ŀ��\n";
    double area;//��������"area",���濪��ǰ����
    cout << "���뱻������\n";
    cin >> area;//���û����뱻������
    double side;//��������"side"���濪�������
    side = sqrt(area);//����cmath�е�sqrt�������п�ƽ��
    cout << "�������Ϊ" << side << endl;
    cout << "--------------------------------------------\n";
    system("pause");
    cout << endl;
    cout << "��Ŀ��\n";
    cout << "Please enter the password here\n";
    cout << "password:______\b\b\b\b\b\b";//����\b���˷�ʵ�����»��������������Ч��
    int password;//��������"password",��������֤��������
    cin >> password;//���û���������
    cout << "\nYour password is " << password << "...\n";
    if (password == 123456)//�ж������Ƿ�Ϊ123456,�����ȷ:
    {
        cout << "Password correct\n";//���"������ȷ"
    }
    else//�������
    {
        cout << "Password error\n";//����������
    }
    cout << "--------------------------------------------\n";
    system("pause");
    cout << endl;
    cout << "��Ŀ��\n";
    cout << "Ӫ����������:\n";
    string a1;
    string a2;
    string a3;
    cout << "����:";
    cin >> a1;
    cout << endl;
    cout << "��Ϊ:";
    cin >> a2;
    cout << endl;
    cout << "ԭ��:";
    cin >> a3;
    cout << "�ɹ�����,�빴ѡ����:\n";
    cout << a1 << a2 << "����ô�����أ�"
        << a1 << "���Ŵ�Ҷ�����Ϥ����"
        << a1 << a2 << "����ô�����أ��������Ƕ����ĵ����⡣�������С������һ���˽�һ�£�"
        << a1 << "Ϊʲô" << a2 << "��"
        << a1 << a2 << "��ʵ������Ϊ" << a3
        << "����ҿ��ܻ�ܾ���" << a1 << "��ô��" << a2
        << "�أ�����ʵ����������С��Ҳ�е��ǳ����ȡ�����������ѱ�ʾ�������š����Ͼ��ǹ���"
        << a1 << a2 << "��ȫ�������ˣ������ʲô�뷨�أ���ӭ������������С��һ������Ŷ��\n";
    cout << "--------------------------------------------\n";
    system("pause");
    cout << endl;
    return 0;//����ֵΪ0,˵���ó�������������
}
