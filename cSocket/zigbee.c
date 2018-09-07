//#include <wiringPi.h>
//#include <wiringSerial.h>
//#include <zigbee.h>
#include <unistd.h>
#include <stdio.h>

int fd;//文件设备描述符
//unsigned char cmd[zigbee_send_data_num]={0};
//unsigned char recvdata[zigbee_data_group][zigbee_recv_data_num]={0};

//发送命令
/* 
void send_cmd(void)
{
  char a; 
  for(a=0;a<zigbee_send_data_num;a++)
  {
    serialPutchar(fd,cmd[a]);//发送采集命令
    sleep(1);  
  }

}
*/ 
//检查数据的有效性
char zigbee_check(void)
{
  unsigned char i,j;
  for(i=0;i<zigbee_data_group;i++)
  {
   for(j=0;j<zigbee_recv_data_num;j++)
   {
    if(recvdata[i][j]==(-1)) return 0;
   }
  }
  return 1;
}

//采集数据
void collect_data(void)
{
 char i,j=0;
 fd=serialOpen("/dev/ttyAMA0",115200);//选择串口并设置波特率
 if(fd) printf("collect success\n");
 else printf("collect error\n");
 serialFlush(fd);
 cmd[zigbee_send_data_num]=1;//数据采集位置1
 for(i=0;i<zigbee_data_group;i++)
 {
  cmd[0]=i+1;
  write(fd,cmd,zigbee_send_data_num);
  printf("group%ucmd send\n",i+1);
  sleep(1);
  read(fd,recvdata[i],zigbee_recv_data_num);
  printf("group%u over\n",i+1);
  serialFlush(fd);
 }
}

//全网通信
void group_cmd(unsigned int pwm,unsigned char light_mode,\
	   	unsigned char night_mode,unsigned char act)
{
 char i=0;
 unsigned char pwm_h,pwm_l;
 pwm_h=pwm/256;
 pwm_l=pwm%256;
 cmd[i]=99;
 i++;
 cmd[i]=pwm_h;
 i++;
 cmd[i]=pwm_l;
 i++;
 cmd[i]=light_mode;
 i++;
 cmd[i]=night_mode;
 i++;
 cmd[i]=act;
 i++;
 cmd[i]=0;
 write(fd,cmd,zigbee_send_data_num); 
}
