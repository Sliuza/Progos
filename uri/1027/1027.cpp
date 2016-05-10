#include <iostream>
#include <algorithm>
using namespace std;

typedef struct{
   int x;
   int y;
} STR_TYPE;

int count_critical(STR_TYPE coords[],int N);
int findInitial(STR_TYPE coords[],int N,int *i);
int findNextPoint(STR_TYPE coords[],int i);
int findNext(STR_TYPE coords[],int N,int i,int up,int down,int uD);
void quickSort(STR_TYPE coords[], int left, int right);

int main(){
   int N,i,x,y;
   STR_TYPE coords[2000];
   for(i = 0;i<2000;i++){
   	coords[i].x = -1;
   	coords[i].y = 0;
   }
	while (cin >> N) {
	   i = 0;
	   while(i<N){
		   cin >> coords[i].x >> coords[i].y ;
		   	
		   i++;
		}
		quickSort(coords,0,N-1);
		i=0;
		//while(i<N){
		//	cout << coords[i].x << " " << coords[i].y << endl ;
		//	i++;
		//}
		cout << count_critical(coords,N) << endl;
		
	}

	return 0;
}
int count_critical(STR_TYPE coords[],int N){
	int fp[2000],points=0,i = 0 ,j = 0,p,max = 1,cont,total,up[2000],down[2000],uD;
	fp[0] = findInitial(coords,N,&i);
	if(coords[i].y>coords[fp[0]].y){
		up[0] = coords[i].y;
		down[0] = coords[fp[0]].y;
	}
	else{
			up[0] = coords[fp[0]].y;
			down[0] = coords[i].y;
	}

	if(fp[0]!=-1)
		j++;
	
	while(i<N){
		i++;
		fp[j] = findNext(coords,N,i,0,0,-1);
		if(coords[i].y>coords[fp[j]].y){
			up[j] = coords[i].y;
			down[j] = coords[fp[j]].y;
		}
		else{
			up[j] = coords[fp[j]].y;
			down[j] = coords[i].y;
		}
		j++;	
	}
	total = j;
	j = 0;
	while(total>j){	
		p = fp[j];
		cont = 1;
		if(coords[fp[j]].y == up[j]){
			uD = 1;
		}
		else
			uD = 0;
		while(p!=-1){
			cont++;
			if(uD == 1){
				p = findNext(coords,N,p,up[j],down[j],uD);
				uD = 0;
			}
			else{
				p = findNext(coords,N,p,up[j],down[j],uD);
				uD = 1;
			}
		}
		if(cont>max){
			max = cont;
		}
		j++;
	}
	return max;
}

int findInitial(STR_TYPE coords[],int N,int *i){
	int j,xnp,xlp;
	while((*i)<N){
		j = findNextPoint(coords,(*i));
		while(j<N){
			if(coords[(*i)].y-coords[j].y==2 || coords[j].y - coords[(*i)].y == 2){
				return j;
			}
			j++;
		}
		(*i)++;
	}
	if((*i) == N)
		return -1;
	if(j == N)
		return findInitial(coords,N,i);
	return findInitial(coords,N,i);

}
int findNext(STR_TYPE coords[],int N,int i,int up,int down,int uD){
	int j,xnp,xlp;
	j = findNextPoint(coords,i);
	if(uD == -1)
		while(j<N){
			if(coords[i].y-coords[j].y==2 || coords[j].y - coords[i].y == 2){
				return j;
			}
			j++;
		}
	else{
		if(uD == 1){
			while(j<N){
				if(coords[j].y==down){
					return j;
				}
				j++;
			}
		}
		else{
			while(j<N){
				if(coords[j].y== up){
					return j;
				}
				j++;
			}
		}
	}
	
	if(i == N || j == N)
		return -1;

}
int findNextPoint(STR_TYPE coords[],int i){
	int j = i;
	while(coords[i].x == coords[j].x)
		j++;
	return j;
}


void quickSort(STR_TYPE coords[], int left, int right){
    int i, j, x;
    STR_TYPE y;
    i = left;
    j = right;
    x = coords[(left + right) / 2].x;

    while(i <= j){
        while(coords[i].x < x && i < right){
            i++;
        }
        while(coords[j].x > x && j > left){
            j--;
        }
        if(i <= j){
            y = coords[i];
            coords[i] = coords[j];
            coords[j] = y;
            i++;
            j--;
        }
    }
    if(j > left){
        quickSort(coords, left, j);
    }
    if(i < right){
        quickSort(coords,  i, right);
    }
}