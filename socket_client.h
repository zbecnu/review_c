#ifndef _SOCKET_CLIENT_H_
#define _SOCKET_CLIENT_H_

	void init_socket(void **socket);
	void send_socket(void *socket,void *buff, int len);
	void recv_socket(void *socket,void **buff, int *len);
#ENDIF
