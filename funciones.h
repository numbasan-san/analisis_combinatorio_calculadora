
void variacionCR(char *datos, int n, int r, int i = 0, int *indexs = NULL){
    if(indexs==NULL){
        indexs = new int[r];
    }
    if (i < r){
        for (int x = 0; x < n; x++){
            indexs[i] = x;
            variacionCR(datos, n, r, i + 1, indexs);
        }
    } else {
        cout<<"\n\t";
        for(int w = 0; w < r; w++){
            cout<<datos[indexs[w]];
        }
    }
}


