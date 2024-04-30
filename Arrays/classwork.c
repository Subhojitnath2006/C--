// #include <stdio.h>
// int main(){

//     char s[]="subhojit";
//     int count=0;
//     int i=0;
//     while(s[i]!='\0'){
//         count++;
//         i++;
//     }
//     printf("the length is: %d",count);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){

//     char s[100];
//     printf("enter a sentence: \n");
//     gets(s);
//     int count=1;
//    for(int i=0;s[i]!='\0';i++){
//      if((s[i]==' ' && s[i+1]!=' ') || s[i]=='\n' || s[i]=='\t'){
//         count++;
//      }
//    }
    
//     printf("the no of word is: %d",count);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// int main(){

//     char s1[100];
//     printf("enter a sentence: \n");
//     gets(s1);
//     char s2[100];
//     printf("enter a sentence: \n");
//     gets(s2);
//     bool flag=true;
//    for(int i=0;s1[i]!='\0'&& s2[i]!='\0';i++){
//      if(s1[i]!=s2[i]){
//         flag= false;
//         break;
//      }
//    }
//     if(flag==true){
//         printf("strings are same");
//     }else{
//         printf("strings are different");
//     }
   
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// int main(){

//     char s1[100];
//     printf("enter a sentence:");
//     gets(s1);
//     char s2[100];
    
//     int i;
//    for( i=0;s1[i]!='\0'; i++){
//      s2[i]=s1[i];
     
//    }
//    s2[i]!='\0';
//     // puts(s2);

//     printf("string 2 is: %s",s2);
    
//     return 0;
// }

