#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawnTrigger
struct  EnemySpawnTrigger_t3933962565  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject EnemySpawnTrigger::spawnPoint
	GameObject_t3674682005 * ___spawnPoint_2;
	// UnityEngine.GameObject EnemySpawnTrigger::prefabToSpawn
	GameObject_t3674682005 * ___prefabToSpawn_3;
	// System.Boolean EnemySpawnTrigger::canSpawn
	bool ___canSpawn_4;
	// System.Boolean EnemySpawnTrigger::canReSpawn
	bool ___canReSpawn_5;

public:
	inline static int32_t get_offset_of_spawnPoint_2() { return static_cast<int32_t>(offsetof(EnemySpawnTrigger_t3933962565, ___spawnPoint_2)); }
	inline GameObject_t3674682005 * get_spawnPoint_2() const { return ___spawnPoint_2; }
	inline GameObject_t3674682005 ** get_address_of_spawnPoint_2() { return &___spawnPoint_2; }
	inline void set_spawnPoint_2(GameObject_t3674682005 * value)
	{
		___spawnPoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPoint_2, value);
	}

	inline static int32_t get_offset_of_prefabToSpawn_3() { return static_cast<int32_t>(offsetof(EnemySpawnTrigger_t3933962565, ___prefabToSpawn_3)); }
	inline GameObject_t3674682005 * get_prefabToSpawn_3() const { return ___prefabToSpawn_3; }
	inline GameObject_t3674682005 ** get_address_of_prefabToSpawn_3() { return &___prefabToSpawn_3; }
	inline void set_prefabToSpawn_3(GameObject_t3674682005 * value)
	{
		___prefabToSpawn_3 = value;
		Il2CppCodeGenWriteBarrier(&___prefabToSpawn_3, value);
	}

	inline static int32_t get_offset_of_canSpawn_4() { return static_cast<int32_t>(offsetof(EnemySpawnTrigger_t3933962565, ___canSpawn_4)); }
	inline bool get_canSpawn_4() const { return ___canSpawn_4; }
	inline bool* get_address_of_canSpawn_4() { return &___canSpawn_4; }
	inline void set_canSpawn_4(bool value)
	{
		___canSpawn_4 = value;
	}

	inline static int32_t get_offset_of_canReSpawn_5() { return static_cast<int32_t>(offsetof(EnemySpawnTrigger_t3933962565, ___canReSpawn_5)); }
	inline bool get_canReSpawn_5() const { return ___canReSpawn_5; }
	inline bool* get_address_of_canReSpawn_5() { return &___canReSpawn_5; }
	inline void set_canReSpawn_5(bool value)
	{
		___canReSpawn_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
