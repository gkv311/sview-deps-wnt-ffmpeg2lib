#ifndef AVFORMAT_AVFORMAT_H
#define AVFORMAT_AVFORMAT_H

#include <time.h>
#include <stdio.h>  /* FILE */
#include "libavcodec/avcodec.h"

struct AVFormatContext;

typedef struct {
    char* key;
    char* value;
}AVMetadataTag;
typedef struct AVMetadata AVMetadata;
typedef struct AVMetadataConv AVMetadataConv;

struct AVDictionary;
struct AVPacket;
struct AVFrac;
struct AVCodecTag;
struct AVProbeData;
struct AVFormatParameters;
struct AVOutputFormat;
struct AVInputFormat;
enum AVStreamParseType;
struct AVIndexEntry;
struct AVStream;
struct AVProgram;
struct AVChapter;
struct AVFormatContext;
struct AVPacketList;
struct AVIOContext;
struct AVIOInterruptCB;

// avio.h
struct URLContext;
struct URLPollEntry;

typedef int URLInterruptCB(void);
struct URLProtocol;
struct ByteIOContext;

#endif /* AVFORMAT_AVFORMAT_H */
