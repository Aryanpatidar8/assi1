void evenodd(int start, int end) {
    for (int i = 0; i < end - start + 1; ++i) {
        if (i % 2 == 0) {
            even[start += 2 * i]; 
        } else { 
            odd[start += 2*i];
        }
    }
    for (int i = 0; i < end; ++i) {
        printf("%d ", even[i]);
    }
}
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    evenodd(1, n+1); 
    evenodd(1,6);
}
