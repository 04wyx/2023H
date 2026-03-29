#ifndef CONFIG_H
#define CONFIG_H

#define NPT 1024
#define range 1
#define MAX_WAVE_LENGTH 100 //最大的支持点数

typedef enum {
    WAVE_SINE = 0,    // 正弦波
    WAVE_TRIANGLE = 1 // 三角波
} WaveformType;

#endif
