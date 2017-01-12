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

// EnemySpawnPoint
struct  EnemySpawnPoint_t3410362461  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject EnemySpawnPoint::enemyPrefab
	GameObject_t3674682005 * ___enemyPrefab_2;
	// UnityEngine.GameObject EnemySpawnPoint::enemySpawnTrigger
	GameObject_t3674682005 * ___enemySpawnTrigger_3;

public:
	inline static int32_t get_offset_of_enemyPrefab_2() { return static_cast<int32_t>(offsetof(EnemySpawnPoint_t3410362461, ___enemyPrefab_2)); }
	inline GameObject_t3674682005 * get_enemyPrefab_2() const { return ___enemyPrefab_2; }
	inline GameObject_t3674682005 ** get_address_of_enemyPrefab_2() { return &___enemyPrefab_2; }
	inline void set_enemyPrefab_2(GameObject_t3674682005 * value)
	{
		___enemyPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemyPrefab_2, value);
	}

	inline static int32_t get_offset_of_enemySpawnTrigger_3() { return static_cast<int32_t>(offsetof(EnemySpawnPoint_t3410362461, ___enemySpawnTrigger_3)); }
	inline GameObject_t3674682005 * get_enemySpawnTrigger_3() const { return ___enemySpawnTrigger_3; }
	inline GameObject_t3674682005 ** get_address_of_enemySpawnTrigger_3() { return &___enemySpawnTrigger_3; }
	inline void set_enemySpawnTrigger_3(GameObject_t3674682005 * value)
	{
		___enemySpawnTrigger_3 = value;
		Il2CppCodeGenWriteBarrier(&___enemySpawnTrigger_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
