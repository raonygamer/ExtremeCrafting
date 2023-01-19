#include "ExtremeCrafting.h"

void ExtremeCrafting::Start() {
	MainHooks::InitializeHooks();
	MainInputs::InitializeInputs();
}

void ExtremeCrafting::Update() {
	UpdateRuntime::OnUpdate();
}

void ExtremeCrafting::Tick() {
	UpdateRuntime::OnTick();
}

void ExtremeCrafting::Stop() {}
ExtremeCrafting::~ExtremeCrafting() {}

MOD_FUNCTION Zenova::Mod* CreateMod() {
	return new ExtremeCrafting;
}