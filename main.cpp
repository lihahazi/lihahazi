#include <iostream>
#include "header/swap.h"

//#include <iostream>
//#define day 7
//int main() {
//    int a=10;//int 整型
//    int _a=11;
//    int _12a=111;
//
//    std::cout <<"a="<< a<< std::endl;
//    std::cout<<"一周有"<<day<<"天"<<std::endl;
//    return 0;
//}
/*
 * windows 写法
 * */
//#include <iostream>
//using namespace std;
//int main(){
//    cout <<"hello world" <<endl;
//    system("pause");
//    return 0;
//}
//#include <iostream>
//int main(){
//    //整型
//    //1，短整型(-32768~32767)
//    short num1=32768;//输出 -32768
//    //2。整型
//    int num2=32768;
//    //3。长整形
//    long num3=10;
//    //4，长长整型
//    long long num4=10;
//    std::cout<<sizeof (num4 )<<std::endl;
//    std::cout<<num2<<std::endl;
//    std::cout<<num3<<std::endl;
//    std::cout<<num4<<std::endl;
//    return 0;
//}
//#include <iostream>
//int main(){
//    float a=3.1411111;
//    double b=3.141111111111111;
//    std::cout<<a<<std::endl;
//    std::cout<<b<<std::endl;
//    std::cout<<sizeof(float)<<std::endl;
//    std::cout<<sizeof(double)<<std::endl;
//    //科学计数法
//    float f1=3e2;//3*10^2;
//    std::cout<<"f1="<<f1<<std::endl;//300
//    float f2=3e-2;//3*0.1^2;
//    std::cout<<"f2="<<f2<<std::endl;//0.03
//    return 0;
//}

//#include <iostream>
//int main(){
//    char ch='f';//只能用单引号引用；
//    //char ch1="s";报错
//    //char ch2='abc';//输出c 没报错但是输出结果错误 单引号内只能引用一个字符
//    std::cout<<ch<<std::endl;//f
//    std::cout<<sizeof (ch)<<std::endl;//1
////    std::cout<<ch2<<std::endl;
//    std::cout<<(int)ch<<std::endl;//(int) 强制转为整型查看对应的ASCLL编码
//    return 0;
//}

//#include <iostream>
//int main(){
//    //转义字符
//    //换行字符 \n
//    std::cout<<"hello word\n";
//    /*反斜杠\\
//     * */
//     std::cout<<"\\"<<std::endl;
//    //水平制表符 \t  作用可以整齐的输出数据
//    std::cout<<"aaaa\thelloword"<<std::endl;
//    std::cout<<"aaaa\thelloword"<<std::endl;
//    std::cout<<"aaaaa\thelloword"<<std::endl;
//    std::cout<<"aaaaaaa\thelloword"<<std::endl;
//    return 0;
//}

//#include<iostream>
//int main(){
//    char str[]="helloword";
//    std::cout<<str<<std::endl;
//    return 0;
//}
//#include <iostream>
//int main(){
//    int a=10,b=10;
//    std::cout<<(a||b)<<std::endl;
//    std::cout<<(a&&b)<<std::endl;
//    std::cout<<(!a)<<std::endl;
//    return 0;
//}
//#include <iostream>
//int main(){
//    float score =0;
//    std::cout<<"请输入您的成绩"<<std::endl;
//    std::cin>>score;//终端输入
//    if(score>=600){
//        std::cout<<"niu"<<std::endl;
//    }else if(score>=500){
//        std::cout<<"niu1"<<std::endl;
//    }else{
//        std::cout<<"continue"<<std::endl;
//    }
//    return 0;
//}
//#include <iostream>
//int main(){
//    //打印0-9
//    int count=0;
//    while(count<10){
//        std::cout<<count<<std::endl;
//        count++;
//    }
//    return 0;
//}
//#include<iostream>
//int gase(){
//    int player=0;
//    std::cout<<"请输入--"<<std::endl;
//    std::cin>>player;
//    return player;
//}
//
//int main(){
//    //添加随机数种子 利用当前系统时间生成随机数，防止每次的随机数都一样
//    srand((unsigned int)time(NULL));
//    int num=rand()%100; //生成一个0-99的数字
//    std::cout<<num<<std::endl;
//    while(1){
//        int player=gase();
//        if(player<num){
//            std::cout<<player<<"猜小了请继续--"<<std::endl;
//        }else if(player>num){
//            std::cout<<"猜大了请继续--"<<std::endl;
//        }else{
//            std::cout<<"猜对了--"<<std::endl;
//            break;
//        }
//    }
//    return 0;
//}

