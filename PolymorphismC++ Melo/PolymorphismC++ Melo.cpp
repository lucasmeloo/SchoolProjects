// PolymorphismC++ Melo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Phone.h"
#include "Camera.h"
#include "Player.h"
#include "Mp3Player.h"
#include "VideoPlayer.h"
#include "Messaging.h"
#include "SmallMessaging.h"
#include "MultimidiaMessaging.h"

void phone();
void camera();
void player();
void mp3Player();
void videoPlayer();
void messaging();

int main() {
	int choice, maxChoice;
	choice = 0;
	maxChoice = 15;
	while (choice < maxChoice) {
		std::cout << "Menu" << std::endl;
		std::cout << "1. Phone." << std::endl;
		std::cout << "2. Camera." << std::endl;
		std::cout << "3. Player" << std::endl;
		std::cout << "4. Messaging" << std::endl;
		std::cout << "5. Game Console." << std::endl;
		std::cout << "6. Web Browser" << std::endl;
		std::cout << "7. Day Planner" << std::endl;
		std::cin >> choice;

		switch (choice) {
		case 1:
			phone();
			break;
		case 2:
			camera();
			break;
		case 3:
			player();
			break;
		case 4:
			messaging();
			break;
		case 5:
			gameConsole();
			break;
		case 6:
			webBrowser();
			break;
		case 7:
			dayPlanner();
			break;
		case 8:
			return 0;
		}
	}
	return 0;
}
void gameConsole() {

}
void messaging() {
	Messaging * msgObj = new Messaging();
	int choice, maxChoice;
	choice = 0;
	maxChoice = 5;
	while (choice < maxChoice) {
		cout << "Messaging Menu: " << endl;
		cout << "1. Service Name" << endl;
		cout << "2. Small Message" << endl;
		cout << "3. Multimedia Message" << endl;
		cout << "4. Go back to the Menu." << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			msgObj->serviceName();
			break;
		case 2:
			smallMessaging();
			break;
		case 3:
			multimediaMessaging();
			break;
		case 4:
			return;
		}
	}
}
void smallMessaging() {
	SmallMessaging * smsObj = new SmallMessaging();
	int choice, maxChoice;
	choice = 0;
	maxChoice = 3;
	while (choice < maxChoice) {
		cout << "SMS Menu: " << endl;
		cout << "1. Service Name" << endl;
		cout << "2. Return to menu" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			smsObj->serviceName();
			break;
		case 2:
			return;
		}
	}
}
void multimediaMessaging() {
	MultimidiaMessaging * mmsObj = new MultimidiaMessaging();
	int choice, maxChoice;
	choice = 0;
	maxChoice = 3;
	while (choice < maxChoice) {
		cout << "SMS Menu: " << endl;
		cout << "1. Service Name" << endl;
		cout << "2. Return to menu" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			mmsObj->serviceName();
			break;
		case 2:
			return;
		}
	}
}
void player() {
	Player * playerObj = new Player();
	int choice, maxChoice;
	choice = 0;
	maxChoice = 5;
	while (choice < maxChoice) {
		cout << "Player Menu: " << endl;
		cout << "1. Service Name" << endl;
		cout << "2. Mp3 Player" << endl;
		cout << "3. Video Player." << endl;
		cout << "4. Go back to the Menu." << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			playerObj->serviceName();
			break;
		case 2:
			mp3Player();
			break;
		case 3:
			videoPlayer();
			break;
		case 4:
			return;
		}
	}
}
void mp3Player() {
	Mp3Player * mp3Obj = new Mp3Player();
	int choice, maxChoice;
	choice = 0;
	maxChoice = 3;
	while (choice < maxChoice) {
		cout << "Mp3 Menu: " << endl;
		cout << "1. Service Name" << endl;
		cout << "2. Return to menu" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			mp3Obj->serviceName();
			break;
		case 2:
			return;
		}
	}
}
void videoPlayer() {
	VideoPlayer * videoObj = new VideoPlayer();
	int choice, maxChoice;
	choice = 0;
	maxChoice = 3;
	while (choice < maxChoice) {
		cout << "Video Player Menu: " << endl;
		cout << "1. Service Name" << endl;
		cout << "2. Return to menu" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			videoObj->serviceName();
			break;
		case 2:
			return;
		}
	}
}
void phone() {
	Phone * phoneObj = new Phone();
	int choice, maxChoice;
	choice = 0;
	maxChoice = 5;
	while (choice < maxChoice)	{
		cout << "Phone Menu: " << endl;
		cout << "1. Call a number" << endl;
		cout << "2. Receive Calls." << endl;
		cout << "3. Set Phone Volume." << endl;
		cout << "4. Decline Call" << endl;
		cout << "5. Go back to the Menu." << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			phoneObj->placeCall();
			break;
		case 2:
			phoneObj->receiveCall();
			break;
		case 3:
			phoneObj->setVoiceVolume();
			break;
		case 4:
			phoneObj->declineCall();
			break;
		case 5:
			return;
		}
	}
}
void camera() {
	Camera* camObj = new Camera();
	int choice, maxChoice;
	choice = 0;
	maxChoice = 4;
	while (choice < maxChoice) {
		cout << "Camera Menu: " << endl;
		cout << "1. Service Name" << endl;
		cout << "2. Save pics" << endl;
		cout << "3. Load pics" << endl;
		cout << "4. Back to the menu" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			camObj->serviceName();
			break;
		case 2:
			camObj->save();
			break;
		case 3:
			camObj->load();
			break;
		case 4:
			return;
		}
	}
}

