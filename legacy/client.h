#ifndef CLIENT_H_
#define CLIENT_H_

class Client{
	static char ServerName;
	static int ClientNum;
public:
	static void ChangeServerName(char name);
	static int GetClientNum();
};

#endif //CLIENT_H_