//#include<iostream>
//int main(){
//    int count=0;
////    do{
////        std::cout<<count<<std::endl;
////        count++;
////        if(count>7)break;
////    }while(count<10);
// do{
//     std::cout<<count<<std::endl;
//     count++;
// }while(count);
// while(count){
//     std::cout<<count<<std::endl;
//     count++;
// }
//    return 0;
//}

/*
 * 练习案例:水仙花数
案例描述:水仙花数是指一个3位数，它的每个位上的数字的的3次幂之和等于它本身
例如:1^3+5^3+3^3=153
请利用do.…while语句，求出所有3位数中的水仙花数
// */
//int main(){
//    int num=100;
//    int a,b,c,result;
//    do{
//
//        c=num/100;
//        b=(num/10)%10;
//        a=num%10;
//        if(pow(c,3)+pow(b,3)+pow(a,3)==num){
//            std::cout<<num<<std::endl;
//        }
//        num++;
//    } while (num<1000);
//    return 0;
//}
//int main(){
//    for(int i=0;i<10;i++){
//        std::cout<<i<<std::endl;
//    }
//    return 0;
//}
// int main(){
//     //取余相当于商，取模相当于取余数
//     for(int i=1;i<=100;i++){
//         if(i/10%10==7||i%10==7||i%7==0){
//             std::cout<<"敲桌子"<<std::endl;
//         }else{
//             std::cout<<i<<std::endl;
//         }
//     }
//    return 0;
// }
//int main(){
//    for(int i=0;i<10;i++){
//        for(int j=0;j<10;j++){
//            std::cout<<"* ";
//        }
//        std::cout<<"\n";
//    }
//    return 0;
//}

//int main(){
//    for(int i=1;i<9;i++){
//        for(int j=1;j<=i;j++){
//            std::cout<<i<<"*"<<j<<"="<<i*j<<" ";
//        }
//        std::cout<<std::endl;
//    }
//}

//int main(){
//    std::cout<<"请选择副本难度"<<std::endl;
//    std::cout<<"1.普通"<<std::endl;
//    std::cout<<"2.中等"<<std::endl;
//    std::cout<<"3.偏难"<<std::endl;
//    int select=0;
//    std::cin>>select;
//    switch (select) {
//        case 1:
//            std::cout<<"您选择的普通"<<std::endl;
//            break;
//        case 2:
//            std::cout<<"您选择的中等"<<std::endl;
//            break;
//        case 3:
//            std::cout<<"您选择的偏难"<<std::endl;
//            break;
//        default:
//            break;
//    }
//    return 0;
//}

//int main(){
//    for(int i=0;i<10;i++){
//        if(i>6)break;
//        std::cout<<i<<std::endl;
//    }
//    return 0;
//}

//int main(){
//    for(int i=0;i<10;i++){
//        for(int j=0;j<10;j++){
//            if(j==5)break;
//            std::cout<<"* ";
//        }
//        std::cout<<std::endl;
//    }
//}

