#include "scene.h"
#include "room.h"
#include "ultra64.h"

//s16 syotes_room_0ObjectList[];
//ActorEntry syotes_room_0ActorList[];

extern RoomShapeNormal syotes_room_0;

SceneCmd syotes_room_0Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(5),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, false),
    SCENE_CMD_TIME_SETTINGS(0, 0, 255),
    SCENE_CMD_ROOM_SHAPE(&syotes_room_0),
//    SCENE_CMD_OBJECT_LIST(1, syotes_room_0ObjectList),
//    SCENE_CMD_ACTOR_LIST(1, syotes_room_0ActorList),
    SCENE_CMD_END(),
};
/*
s16 syotes_room_0ObjectList[] = {
};

ActorEntry syotes_room_0ActorList[] = {
};
*/
