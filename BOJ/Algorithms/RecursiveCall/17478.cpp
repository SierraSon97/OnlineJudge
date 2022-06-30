#include <bits/stdc++.h>

using namespace std;

string str1 = "\"����Լ��� ������?\"\n";
string str2 = "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
string str3 = "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
string str4 = "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
string str5 = "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
string str6 = "��� �亯�Ͽ���.\n";

string Underbar(int count){
    int length = count * 4;
    string outputData = "";
    while(length--){
        outputData += "_";
    }
    return outputData;
}

void Recursive(int dst, int count){
    string underbar = Underbar(count);
    cout << underbar + str1;
    if(dst == count){
        cout << underbar + str5;
        cout << underbar + str6;
        return;
    }
    cout << underbar + str2;
    cout << underbar + str3;
    cout << underbar + str4;
    Recursive(dst, count+1);
    cout << underbar + str6;
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
    Recursive(N, 0);
}