#include <stdio.h>
#include <math.h>


int main() {
    int pilihan;
    float sisi, luas, panjang, lebar, alas, tinggi, sisi1, sisi2, sisi3, sisi4, sisi5, jari2, pi = 3.14, d1, d2, a, b, c, d, keliling, pelukis, volume;

    printf("Ingin menghitung Bangun Datar(1) atau Bangun Ruang(2) ?");
    scanf("%d", &pilihan);


    if (pilihan == 1) {
        printf("Masukkan Bangun Datar, dengan memilih angka\n");
        printf("1. persegi\n");
        printf("2. persegi panjang\n");
        printf("3. segitiga\n");
        printf("4. trapesium\n");
        printf("5. lingkaran\n");
        printf("6. layang-layang\n");

        scanf("%d", &pilihan);
        switch (pilihan) {
            case 1:
                printf("menghitung bangun datar persegi\n");
                printf("akan menghitung luas(1) atau keliling(2) ?\n");
                scanf("%d", &pilihan);
                switch (pilihan) {
                    case 1:
                        printf("menghitung luas persegi \n");
                        printf("masukkan sisi persegi: \n");
                        scanf("%f", &sisi);
                        if (sisi == 0) {
                            printf("anda ingin mencari sisi persegi !\n");
                            printf("masukkan keliling persegi: ");
                            scanf("%f", &keliling);
                            sisi = keliling / 4;
                            printf("sisi persegi: %.2f\n", sisi);
                        }
                        luas = sisi * sisi;
                        printf("luas persegi: %.2f\n", luas);
                        break;
                    case 2:
                        printf("menghitung keliling persegi \n");
                        printf("masukkan sisi persegi: \n");
                        scanf("%f", &sisi);
                        if (sisi == 0) {
                            printf("masukkan keliling persegi: ");
                            scanf("%f", &keliling);
                            sisi = keliling / 4;
                            printf("sisi persegi: %.2f\n", sisi);
                        }
                        keliling = 4 * sisi;
                        printf("keliling persegi: %.2f\n", keliling);
                        break;
                }
                break;
            case 2:
                printf("menghitung bangun datar persegi panjang\n");
                printf("akan menghitung luas(1) atau keliling(2) ?\n");
                scanf("%d", &pilihan);
                switch (pilihan) {
                    case 1:
                        printf("menghitung luas persegi panjang\n");
                        printf("masukkan panjang persegi panjang: \n");
                        scanf("%f", &panjang);
                        printf("masukkan lebar persegi panjang: ");
                        scanf("%f", &lebar);
                        if (panjang == 0) {
                            printf("anda ingin mencari panjang !\n");
                            printf("masukkan keliling persegi panjang: ");
                            scanf("%f", &keliling);
                            panjang = keliling / 2 - lebar;
                            printf("panjang persegi panjang: %.2f\n", panjang);
                        }
                        luas = panjang * lebar;
                        printf("luas persegi panjang: %.2f\n", luas);
                        break;
                    case 2:
                        printf("menghitung keliling persegi panjang\n");
                        printf("masukkan panjang persegi panjang: \n");
                        scanf("%f", &panjang);
                        printf("masukkan lebar persegi panjang: ");
                        scanf("%f", &lebar);
                        keliling = 2 * (panjang + lebar);
                        printf("keliling persegi panjang: %.2f\n", keliling);
                        break;
                }
                break;
            case 3:
                printf("menghitung bangun datar segitiga\n");
                printf("akan menghitung luas(1) atau keliling(2) ?\n");
                scanf("%d", &pilihan);
                switch (pilihan) {
                    case 1:
                        printf("menghitung luas segitiga\n");
                        printf("masukkan alas segitiga: ");
                        scanf("%f", &alas);
                        if (alas == 0) {
                            printf("anda ingin mencari alas segitiga !\n");
                            printf("masukkan keliling segitiga: ");
                            scanf("%f", &keliling);
                            printf("masukkan sisi1: ");
                            scanf("%f", &sisi1);
                            printf("masukkan sisi2: ");
                            scanf("%f", &sisi2);

                            alas = keliling - (sisi1 + sisi2);
                            printf("alas segitiga: %.2f\n", alas);
                        }
                        printf("masukkan tinggi segitiga: ");
                        scanf("%f", &tinggi);
                        luas = alas * tinggi * 1 / 2;
                        printf("luas segitiga: %.2f\n", luas);
                        break;
                    case 2:
                        printf("menghitung keling segitiga\n");
                        printf("masukkan sisi1: \n");
                        scanf("%f", &sisi1);
                        printf("masukkan sisi2: \n");
                        scanf("%f", &sisi2);
                        printf("masukkan sisi3: \n");
                        scanf("%f", &sisi3);
                        keliling = sisi1 + sisi2 + sisi3;
                        printf("keliling segitiga: %.2f\n", keliling);
                        break;
                }
                break;
            case 4:
                printf("menghitung bangun datar trapesium\n");
                printf("akan menghitung luas(1) atau keliling(2) ?\n");
                scanf("%d", &pilihan);
                switch (pilihan) {
                    case 1:
                        printf("menghitung luas trapesium\n");
                        printf("masukkan sisi1: ");
                        scanf("%f", &sisi1);
                        printf("masukkan sisi2: ");
                        scanf("%f", &sisi2);
                        printf("masukkan tinggi: ");
                        scanf("%f", &tinggi);
                        if (sisi1 == 0 && sisi2 == 0) {
                            printf("anda ingin mencari sisi1 dan sisi2 trapesium !\n");
                            printf("masukkan keliling trapesium: ");
                            scanf("%f", &keliling);
                            sisi = keliling / 2;
                            printf("sisi trapesium: %.2f\n", sisi);
                        }
                        luas = (sisi1 + sisi2) * tinggi * 1 / 2;
                        printf("luas trapesium: %.2f\n", luas);
                        break;
                    case 2:
                        printf("menghitung keliling trapesium\n");
                        printf("masukkan sisi1: \n");
                        scanf("%f", &sisi1);
                        printf("masukkan sisi2: \n");
                        scanf("%f", &sisi2);
                        printf("masukkan sisi3: \n");
                        scanf("%f", &sisi3);
                        printf("masukkan sisi4: \n");
                        scanf("%f", &sisi4);
                        keliling = sisi1 + sisi2 + sisi3 + sisi4;
                        printf("keliling trapesium: %.2f\n", keliling);
                        break;
                }
                break;
            case 5:
                printf("menghitung bangun datar lingkaran\n");
                printf("akan menghitung luas(1) atau keliling(2) ?\n");
                scanf("%d", &pilihan);
                switch (pilihan) {
                    case 1:
                        printf("menghitung luas lingkaran\n");
                        printf("masukkan jari-jari lingkaran:\n");
                        scanf("%f", &jari2);
                        if (jari2 == 0) {
                            printf("anda ingin mencari jari-jari lingkaran !\n");
                            printf("masukkan keliling lingkaran:\n");
                            scanf("%f", &keliling);
                            jari2 = keliling / 2 * 3.14;
                            printf("jari-jari lingkaran: %.2f\n", jari2);
                        }
                        luas = pi * jari2 * jari2;
                        printf("luas lingkran: %.2f\n", luas);
                        break;
                    case 2:
                        printf("menghitung keliling lingkaran\n");
                        printf("masukkan jari-jari lingkaran:\n");
                        scanf("%f", &jari2);
                        keliling = 2 * 3.14 * jari2;
                        printf("keliling lingkaran: %.2f\n", keliling);
                        break;
                }
                break;
            case 6:
                printf("menghitung bangun datar layang-layang\n");
                printf("akan menghitung luas(1) atau keliling(2) ?\n");
                scanf("%d", &pilihan);
                switch (pilihan) {
                    case 1:
                        printf("menghitung luas layang-layang\n");
                        printf("masukkan d1 layang-layang:\n");
                        scanf("%f", &d1);
                        printf("masukkan d2 layang-layang:\n");
                        scanf("%f", &d2);
                        luas = d1 * d2 * 1/2;
                        printf("luas layang-layang: %.2f\n", luas);
                        break;
                    case 2:
                        printf("menghitung keliling layang-layang\n");
                        printf("masukkan sisi a:\n");
                        scanf("%f", &a);
                        printf("masukkan sisi b:\n");
                        scanf("%f", &b);
                        printf("masukkan sisi c:\n");
                        scanf("%f", &c);
                        printf("masukkan sisi d:\n");
                        scanf("%f", &d);
                        keliling = a + b + c + d;
                        printf("keliling layang-layang: %.2f\n", keliling);
                        break;
                }
                break;
        }




    } else if (pilihan == 2) {
        printf("Masukkan Bangun Ruang\n");
        printf("1. kubus\n");
        printf("2. balok\n");
        printf("3. limas segiempat\n");
        printf("4. kerucut\n");
        printf("5. bola\n");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("ingin menghitung luas(1) atau volume(2):");
                scanf("%d", &pilihan);
                switch (pilihan) {
                    case 1:
                        printf("menghitung luas kubus\n");
                        printf("masukkan sisi kubus: \n");
                        scanf("%f", &sisi);
                        if (sisi == 0) {
                            printf("anda ingin mencari sisi kubus !\n");
                            printf("masukkan keliling kubus: \n");
                            scanf("%f", &keliling);
                            sisi = keliling / 4;
                            printf("sisi kubus: %.2f\n", sisi);
                        }
                        luas = 6 * (sisi * sisi);
                        printf("luas kubus: %.2f\n", luas);
                        break;
                    case 2:
                        printf("menghitung volume kubus\n");
                        printf("masukkan sisi kubus: \n");
                        scanf("%f", &sisi);
                        volume = sisi * sisi * sisi;
                        printf("volume kubus: %.2f\n", volume);
                        break;
                }
                break;
            case 2:
                printf("ingin menghitung luas(1) atau volume(2):");
                scanf("%d", &pilihan);
                switch (pilihan) {
                    case 1:
                        printf("menghitung luas balok\n");
                        printf("masukkan panjang balok\n");
                        scanf("%f", &panjang);
                        printf("masukkan lebar balok\n");
                        scanf("%f", &lebar);
                        printf("masukkan tinggi balok\n");
                        scanf("%f", &tinggi);
                        luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
                        printf("luas balok: %.2f\n", luas);
                        break;
                    case 2:
                        printf("menghitung volume balok\n");
                        printf("masukkan panjang balok\n");
                        scanf("%f", &panjang);
                        printf("masukkan lebar balok\n");
                        scanf("%f", &lebar);
                        printf("masukkan tinggi balok\n");
                        scanf("%f", &tinggi);
                        volume = panjang * lebar * tinggi;
                        printf("volume balok: %.2f\n", volume);
                        break;
                }
                break;
            case 3:
                printf("ingin menghitung luas(1) atau volume(2):");
                scanf("%d", &pilihan);
                switch (pilihan) {
                    case 1:
                        printf("menghitung luas permukaan limas segiempat\n");
                        printf("masukkan luas sisi 1:");
                        scanf("%f", &sisi1);
                        printf("masukkan luas sisi 2:");
                        scanf("%f", &sisi2);
                        printf("masukkan luas sisi 3:");
                        scanf("%f", &sisi3);
                        printf("masukkan luas sisi 4:");
                        scanf("%f", &sisi4);
                        printf("masukkan luas sisi 5:");
                        scanf("%f", &sisi5);
                        luas = sisi1 + sisi2 + sisi3 + sisi4 + sisi5;
                        printf("luas permukaan limas segiempat: %.2f\n", luas);
                        break;
                    case 2:
                        printf("menghitung volume limas segiempat\n");
                        printf("masukkan luas alas:\n");
                        scanf("%f", &alas);
                        printf("masukkan tinggi:\n");
                        scanf("%f", &tinggi);
                        volume = alas * tinggi / 3;
                        printf("volume limas segiempat: %.2f\n", volume);
                        break;
                }
                break;
            case 4:
                printf("ingin menghitung luas(1) atau volume(2):");
                scanf("%d", &pilihan);
                switch (pilihan) {
                    case 1:
                        printf("ingin menghitung kerucut luas selimut(1) atau luas permukaan(2):");
                        scanf("%d", &pilihan);
                        switch (pilihan) {
                            case 1:
                                printf("menghitung luas selimut kerucut\n");
                                printf("masukkan jari-jari alas kerucut:\n");
                                scanf("%f", &jari2);
                                printf("masukkan panjang garis pelukis kerucut:\n");
                                scanf("%f", &pelukis);
                                luas = M_PI * jari2 * pelukis;
                                printf("luas selimut kerucut: %.2f\n", luas);
                                break;
                            case 2:
                                printf("menghitung luas permukaan kerucut\n");
                                printf("masukkan jari-jari:\n");
                                scanf("%f", &jari2);
                                printf("masukkan panjang garis pelukis:\n");
                                scanf("%f", &pelukis);
                                luas = (M_PI * jari2 * jari2) + (M_PI * jari2 * pelukis);
                                printf("luas permukaan kerucut: %.2f\n", luas);
                                break;
                        }
                        break;
                    case 2:
                        printf("menghitung volume kerucut\n");
                        printf("masukkan jari-jari:\n");
                        scanf("%f", &jari2);
                        printf("masukkan tinggi kerucut:\n");
                        scanf("%f", &tinggi);
                        volume = M_PI * jari2 * jari2 * tinggi * 1/3;
                        printf("volume kerucut: %.2f\n", volume);
                        break;
                }
                break;
            case 5:
                printf("ingin menghitung luas(1) atau volume(2):");
                scanf("%d", &pilihan);
                switch (pilihan) {
                    case 1:
                        printf("menghitung luas permukaan bola\n");
                        printf("masukkan jari-jari bola:\n");
                        scanf("%f", &jari2);
                        luas = 4 * M_PI * jari2 * jari2;
                        printf("luas permukaan bola: %.2f\n", luas);
                        break;
                    case 2:
                        printf("menghitung volume bola\n");
                        printf("masukkan jari-jari:\n");
                        scanf("%f", &jari2);
                        volume = M_PI * jari2 * jari2 * jari2 * 4/3;
                        printf("volume bola: %.2f\n", volume);
                        break;
                }
                break;
        }
    }
        return 0;
}