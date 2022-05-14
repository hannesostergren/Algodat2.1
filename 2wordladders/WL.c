#include <stdio.h>
#include <stdlib.h>

int a;
int b;
char** words;
char** query;


struct next_t{
    char** elem;
    char** next;
};
void read_file(){
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n", a);
    printf("%d\n", b);

    words = malloc(a);
    query = malloc(b);
	for(int i = 0; i < a; i++){
        words[i] = malloc(a);
        scanf("%s", words[i]);
        printf("%s\n", words[i]);
    }
    for(int i = 0; i < b; i++){
        query[i] = malloc(b);
        scanf("%s", query[i]);
        printf("%s\n", words[i]);
    }
}

int cond(char* v, char* w){

}

int BFS(char** G, char* root){
    char** Q;
    int* visited;
    char* v;
    char* w;
    Q = malloc(a);
    int inqueue = 0;
    visited = calloc(0, a);

    visited[0] = !visited[0];
    Q[0] = root;

    if (Q[0] != NULL){
        v = Q[0];
        for (int i = 0; i < a-1; i++){
            Q[i] = Q[i+1];
        }
        w = cond(v, w);
        if (w != NULL){
            for(int i = 0; i < a; i++){
                if(w == Q[i]){
                    inqueue = 1;
                }
            }
            if(!inqueue){
                Q[];
            }
        }
    }

}

int main(int argc, char* argv[])
{
    read_file();
}