//int main(){
//    for(int i=0;i<10;i++){
//        if(i%2==0){
//            continue;
//        }
//        std::cout<<i<<" ";
//    }
//    return 0;
//}
//
//int main(){
//    std::cout<<"1.xxxxx"<<std::endl;
//    std::cout<<"2.xxxxx"<<std::endl;
//    goto FLAG;
//    std::cout<<"3.xxxxx"<<std::endl;
//    std::cout<<"4.xxxxx"<<std::endl;
//    std::cout<<"5.xxxxx"<<std::endl;
//    FLAG:
//    std::cout<<"6.xxxxx"<<std::endl;
//    std::cout<<"7.xxxxx"<<std::endl;
//}
/*输出
 * 1.xxxxx
2.xxxxx
6.xxxxx
7.xxxxx

 * */

//int main(){
//    int arr[5]={10,7,8,6};
//    for(int i=0;i<sizeof (arr)/sizeof(arr[0]);i++){
//        std::cout<<"下标"<<i <<"对应的是 "<<arr[i]<<std::endl;
//    }
//    /*输出：
//     * 下标0对应的是 10
//下标1对应的是 7
//下标2对应的是 8
//下标3对应的是 6
//下标4对应的是 7
//     */
//    return 0;
//}

//int main() {
//    int arr[] = {101, 17, 18, 16};
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//        std::cout << arr[i] << std::endl;
//    }
//    /*输出：
//     * 101
//      17
//      18
//      16
//     * */
//    return 0;
//}

//int main() {
//    int arr[10] = {20, 30, 40, 4, 6};
//    std::cout << "整个数组所占的内存空间为：" << sizeof(arr) << std::endl;
//    std::cout << "每个数组元素所占的内存空间为：" << sizeof(arr[0]) << std::endl;
//    std::cout << "数组的首地址为：" << arr << std::endl;
//    std::cout << "数组中第一个元素的地址：" << &arr[0] << std::endl;//要加地址符号
//    std::cout << "数组中第二个元素的地址：" << &arr[1] << std::endl;//要加地址符号
//    /*输出
//     * 整个数组所占的内存空间为：40
//     * 每个数组元素所占的内存空间为：4
//     * */
//    return 0;
//}
/*练习案例2:数组元素逆置 I
*案例描述:请声明一个5个元素的数组，并且将元素逆置.
*(如原数组元素为:1,3,2,5,4;逆置后输出结果为:4,5,2,3,1);
*/

//int main(){
//    int arr[]={1,3,2,5,4};
//    int len=sizeof (arr)/sizeof (arr[0]);
//    int start=0,temp,end=len-1;
//    while(start!=end){
//        temp=arr[start];
//        arr[start]=arr[end];
//        arr[end]=temp;
//        start++;
//        end--;
//    }
//    for(int i=0;i<len;i++){
//        std::cout<<arr[i]<<" ";
//    }
//    return 0;
//}

//冒泡排序
//int main(){
//    int arr[]={4,2,8,0,5,7,1,3,9};
//    int temp,len=sizeof (arr)/sizeof (arr[0]);
//    for(int i=0;i<len;i++){
//        for(int j=0;j<len-i;j++){
//            if(arr[j]>arr[j+1]){
//                temp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=temp;
//            }
//        }
//    }
//        for(int i=0;i<len;i++){
//        std::cout<<arr[i]<<" ";
//    }
//    return 0;
//}

//int main(){
//    int arr[2][3];
//    arr[0][0]=0;
//    arr[0][1]=3;
//    arr[0][2]=5;
//    arr[1][0]=8;
//    arr[1][1]=9;
//    arr[1][2]=5;
//    for(int i=0;i<2;i++){
//        for(int j=0;j<3;j++){
//            std::cout<<arr[i][j]<<" ";
//        }
//    }
//
//    return 0;
//}
//int main(){
//    int arr[2][3]={{1,2,3},{4,5,6}};
//        for(int i=0;i<2;i++){
//        for(int j=0;j<3;j++){
//            std::cout<<arr[i][j]<<" ";
//        }
//    }
//        //输出：1 2 3 4 5 6
//    return 0;
//}

