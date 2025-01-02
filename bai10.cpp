#include <stdio.h>  
#include <stdlib.h>  

#define MAX_SIZE 100  

int arr[MAX_SIZE];  
int size = 0;  

void inputArray() {  
    printf("Nhap so phan tu can nhap toi da %d ", MAX_SIZE);  
    scanf("%d", &size);  
    if (size > MAX_SIZE || size < 0) {  
        printf("So phan tu khong hop le\n");  
        size = 0;  
        return;  
    }  
    for (int i = 0; i < size; i++) {  
        printf("Nhap phan tu thu %d ", i + 1);  
        scanf("%d", &arr[i]);  
    }  
}  

void printArray() {  
    printf("Gia tri cac phan tu dang quan ly ");  
    for (int i = 0; i < size; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  
}  

void addElement() {  
    int index, value;  
    printf("Nhap vi tri muon them 0 den %d ", size);  
    scanf("%d", &index);  
    if (index < 0 || index > size || size >= MAX_SIZE) {  
        printf("Vi tri khong hop le\n");  
        return;  
    }  
    for (int i = size; i > index; i--) {  
        arr[i] = arr[i - 1];  
    }  
    printf("Nhap gia tri phan tu muon them ");  
    scanf("%d", &value);  
    arr[index] = value;  
    size++;  
}  

void editElement() {  
    int index, value;  
    printf("Nhap vi tri muon sua 0 den %d ", size - 1);  
    scanf("%d", &index);  
    if (index < 0 || index >= size) {  
        printf("Vi tri khong hop le\n");  
        return;  
    }  
    printf("Nhap gia tri moi ");  
    scanf("%d", &value);  
    arr[index] = value;  
}  

void deleteElement() {  
    int index;  
    printf("Nhap vi tri muon xoa 0 den %d ", size - 1);  
    scanf("%d", &index);  
    if (index < 0 || index >= size) {  
        printf("Vi tri khong hop le\n");  
        return;  
    }  
    for (int i = index; i < size - 1; i++) {  
        arr[i] = arr[i + 1];  
    }  
    size--;  
}  

int main() {  
    int choice;  
    while (1) {  
        printf("Chuong trinh quan ly mang\n");  
        printf("1.Nhap mang\n");  
        printf("2.In mang\n");  
        printf("3.Them phan tu\n");  
        printf("4.Sua phan tu\n");  
        printf("5.Xoa phan tu\n");  
        printf("6.Thoat\n");  
        printf("Chon lua chon cua ban ");  
        scanf("%d", &choice);  

        switch (choice) {  
            case 1:  
                inputArray();  
                break;  
            case 2:  
                printArray();  
                break;  
            case 3:  
                addElement();  
                break;  
            case 4:  
                editElement();  
                break;  
            case 5:  
                deleteElement();  
                break;  
            case 6:  
                exit(0);  
            default:  
                printf("Lua chon khong hop le\n");  
        }  
    }  
    return 0;  
}