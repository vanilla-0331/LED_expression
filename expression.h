#define EXPRESSION 16

/* 表情の配列定義 */
int normal1[] = {125, 124, 119, 118, 113, 112, 107, 106, 101, 100, 95, 94, 89, 88, 83, 82, 38, 31, 27, 22, 16, 15, 14, 13};
int normal2[] = {125, 124, 119, 118, 113, 112, 107, 106, 101, 100, 95, 94, 89, 88, 83, 82, 48, 47, 46, 45, 44, 43, 42, 41, 38, 31, 28, 21, 17, 12, 6, 5, 4, 3};
int tere[] = {138, 132, 125, 124, 119, 118, 113, 112, 107, 106, 101, 100, 95, 94, 89, 88, 83, 82, 66, 64, 53, 51, 38, 31, 27, 22, 16, 15, 14, 13};
int nikori[] = {137, 136, 131, 130, 126, 125, 124, 119, 118, 117, 114, 113, 112, 111, 108, 107, 106, 105, 101, 100, 95, 94, 67, 65, 52, 50, 48, 47, 46, 45, 44, 43, 42, 41, 38, 31, 28, 21, 17, 12, 6, 5, 4, 3};
int mu[] = {139, 138, 129, 128, 125, 124, 119, 118, 111, 108, 101, 100, 95, 94, 91, 90, 81, 80, 67, 65, 52, 50, 38, 31, 27, 22, 16, 15, 14, 13};
int smile[] = {139, 138, 129, 128, 125, 124, 119, 118, 111, 108, 101, 100, 95, 94, 91, 90, 81, 80, 67, 65, 52, 50, 48, 47, 46, 45, 44, 43, 42, 41, 38, 31, 27, 22, 16, 13, 5, 4};
int wink[] = {137, 136, 129, 128, 125, 124, 119, 118, 113, 112, 108, 101, 100, 95, 94, 81, 80, 67, 65, 52, 50, 48, 47, 46, 45, 44, 43, 42, 41, 38, 31, 27, 22, 16, 13, 5, 4};
int tehe[] = {137, 136, 129, 128, 125, 124, 119, 118, 113, 112, 108, 101, 100, 95, 94, 81, 80, 67, 65, 52, 50, 49, 48, 38, 32, 30, 28, 27, 22, 16, 15, 14, 13};
int suya1[] = {115, 104, 102, 101, 100, 99, 96, 95, 94, 93, 67, 65, 52, 50, 38, 31, 27, 26, 25, 24, 23, 22};
int suya2[] = {115, 104, 102, 101, 100, 99, 96, 95, 94, 93, 67, 65, 52, 50, 48, 47, 46, 45, 44, 43, 42, 41, 38, 31, 28, 27, 25, 24, 23, 22, 14, 12, 6, 5};
int evil1[] = {126, 125, 118, 117, 114, 113, 112, 111, 108, 107, 106, 105, 101, 100, 95, 94, 67, 65, 52, 50, 38, 31, 27, 26, 25, 24, 23, 22};
int upset[] = {149, 143, 142, 141, 139, 135, 130, 125, 120, 116, 112, 106, 101, 94, 89, 82, 65, 62, 61, 60, 57, 56, 55, 52, 49, 45, 44, 40, 39, 30, 29, 20, 19, 15, 14, 10, 8, 7, 6, 3, 2, 1};
int cry1[]= {125, 124, 119, 118, 114, 113, 111, 108, 107, 105, 102, 101, 100, 99, 96, 95, 94, 93, 89, 88, 83, 82, 81, 79, 77, 51, 36, 35, 34, 33, 27, 22};
int hawawa[] = {151, 150, 141, 140, 137, 136, 131, 130, 123, 120, 113, 112, 107, 106, 103, 102, 93, 92, 78, 76, 71, 69, 67, 65, 62, 61, 60, 57, 56, 55, 52, 50, 49, 45, 44, 40, 39, 30, 29, 20, 19, 15, 14, 10, 8, 7, 6, 3, 2, 1};
int sulk[] = {126, 125, 118, 117, 114, 113, 112, 111, 108, 107, 106, 105, 101, 100, 95, 94, 67, 65, 52, 50, 48, 41, 37, 32, 27, 26, 25, 24, 23, 22, 17, 12, 8, 1};
int batu[] = {127, 123, 120, 116, 114, 112, 107, 105, 101, 94, 90, 88, 83, 81, 79, 75, 72, 68, 27, 26, 23, 22, 18, 15, 14, 11};

/* プリセット定義 */
int *all[] = {normal1, normal2, tere, nikori, mu, smile, wink, tehe, suya1, suya2, evil1, upset, cry1, hawawa, sulk, batu};

/* プリセット要素数定義 */
int all_sizes[] = {24, 34, 30, 44, 30, 38, 37, 33, 22, 34, 28, 42, 32, 50, 34, 26};

/* プリセット配列定義 */
int **presets[1] = {all};
int *presets_sizelist[1] = {all_sizes};
int presets_sizes[1] = {EXPRESSION};