//int main() {
//    int arr[2][3] = {4, 55, 66, 88, 11};
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 3; j++) {
//            std::cout << arr[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//    //输出：
//    /*4 55 66
//      88 11 0 */
//    return 0;
//}

//int main(){
//    int arr[][3]={4, 55, 66, 88, 11};
//        for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 3; j++) {
//            std::cout << arr[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//   /* 4 55 66
//    88 11 0*/
//}

//int main() {
//    int arr[2][3] = {{1, 2, 3},
//                     {4, 5, 6}};
//    std::cout<<sizeof (arr)<<std::endl;//24
//    std::cout<<"第一行元素占用内存："<<sizeof (arr[0])<<std::endl;//12 arr[0]代表第一行
//    std::cout<<"第一个元素占用内存："<<sizeof (arr[0][0])<<std::endl;//4
//    std::cout<<"二维数组的行数："<<sizeof (arr)/sizeof (arr[0])<<std::endl;//2
//    std::cout<<"二维数组的列数："<<sizeof (arr[0])/sizeof (arr[0][0])<<std::endl;//3
//    //获取二维数组的首地址
//    //uintptr_t是一个用于表示指针的整数类型 Linux 上位数过大不能使用int 强制转换为整数类型
//    std::cout<<"二维数组的首地址："<<(uintptr_t) arr<<std::endl;//6168015840
//    std::cout<<"二维数组的第一行的地址："<<(uintptr_t) arr[0]<<std::endl;//6168015840
//    std::cout<<"二维数组的第二行的地址："<<(uintptr_t) arr[1]<<std::endl;//6168015852
//    std::cout<<"二维数组的第一个元素的地址："<<(uintptr_t) &arr[0][0]<<std::endl;//6168015840
//    std::cout<<"二维数组的第一个元素的地址："<<(uintptr_t) &arr[0][1]<<std::endl;//6168015844
//    return 0;
//}

//int main() {
//    int scores[3][3] = {{100, 100, 100},
//                  {90,  80,  70},
//                  {60,  70,  90}};
//    int arr[3]={},sum=0;
//    std::string name[3]={"张三","李四","王武"};
//    for(int i=0;i<sizeof (scores)/sizeof (scores[0]);i++){
//        for(int j=0;j<sizeof (scores[0])/sizeof (scores[0][0]);j++){
//            sum+= scores[i][j];
//            arr[i]=sum;
//        }
//        std::cout<<name[i]<<"的成绩："<<arr[i]<<std::endl;
//        sum=0;
//    }
//    return 0;
//
//}

//int add(int num1,int num2){
//    return num1+num2;
//}
//
//int main(){
//   int result= add(2,5);
//   std::cout<<result<<std::endl;
//   return 0;
//}

//void swap(int a,int b){
//    int temp;
//    temp=a;
//    a=b;
//    b=temp;
//    std::cout<<a<<" "<<b<<std::endl;
//}
//
//int main(){
//    int a=3,b=5;
//    swap(a,b);
//    std::cout<<"main函数中的："<<a<<" "<<b<<std::endl;
//    //实参未发生变化
//    return 0;
//}

//void test01(){
//    std::cout<<"lihaha在此"<<std::endl;
//}
//void test02(int a){
//    std::cout<<a<<std::endl;
//}
//std::string test03(){
//    char str[] ="helloworld";
//    return str;
//}
//int test04(int num1,int num2){
//    return num1+num2;
//}
//int main(){
//    test01();
//    test02(2);
//    std::cout<<test03()<<std::endl;
//    std::cout<<test04(2,3)<<std::endl;
//    /*lihaha在此
//    2
//    helloworld
//    5*/
//    return 0;
//}

//可以多次声明,提前告诉编译器函数的存在，可以利用函数声明
//int max(int a,int b);
//int max(int a,int b);
//
//int main(){
//    int result=max(33,44);
//    std::cout<<result<<std::endl;
//    return 0;
//}
////定义
//int max(int a,int b){
//    return a>b?a:b;
//}

int main(){
    swap(3,4);
}
