#ifndef LOGIN_H
#define LOGIN_H
#include "chatWidget.h"
#include <QtWidgets/QWidget>
#include "ui_login.h"

namespace Ui {
	class login;
}

class login : public QWidget
{
	Q_OBJECT

public:
	explicit login(QWidget *parent = 0);
	~login();

public:
	void connnectInit();		//�ź���۳�ʼ��
	void loginSucceed();		//��½�ɹ�
private:
	Ui::loginClass *ui;
	chatWidget * chat;
};

#endif // LOGIN_H
