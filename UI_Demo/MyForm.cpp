#include "MyForm.h"
#include "include/coppeliasim.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace UI_Demo;
using namespace std;

CoppeliaSim mSim;
CoppeliaRobot mRobot;

float posData[6];
int mode = 0;

// Prototype Function
void thread_read_data(void*);

// Initialization program
void MyForm::on_init() {
	// Initialize timer:
	timer1->Interval = 50;
	timer1->Enabled = true;
	cb_selectmode->SelectedIndex = mode;

	_beginthread(thread_read_data, 0, NULL);
}

// Thread for updating the data
void thread_read_data(void*) {
	while (true) {
		if (mode == 0) {
			mRobot.readPosition(posData);
		}
		else {
			mRobot.readCurrentJointPos(posData);
		}
		Sleep(50);
	}
}

// Timer function: update the GUI information
void MyForm::on_timer() {
	update_pos_data();
}

void MyForm::btn_connect() {
	if (mSim.connect(19997)) {
		label_status->Text = "Coppeliasim connection success...";
		label_status->ForeColor = System::Drawing::Color::Green;
		mSim.startSimulation();
		mRobot.init("UR10");
	}
}

void MyForm::btn_start_sim() {
	mSim.startSimulation();
}

void MyForm::btn_stop_sim() {
	mSim.stopSimulation();
}

void MyForm::change_label() {
	mode = cb_selectmode->SelectedIndex;

	if (mode == 0) {
		label_x->Text = "X:";
		label_y->Text = "Y:";
		label_z->Text = "Z:";
		label_rx->Text = "Rx:";
		label_ry->Text = "Ry:";
		label_rz->Text = "Rz:";

		btn_x_min->Text = "X-";
		btn_x_plus->Text = "X+";
		btn_y_min->Text = "Y-";
		btn_y_plus->Text = "Y+";
		btn_z_min->Text = "Z-";
		btn_z_plus->Text = "Z+";

		btn_rx_min->Text = "Rx-";
		btn_rx_plus->Text = "Rx+";
		btn_ry_min->Text = "Ry-";
		btn_ry_plus->Text = "Ry+";
		btn_rz_min->Text = "Rz-";
		btn_rz_plus->Text = "Rz+";
	}

	else {
		label_x->Text = "J1:";
		label_y->Text = "J2:";
		label_z->Text = "J3:";
		label_rx->Text = "J4:";
		label_ry->Text = "J5:";
		label_rz->Text = "J6:";

		btn_x_min->Text = "J1-";
		btn_x_plus->Text = "J1+";
		btn_y_min->Text = "J2-";
		btn_y_plus->Text = "J2+";
		btn_z_min->Text = "J3-";
		btn_z_plus->Text = "J3+";

		btn_rx_min->Text = "J4-";
		btn_rx_plus->Text = "J4+";
		btn_ry_min->Text = "J5-";
		btn_ry_plus->Text = "J5+";
		btn_rz_min->Text = "J6-";
		btn_rz_plus->Text = "J6+";
	}
}

void MyForm::update_pos_data() {
	tb_pos_x->Text = posData[0].ToString("N3");
	tb_pos_y->Text = posData[1].ToString("N3");
	tb_pos_z->Text = posData[2].ToString("N3");
	tb_pos_rx->Text = posData[3].ToString("N3");
	tb_pos_ry->Text = posData[4].ToString("N3");
	tb_pos_rz->Text = posData[5].ToString("N3");
}

void MyForm::btn_get_position() {
	tb_set_x->Text = tb_pos_x->Text;
	tb_set_y->Text = tb_pos_y->Text;
	tb_set_z->Text = tb_pos_z->Text;
	tb_set_rx->Text = tb_pos_rx->Text;
	tb_set_ry->Text = tb_pos_ry->Text;
	tb_set_rz->Text = tb_pos_rz->Text;
}

void MyForm::btn_set_position() {
	float cmdPos[6];
	cmdPos[0] = Convert::ToDouble(tb_set_x->Text);
	cmdPos[1] = Convert::ToDouble(tb_set_y->Text);
	cmdPos[2] = Convert::ToDouble(tb_set_z->Text);
	cmdPos[3] = Convert::ToDouble(tb_set_rx->Text);
	cmdPos[4] = Convert::ToDouble(tb_set_ry->Text);
	cmdPos[5] = Convert::ToDouble(tb_set_rz->Text);

	mRobot.setSpeed(30, 90);

	if (mode == 0) {
		mRobot.setPosition(cmdPos, false);
	}
	else {
		mRobot.setJointPosition(cmdPos, false);
	}
}

