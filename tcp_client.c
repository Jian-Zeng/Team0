
int main ()
{
	int sockfd = 0;
	int ret = 0;
	char msg[] = "hello server";
	char buf[64] = {0};
	
	//1. 创建TCP socket
	sockfd = socket(AF_INET,SOCK_STREAM,0);
	
	//2. 向服务器发起连接
	//res = connect(sockfd,(struct sockaddr*)&saddr,sizeof(saddr));
	
	//3. 发送客户端数据请求
	send(connfd, msg, strlen(msg), 0);
	
	//4. 接收服务器的数据响应
	//recv(connfd, buf, sizeof(buf), 0);
	printf("服务器响应: %s\n", buf);
	
	close(sockfd);	
	
	return 0;
}