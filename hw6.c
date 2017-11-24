typedef struct {
	char data[4096];
	int key;
} item;

const char* names[] = {
	"bill",
	"neil",
	"john",
	"rick",
	"alex"
};

int keys[] = {
	3,
	4,
	2,
	5,
	1
};

void sort(item* a, int n)
{
	int i = 0, j = 0;

	for(; i < n+1; i++) {
		for(j =0; j < n+1; j++) {
			if(a[j].key > a[j+1].key) {
				item t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
		n--;
	}
}

int main()
{
	int i;

	item *array = (item*)malloc(sizeof(item)*5);
    item it;
	for( i=0; i<5; ++i ) {
        array[i].key = keys[i];
        strcpy(array[i].data, names[i]);
	}

    printf("Before sorting\n");
	for(i = 0; i < 5; i++)
		printf("array[%d] = {%s, %d}\n", i, array[i].data, array[i].key);
	sort(array,5);
    printf("\n\nAfter sorting\n");
	for(i = 0; i < 5; i++)
		printf("array[%d] = {%s, %d}\n", i, array[i].data, array[i].key);
	for(i = 0; i < 5; i++)
        free(array[i].data);


    return 0;

}
