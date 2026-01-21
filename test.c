# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main(void){
    setlocale(LC_ALL,"");
    int lignes,cols,i,j;
    //int cols ;
    i=0;
    j=0;
    int mat1[lignes][cols],mat2[lignes][cols],mat3[lignes][cols];
    printf(" Entrez le nombre de ligne des matrices \n ");
    scanf("%d",&lignes);
    printf(" Entrez le nombre de ligne des matrices \n");
    scanf("%d",&cols);
    for(int i=0;i<lignes;i++ )
    {
        for(int j=0; j<cols; j++)
        {
            printf("Entrez le nombre de la %d ieme ligne et la %d ieme cols de la premmiere matrice \n",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    
    for(int i=0;i<lignes;i++ )
    {
        for(int j=0; j<cols; j++)
        {
            printf("Entrez le nombre de la %d ieme ligne et la %d ieme cols de la deuxieme matrice \n",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<lignes;i++ )
    {
        for(int j=0; j<cols; j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
            printf("%d ",mat3[i][j]);
        }
        printf("\n");

    }
    // while ( i<lignes)
    // {
    //     while (j<cols)
    //     {
    //         mat3[i][j]=mat1[i][j]+mat2[i][j];
    //         printf("%d",mat3[i][j]);
    //         j=j+1;
            
    //     }
    //     i=i+1;
    //     printf("\n");
        
    /*}*/
    

    return 0;
}
