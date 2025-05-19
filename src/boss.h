#ifndef BOSS_H
#define BOSS_H

#include "raylib.h"
#include "enemy.h"
#include "bullet.h"


typedef struct {
    Vector2 position;      
    Vector2 velocity;      
    float radius;          
    int currentLayer;      
    float layerHealth;     
    float maxLayerHealth;  
    float attackTimer;     
    bool active;           
    bool isTransitioning;  
    float transitionTimer; 
    
    
    bool isDashing;        
    Vector2 dashDirection; 
    float dashTimer;       
    float dashCooldown;    
    Vector2 targetPosition; 
} Boss;


void InitBoss(Boss *boss, Vector2 position);


void UpdateBoss(Boss *boss, Vector2 playerPosition, float deltaTime, Bullet **enemyBullets);


bool CheckBossHitByBullet(Boss *boss, Vector2 bulletPosition, float bulletRadius, int damage);


void LaunchRicochetBullets(Boss *boss, Bullet **enemyBullets);


void DrawBoss(const Boss *boss);

#endif 