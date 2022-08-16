#include "BruhCommand.h"

BruhCommand::BruhCommand() : IMCCommand("creds", "credits", "creds") {
}

BruhCommand::~BruhCommand() {
}

bool BruhCommand::execute(std::vector<std::string>* args) {
	assertTrue(g_Data.getLocalPlayer() != nullptr);

	clientMessageF("Bloodbath client was created by xPuRe ShaD3x.");
	return true;
}
