#pragma once

#include "Hooks/MainHooks.h"
#include "Inputs/MainInputs.h"
#include "Runtime/UpdateRuntime.h"

class ExtremeCrafting : public Zenova::Mod {
    virtual void Start();
	virtual void Update();
	virtual void Tick();
	virtual void Stop();
	virtual ~ExtremeCrafting();
};