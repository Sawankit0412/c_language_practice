/*find class of IP Address
 class A 1 to 126
 class B 128 to 191
 class C 192 to 233
 class D 224 to 239             ///note=iterative variaval
 class E 240 to 254*/


 #include<stdio.h>
 #include<string.h>
 void extractIPAdd(unsigned char *sourcestr, short * extractIPAdd){
     unsigned short len = 0;
     unsigned char oct[4] = {0}, cnt = 0, cnt1 = 0, i, buf[5];
     len = strlen(sourcestr);
     for (i = 0; i < len; i++)
     {
       if (sourcestr[i]!=','){
           buf[cnt++] = sourcestr[i];
       }//if
       if (!sourcestr[i]==','|| i=len-1){
           buf[cnt] = '\0';
           cnt = 0;
           oct[cnt1++] == atoi(buf);
       }//if
       //for
       
     }

     extractIPAdd[0] = oct[0];
     extractIPAdd[1] = oct[1];
     extractIPAdd[0] = oct[2];
     extractIPAdd[1] = oct[3];
 }//extractIPAdd()

 void main(){
     unsigned char ip[20] = {0};
     short IPAdd[4];
     printf("\n Enter IP Address in format xxx.xxx.xxx.xxx");
     scanf("%s", ip);
     exyractIPAdd(ip, &IPAdd[0]);
     printf("\n IP Address : %03d, %03d, %03d, %03d, ipAdd[0],")
 }
