#include <stdio.h>

int main()
    { SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c, d, g;
        cout � "������� ������ �������" � endl;
    cin � c � d;
        int A[c][d], m[d];
            for (a=0; a<c; a++){
                for (b=0; b<d; b++){
    cout � "������� A[" � a+1 � "][" � b+1 � "] = ";
        cin � A[a][b];
    }
}
cout � endl � "�������:" � endl;
    for (a=0; a<c; a++){
        for (b=0; b<d; b++){
cout � A[a][b] � '\t';
}
    cout � endl;
}
    g=0;
        for (b=0; b<d; b++){
            for (a=0; a<c; a++){
    if (A[a][b]>0) {
        if (g==0) {
m[b]=A[a][b];
    g=1;
}
    else if (A[a][b]<m[b]) m[b]=A[a][b];
    }
}
    if (g==0) {cout � "� " � b+1 � " ������� ��� ������������� �����" � endl;
} else cout � "����������� ������������� ����� � " � b+1 � " ������� - " � m[b] � endl;
    g=0;
    }
}
