#include "../i_sound.h"

UINT8 sound_started = 0;

void *I_GetSfx(sfxinfo_t *sfx)
{
        (void)sfx;
        return NULL;
}

void I_FreeSfx(sfxinfo_t *sfx)
{
        (void)sfx;
}

void I_StartupSound(void){}

void I_ShutdownSound(void){}

//
//  SFX I/O
//

INT32 I_StartSound(sfxenum_t id, INT32 vol, INT32 sep, INT32 pitch, INT32 priority)
{
        (void)id;
        (void)vol;
        (void)sep;
        (void)pitch;
        (void)priority;
        return -1;
}

void I_StopSound(INT32 handle)
{
        (void)handle;
}

INT32 I_SoundIsPlaying(INT32 handle)
{
        (void)handle;
        return false;
}

void I_UpdateSoundParams(INT32 handle, INT32 vol, INT32 sep, INT32 pitch)
{
        (void)handle;
        (void)vol;
        (void)sep;
        (void)pitch;
}

void I_SetSfxVolume(INT32 volume)
{
        (void)volume;
}

//
//  MUSIC I/O
//
UINT8 music_started = 0;

void I_InitMusic(void){}

void I_ShutdownMusic(void){}

void I_PauseSong(INT32 handle)
{
        (void)handle;
}

void I_ResumeSong(INT32 handle)
{
        (void)handle;
}

boolean I_SongPlaying(void)
{
	return false;
}

boolean I_SongPaused(void)
{
	return false;
}

musictype_t I_GetSongType(void)
{
	return MU_NONE;
}

//
//  MIDI I/O
//

UINT8 midimusic_started = 0;

void I_InitMIDIMusic(void){}

void I_ShutdownMIDIMusic(void){}

void I_SetMIDIMusicVolume(INT32 volume)
{
        (void)volume;
}

INT32 I_RegisterSong(void *data, size_t len)
{
        (void)data;
        (void)len;
        return -1;
}

boolean I_PlaySong(INT32 handle, INT32 looping)
{
        (void)handle;
        (void)looping;
        return false;
}

void I_StopSong(INT32 handle)
{
        (void)handle;
}

void I_UnRegisterSong(INT32 handle)
{
        (void)handle;
}

//
//  DIGMUSIC I/O
//

UINT8 digmusic_started = 0;

void I_InitDigMusic(void){}

void I_ShutdownDigMusic(void){}

boolean I_StartDigSong(const char *musicname, INT32 looping)
{
        (void)musicname;
        (void)looping;
        return false;
}

void I_StopDigSong(void){}

void I_SetDigMusicVolume(INT32 volume)
{
        (void)volume;
}

boolean I_SetSongSpeed(float speed)
{
        (void)speed;
        return false;
}

UINT32 I_GetSongLength(void)
{
        return 0;
}

boolean I_SetSongLoopPoint(UINT32 looppoint)
{
        (void)looppoint;
        return false;
}

UINT32 I_GetSongLoopPoint(void)
{
	return 0;
}

boolean I_SetSongPosition(UINT32 position)
{
        (void)position;
        return false;
}

UINT32 I_GetSongPosition(void)
{
        return 0;
}

void I_SetInternalMusicVolume(UINT8 volume)
{
	(void)volume;
}

void I_StopFadingSong(void)
{
}

boolean I_FadeSongFromVolume(UINT8 target_volume, UINT8 source_volume, UINT32 ms, boolean stopafterfade)
{
	(void)target_volume;
	(void)source_volume;
	(void)ms;
        return false;
}

boolean I_FadeSong(UINT8 target_volume, UINT32 ms)
{
	(void)target_volume;
	(void)ms;
	return false;
}

boolean I_FadeOutStopSong(UINT32 ms)
{
        (void)ms;
        return false;
}

boolean I_FadeInStartDigSong(const char *musicname, UINT16 track, boolean looping, UINT32 position, UINT32 fadeinms, boolean queuepostfade)
{
        (void)musicname;
        (void)looping;
        (void)fadeinms;
        return false;
}
