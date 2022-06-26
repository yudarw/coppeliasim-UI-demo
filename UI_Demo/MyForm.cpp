#include "MyForm.h"
#include "include/coppeliasim.h"
#include <iostream>
#include <windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace UI_Demo;
using namespace std;

CoppeliaSim mSim;
CoppeliaRobot mRobot;

float posData[6];
int mode = 0;
int step_index = 0;
float pos_step_data[6] = { 1, 5, 10, 20, 50, 100};
float ang_step_data[6] = { 0.5, 1, 2, 5, 10, 20};
float pos_step = 10;
float ang_step = 0;

// Prototype Function
void thread_read_data(void*);

// Initialization program
void MyForm::on_init() {
	// Initialize timer:
	timer1->Interval = 50;
	timer1->Enabled = true;
	cb_selectmode->SelectedIndex = mode;

	_beginthread(thread_read_data, 0, NULL);

	label_status->Text = "Initialize program";
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

	update_set_data();
}

void MyForm::update_pos_data() {
	tb_pos_x->Text = posData[0].ToString("N3");
	tb_pos_y->Text = posData[1].ToString("N3");
	tb_pos_z->Text = posData[2].ToString("N3");
	tb_pos_rx->Text = posData[3].ToString("N3");
	tb_pos_ry->Text = posData[4].ToString("N3");
	tb_pos_rz->Text = posData[5].ToString("N3");
}

void MyForm::update_set_data() {
	float pos[6];
	if (mode == 0) {
		mRobot.readPosition(pos);
	}
	else {
		mRobot.readCurrentJointPos(pos);
	}
	tb_set_x->Text = pos[0].ToString("N3");
	tb_set_y->Text = pos[1].ToString("N3");
	tb_set_z->Text = pos[2].ToString("N3");
	tb_set_rx->Text = pos[3].ToString("N3");
	tb_set_ry->Text = pos[4].ToString("N3");
	tb_set_rz->Text = pos[5].ToString("N3");
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

void MyForm::movement_control(int id) {
	if (mode == 0) {
		float pos[6];
		mRobot.readPosition(pos);

		// x
		if (id == 1) pos[0] -= pos_step;
		else if (id == 2) pos[0] += pos_step;
		// y
		else if (id == 3) pos[1] -= pos_step;
		else if (id == 4) pos[1] += pos_step;
		// z
		else if (id == 5) pos[2] -= pos_step;
		else if (id == 6) pos[2] += pos_step;
		// w
		else if (id == 7) pos[3] -= ang_step;
		else if (id == 8) pos[3] += ang_step;
		// p
		else if (id == 9) pos[4] -= ang_step;
		else if (id == 10) pos[4] += ang_step;
		// r
		else if (id == 11) pos[5] -= ang_step;
		else if (id == 12) pos[5] += ang_step;

		mRobot.setPosition(pos, false);
	}
	else {
		float pos[6];
		mRobot.readCurrentJointPos(pos);

		// x
		if (id == 1) pos[0] -= ang_step;
		else if (id == 2) pos[0] += ang_step;
		// y
		else if (id == 3) pos[1] -= ang_step;
		else if (id == 4) pos[1] += ang_step;
		// z
		else if (id == 5) pos[2] -= ang_step;
		else if (id == 6) pos[2] += ang_step;
		// w
		else if (id == 7) pos[3] -= ang_step;
		else if (id == 8) pos[3] += ang_step;
		// p
		else if (id == 9) pos[4] -= ang_step;
		else if (id == 10) pos[4] += ang_step;
		// r
		else if (id == 11) pos[5] -= ang_step;
		else if (id == 12) pos[5] += ang_step;

		mRobot.setJointPosition(pos, false);
	}
}


void MyForm::step_decrease() {
	char str[128];
	step_index--;
	if (step_index < 0) step_index = 0;
	pos_step = pos_step_data[step_index];
	ang_step = ang_step_data[step_index];
	sprintf(str,"Movement step = %.1f, %.1f", pos_step, ang_step);
	label_status->Text = gcnew String(str);
}

void MyForm::step_increase() {
	char str[128];
	step_index++;
	if (step_index > 5) step_index = 5;
	pos_step = pos_step_data[step_index];
	ang_step = ang_step_data[step_index];
	sprintf(str,"Movement step = %.1f, %.1f", pos_step, ang_step);
	label_status->Text = gcnew String(str);
}