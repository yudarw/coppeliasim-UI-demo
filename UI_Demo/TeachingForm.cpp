#include "TeachingForm.h"
#include "variables.h"
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace UI_Demo;
using namespace std;
using namespace msclr::interop;

vector<record_t> recorded_pos;

void TeachingForm::on_init() {
	char str[256];
	record_t mPos;
	int size = recorded_pos.size();

	for (int i = 0; i < size; i++) {
		mPos = recorded_pos[i];
		sprintf(str, "[%d] %s = %.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
			mode, mPos.label.c_str(),
			mPos.pos[0],
			mPos.pos[1],
			mPos.pos[2],
			mPos.pos[3],
			mPos.pos[4],
			mPos.pos[5]
		);
		listBox1->Items->Add(gcnew String(str));
	}

}



void TeachingForm::btn_add() {
	char str[256];
	record_t mPos;
	for(int i = 0; i < 6; i++) 
		mPos.pos[i] = posData[i];

	mPos.label = marshal_as<string>(textBox1->Text);
	
	if (mPos.label == "")
		mPos.label = "recorded_pos";

	mPos.mode = mode;
	sprintf(str, "[%d] %s = %.3f, %.3f, %.3f, %.3f, %.3f, %.3f", 
		mode, mPos.label.c_str(), 
		mPos.pos[0],
		mPos.pos[1],
		mPos.pos[2],
		mPos.pos[3],
		mPos.pos[4],
		mPos.pos[5]
		);
	printf(str);
	listBox1->Items->Add(gcnew String(str));

	recorded_pos.push_back(mPos);
}

void TeachingForm::btn_move() {
	record_t mPos;
	int index;
	
	mRobot.setSpeed(30, 30);

	index = listBox1->SelectedIndex;
	mPos = recorded_pos[index];
	float cmdPos[6];
	for (int i = 0; i < 6; i++)
		cmdPos[i] = mPos.pos[i];
	
	if (mPos.mode == 0)
		mRobot.setPosition(cmdPos, false);
	else
		mRobot.setJointPosition(cmdPos, false);
}


void TeachingForm::btn_delete() {

}