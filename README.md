# SpaceWar
A UE4 spaceship simulator with head-to-head battle with human or AI opponent.

## Concept

Space War is a spaceship simulator in outer space.

The gameplay is (initially) head to head combat (other scenarios may
be added).

Other players can be human or AI (simple for now)

Heavy focus on control systems and building the world.

Things like asteroids, moons, planets, sun in the eyes, will be used
for tactical advantage.

The focus will be on flow and feel, and look.  It should be beautiful.

## Engine
Unreal 4, initialy with version 12.5

## Rules

You can fly anywhere in the universe.  Some kind of boundary may be
needed, though.

Both players start with finite shielding and ammo and fuel.

Each direct hit takes away shielding.

The last intact ship wins.

## Requirements

### SFX

engine sound for accelartion, turning; gun firing; projectile
hit; Realism means you don't hear other ship being hit, etc.  But nav
computer can use sound to indicate threats, etc.

### Static Mesh

ship viewport, other ships.  Ship would have body,
perhaps flames from thusters.  Also projectiles (or lasers).

### Textures

added later for visual flare

### Music

background music, perhaps changing with the situation.



## Iterative Cycle

world -> ship -> controls -> player 2 -> UI -> back to world


