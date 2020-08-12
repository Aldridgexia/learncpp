#include "client.h"

void Client::ChangeServerName(char name) {
	Client::ServerName = name;
	Client::ServerNum ++;
}
int Client::GetClientNum() {
	return Client:ClientNum;
}

