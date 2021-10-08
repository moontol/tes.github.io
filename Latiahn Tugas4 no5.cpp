#include <stdio.h>

int main(){
    char x;
    printf("Membuat ramalan berdasarkan bintang kelahiran\n");
    printf("_____________________________________________\n");
    printf("1. Menentukan Bintang kelahiran\n");
    printf("   Tanggal berapa kamu lahir ?, (Pilih A - L)\n");
    printf("\n");
    printf("    1. 21 Maret s/d 19 April    | 2. 20 April – 20 Mei         | 3. 21 Mei – 20 Juni          | 4. 21 Juni – 22 Juli\n");
    printf("    5. 23 Juli – 22 Agustus     | 6. 23 Agustus – 22 September | 7. 23 September – 22 Oktober | 8. 23 Oktober – 21 November\n");
    printf("    9.22 November – 21 Desember | 10. 22 Desember – 19 Januari | 11. 20 Januari – 18 Februari | 12. 19 Februari – 20 Maret\n");
    printf("\nMasukkan Plihanmu : ");
    scanf("%c",&x);
    
    if (x=1){
    		printf("A R I E S");
	} else if (x=2){
		printf("a2");
	}
	
    
	    return 0;
}

