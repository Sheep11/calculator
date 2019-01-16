#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"

#include<qlayout.h>
#include<qmessagebox.h>
#include<qtextedit.h>
#include<qlineedit.h>
#include<qtimer.h>
#include<qlabel.h>
#include<qline.h>
#include<qtablewidget.h>
#include<qpushbutton.h>
#include<qheaderview.h>
#include<string>
#include"class.h"

class mainwindow : public QMainWindow
{
	Q_OBJECT

public:
	mainwindow(QWidget *parent = Q_NULLPTR);
	QLineEdit *ansedit;
	QLineEdit *quesedit;
	QLabel *resttime;

	int time;
	QTimer *timer;
	QTableWidget *hislist;

	formula f;
	generator *gen;

protected:
	void onEnterClicked();
	void onTimeOut();

private:
	Ui::mainwindowClass ui;
};
