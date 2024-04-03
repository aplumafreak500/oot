#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "syotes_room_0.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "syotes_scene.h"

s16 syotes_room_0ObjectList[];
ActorEntry syotes_room_0ActorList[];

SceneCmd syotes_room_0Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(5),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, false),
    SCENE_CMD_TIME_SETTINGS(0, 0, 255),
    SCENE_CMD_ROOM_SHAPE(&syotes_room_0RoomShapeNormal_000000),
//    SCENE_CMD_OBJECT_LIST(1, syotes_room_0ObjectList),
//    SCENE_CMD_ACTOR_LIST(1, syotes_room_0ActorList),
    SCENE_CMD_END(),
};

s16 syotes_room_0ObjectList[] = {
};

ActorEntry syotes_room_0ActorList[] = {
};
