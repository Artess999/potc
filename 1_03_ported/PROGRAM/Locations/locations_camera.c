

#define LOCCAMERA_FOLLOW	1
#define LOCCAMERA_TOPOS		2
#define LOCCAMERA_FREE		3

int locCameraCurMode;
bool locCameraEnableSpecialMode;
bool locCameraEnableFree;

void locCameraInit()
{
	locCameraEnableFree = false;
	locCameraEnableSpecialMode = false;
	//locCameraEnableFree = true;
	locCameraCurMode = LOCCAMERA_FOLLOW;
}


//Set camera follow mode
bool locCameraFollow()
{
	if(IsEntity(locCamera) == 0) return false;
	bool res = SendMessage(&locCamera, "l", MSG_CAMERA_FOLLOW);
	locCameraCurMode = LOCCAMERA_FOLLOW;
	return res;
}

//Set camera toPos mode
bool locCameraToPos(float x, float y, float z, bool isTeleport)
{
	if(IsEntity(locCamera) == 0) return false;
	if(locCameraEnableFree == true) return true;
	bool res = SendMessage(&locCamera, "lfffl", MSG_CAMERA_TOPOS, x, y, z, isTeleport);
	locCameraCurMode = LOCCAMERA_TOPOS;
	return res;
}

//Set camera move mode (speed meter per second)
bool locCameraFree()
{
	if(IsEntity(locCamera) == 0) return false;
	bool res = SendMessage(&locCamera, "l", MSG_CAMERA_FREE);
	locCameraCurMode = LOCCAMERA_FREE;
	return res;
}

//
bool locCameraLock(float ax)
{
	if(IsEntity(locCamera) == 0) return false;
	bool res = SendMessage(&locCamera, "lf", MSG_CAMERA_MOVE, ax);
	return res;
}


void locCameraSleep(bool isSleep)
{
	SendMessage(&locCamera, "ll", MSG_CAMERA_SLEEP, isSleep);
}

void locCameraSwitch()
{
	if(locCameraEnableFree == false) return;
	string controlName = GetEventData();
	if(controlName != "ChrCamCameraSwitch") return;
	if(locCameraCurMode != LOCCAMERA_FREE)
	{
		locCameraFree();
	}else{
		locCameraFollow();
	}
}

void locCameraSetSpecialMode(bool isEnable)
{
	locCameraEnableSpecialMode = isEnable;
}

#event_handler("EventGetSpecialMode", "locCameraGetSpecialMode");
int locCameraGetSpecialMode()
{
	if(GetTargetPlatform() == "PC") return false;
	return locCameraEnableSpecialMode;
}
