#ifndef __SAO_ENGINE_H__
#define __SAO_ENGINE_H__

# ifndef __SAO_ENGINE_GAMEOBJECT_LIBRARY_H__
#  include "GameObject.h"
# endif

# ifndef __SAO_ENGINE_PARTICLE_LIBRARY_H__
#  include "Particle.h"
#  endif

# ifndef __SAO_ENGINE_SOUNDS_LIBRARY_H__
#include "Sounds.h"
using namespace SoundLib::Library;
#endif

/**
*	Sao Engine is the main or the entry point
*	of the game. It handles every subsystem.
*	which can be used by the developer outside
*	the engine.
**/

namespace SaoEngine {
	using namespace GameObjectLibrary;
	using namespace TimeLibrary;
	using namespace ParticleLibrary;

	void StartFunc(void(*func)(void));
	void UpdateFunc(void(*func)(void));
	void Initialize(int argc, char** argv);
	

	struct Camera {
		Vector3 position;
		Vector3 lookAt;
		Vector3 up;

		Camera() {
			this->position = Vector3(0.0f, 0.0f, 10.0f);
			this->lookAt = Vector3(0.0f, 0.0f, 0.0f);
			this->up = Vector3(0.0f, 1.0f, 0.0f);
		}
	};

	void SetCameraPosition(Vector3 pos);
	void SetCameraPosition(float x, float y, float z);

	void SetCameraLookAt(Vector3 lookat);
	void SetCameraLookAt(float x, float y, float z);

	void SetCameraUp(Vector3 Up);
	void SetCameraUp(float x, float y, float z);

	void SetWindowWidth(int width);
	void SetWindowHeight(int height);

	int GetWindowWith();
	int GetWindowHeight();

	void SetWindowName(char* name);
	void SetWindowColor(Color3 color);

	bool GetKey(unsigned char key);
	bool GetKeyDown(unsigned char key);
	bool GetKeyUp(unsigned char key);
	bool GetSpecialKey(int key);

	void AddText(float x, float y, char* string);
	void AddText(float x, float y, char* string, Vector3 pos, Color3 color);

	float GetElapsedTime();
	float GetDeltaTime();
	float GetFixedDeltaTime();
}

#endif