#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char name[10];
    char number[20];
};

struct node_type {
    struct Book data;
    struct node_type *next;
};
typedef struct node_type list;

void showList(list*);    //displays list contents
//list *reverse(list*);    //reverses the list
list *insert(list*,list*);
list *createNode(void);
list *delete(list*,struct Book);
list *find(list*,struct Book);

int main()
{
    list *temp, *start = NULL; //start will point to first node of the list
    char pwd[20];
    
    // tmpname, num
    char tmpname[10];
    char tmpnum[20];
    
    int menu = 0;
    while (1) {
        int whilecnt = 0;
        printf("1. 등록   2. 전체검색 3. 특정인검색    4. 제거   5.종료\n");
        printf("메뉴 선택:"); scanf("%d", &menu);
        switch (menu) {
            case 1:
                printf("비밀번호:");
                while (scanf("%s", pwd)) {
                    if (!strcmp(pwd, "qwer1234")) {
                        break;
                    }
                    whilecnt++;
                    if (whilecnt < 3) {
                        printf("비밀번호(%d회실패):", whilecnt);
                    }
                    else
                    {
                        printf("비밀번호(%d회실패): 등록할 수 없음!\n", whilecnt);
                        printf("프로그램을 종료합니다.\n");
                        return 0;
                    }
                }
                printf("등록할 이름: "); scanf("%s",tmpname);
                printf("전화번호: "); scanf("%s",tmpnum);
                temp = createNode();
                strcpy(temp->data.name, tmpname);
                strcpy(temp->data.number, tmpnum);
                temp->next = NULL;
                if(!find(start,temp->data))
                    start = insert(start,temp);
                break;
                
            case 2:
                showList(start);
                break;
                
            case 3:
                printf("검색할 이름: "); scanf("%s",tmpname);
                temp = createNode();
                strcpy(temp->data.name, tmpname);
                strcpy(temp->data.number, "0");
                temp->next = NULL;
                while (!find(start, temp->data)) {
                    printf("%s\t%s\n", start->data.name, start->data.number);
                }
                break;

            case 4:
                break;
            case 5:
                return 0;
                
            default:
                break;
        }
    }
    
}

/* Function to create a Node. Allocates memory for a new node. */
list *createNode()
{
    list *new;
    new = (list *)malloc(sizeof(list));
    return(new);
}


/* Recursive function to create and insert a new node at the end of the list */
list *insert(list *st, list *ndt)
{
    if(!st) return(ndt);
    st->next = insert(st->next, ndt);
    return(st);
}


/*
 Function to search a data item in the list and return the node address
 that matches data. In case no match found, returns NULL
 */
list *find(list *st, struct Book b)
{
    while(st){
        if(!strcmp(st->data.name, b.name))
            return (st);
        else
            st = st->next;
    }
    return(st);
}

void showList(list *temp)
{
    printf("<< 전화번호목록 >>\n");
    while(temp)
    {
        printf("%s\t%s\n", temp->data.name, temp->data.number);
        temp = temp->next;
    }
    printf("\n");
}


///* Function to reverse the list */
//list *reverse(list *l)
//{
//    list *nxt, *temp;
//    if(!l) return(l);
//    else
//    {
//        nxt = l->next;
//        l->next = NULL;
//        while(nxt)
//        {
//            temp = nxt->next;
//            nxt->next = l;
//            l = nxt;
//            nxt = temp;
//        }
//        return(l);
//    }
//}


/* Recursive function for deleting a node from the list */
list *delete(list *st, struct Book b)
{
    list *tmp;
    if(!st) return(st);
    if(!strcmp(st->data.name, b.name))
    {
        tmp = st;
        st = st->next;
        free(tmp);
        return(st);
    }
    st->next = delete(st->next,b);
    return(st);
}
