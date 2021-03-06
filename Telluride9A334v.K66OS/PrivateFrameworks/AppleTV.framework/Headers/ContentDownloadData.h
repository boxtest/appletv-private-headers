/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSError, NSMutableData, NSLock, NSMutableString, NSString, CDNDownloadData;

__attribute__((visibility("hidden")))
@interface ContentDownloadData : NSObject {
@private
	BOOL ignore;	// 4 = 0x4
	NSLock *lock;	// 8 = 0x8
	CDNDownloadData *cdn;	// 12 = 0xc
	int downloadableId;	// 16 = 0x10
	unsigned bitRate;	// 20 = 0x14
	unsigned long long expiration;	// 24 = 0x18
	unsigned sortedIndex;	// 32 = 0x20
	int contentProfile;	// 36 = 0x24
	NSString *url;	// 40 = 0x28
	NSString *redirectedUrl;	// 44 = 0x2c
	int state;	// 48 = 0x30
	int error;	// 52 = 0x34
	NSError *nsError;	// 56 = 0x38
	BOOL failed;	// 60 = 0x3c
	int httpStatusCode;	// 64 = 0x40
	double downloadStartTime;	// 68 = 0x44
	double downloadEndTime;	// 76 = 0x4c
	double playlistGenerateStartTime;	// 84 = 0x54
	double playlistGenerateEndTime;	// 92 = 0x5c
	double parseKeyStartTime;	// 100 = 0x64
	double parseKeyEndTime;	// 108 = 0x6c
	NSMutableString *moviePlaylist;	// 116 = 0x74
	int movieDuration;	// 120 = 0x78
	int moviePeakBandwidth;	// 124 = 0x7c
	int movieAverageBandwidth;	// 128 = 0x80
	NSMutableData *contentHeaderData;	// 132 = 0x84
	int contentChunkStart;	// 136 = 0x88
	float m3u8ChunkRatio;	// 140 = 0x8c
}
@property(readonly, assign, nonatomic) unsigned bitRate;	// G=0x335036d0; @synthesize
@property(readonly, retain, nonatomic) CDNDownloadData *cdn;	// G=0x33503720; @synthesize
@property(readonly, assign, nonatomic) int contentChunkStart;	// G=0x335033c4; @synthesize
@property(readonly, retain, nonatomic) NSMutableData *contentHeaderData;	// G=0x335033b0; @synthesize
@property(readonly, assign, nonatomic) int contentProfile;	// G=0x3350367c; @synthesize
@property(assign, nonatomic) double downloadEndTime;	// G=0x33503534; S=0x33503550; @synthesize
@property(assign, nonatomic) double downloadStartTime;	// G=0x33503568; S=0x33503584; @synthesize
@property(readonly, assign, nonatomic) int downloadableId;	// G=0x335036e4; @synthesize
@property(assign, nonatomic) int error;	// G=0x33503604; S=0x33503618; @synthesize
@property(readonly, assign, nonatomic) unsigned long long expiration;	// G=0x335036b8; @synthesize
@property(assign, nonatomic) BOOL failed;	// G=0x335035c4; S=0x335035dc; @synthesize
@property(assign, nonatomic) int httpStatusCode;	// G=0x3350359c; S=0x335035b0; @synthesize
@property(assign, nonatomic) BOOL ignore;	// G=0x33503734; S=0x3350374c; @synthesize
@property(assign, nonatomic) NSLock *lock;	// G=0x335036f8; S=0x3350370c; @synthesize
@property(assign, nonatomic) float m3u8ChunkRatio;	// G=0x33503388; S=0x3350339c; @synthesize
@property(assign, nonatomic) int movieAverageBandwidth;	// G=0x335033ec; S=0x33503400; @synthesize
@property(assign, nonatomic) int movieDuration;	// G=0x3350343c; S=0x33503450; @synthesize
@property(assign, nonatomic) int moviePeakBandwidth;	// G=0x33503414; S=0x33503428; @synthesize
@property(readonly, retain, nonatomic) NSMutableString *moviePlaylist;	// G=0x335033d8; @synthesize
@property(retain, nonatomic) NSError *nsError;	// G=0x335035f0; S=0x33503a08; @synthesize
@property(assign, nonatomic) double parseKeyEndTime;	// G=0x33503464; S=0x33503480; @synthesize
@property(assign, nonatomic) double parseKeyStartTime;	// G=0x33503498; S=0x335034b4; @synthesize
@property(assign, nonatomic) double playlistGenerateEndTime;	// G=0x335034cc; S=0x335034e8; @synthesize
@property(assign, nonatomic) double playlistGenerateStartTime;	// G=0x33503500; S=0x3350351c; @synthesize
@property(readonly, retain, nonatomic) NSString *redirectedUrl;	// G=0x33503654; @synthesize
@property(assign, nonatomic) unsigned sortedIndex;	// G=0x33503690; S=0x335036a4; @synthesize
@property(assign, nonatomic) int state;	// G=0x3350362c; S=0x33503640; @synthesize
@property(readonly, retain, nonatomic) NSString *url;	// G=0x33503668; @synthesize
- (id)initWithAuthResponseData:(AuthResponseData *)authResponseData withDownloadId:(unsigned)downloadId withCdn:(id)cdn;	// 0x3350377c
// declared property getter: - (unsigned)bitRate;	// 0x335036d0
// declared property getter: - (id)cdn;	// 0x33503720
- (int)compareByDescendingBitRate:(id)rate;	// 0x33503a3c
// declared property getter: - (int)contentChunkStart;	// 0x335033c4
// declared property getter: - (id)contentHeaderData;	// 0x335033b0
// declared property getter: - (int)contentProfile;	// 0x3350367c
- (void)dealloc;	// 0x33503c1c
// declared property getter: - (double)downloadEndTime;	// 0x33503534
// declared property getter: - (double)downloadStartTime;	// 0x33503568
// declared property getter: - (int)downloadableId;	// 0x335036e4
// declared property getter: - (int)error;	// 0x33503604
// declared property getter: - (unsigned long long)expiration;	// 0x335036b8
// declared property getter: - (BOOL)failed;	// 0x335035c4
// declared property getter: - (int)httpStatusCode;	// 0x3350359c
// declared property getter: - (BOOL)ignore;	// 0x33503734
// declared property getter: - (id)lock;	// 0x335036f8
// declared property getter: - (float)m3u8ChunkRatio;	// 0x33503388
// declared property getter: - (int)movieAverageBandwidth;	// 0x335033ec
// declared property getter: - (int)movieDuration;	// 0x3350343c
// declared property getter: - (int)moviePeakBandwidth;	// 0x33503414
// declared property getter: - (id)moviePlaylist;	// 0x335033d8
// declared property getter: - (id)nsError;	// 0x335035f0
// declared property getter: - (double)parseKeyEndTime;	// 0x33503464
// declared property getter: - (double)parseKeyStartTime;	// 0x33503498
// declared property getter: - (double)playlistGenerateEndTime;	// 0x335034cc
// declared property getter: - (double)playlistGenerateStartTime;	// 0x33503500
// declared property getter: - (id)redirectedUrl;	// 0x33503654
- (void)setContentHeaderData:(id)data withChunkStart:(int)chunkStart;	// 0x33503ba4
// declared property setter: - (void)setDownloadEndTime:(double)time;	// 0x33503550
// declared property setter: - (void)setDownloadStartTime:(double)time;	// 0x33503584
// declared property setter: - (void)setError:(int)error;	// 0x33503618
// declared property setter: - (void)setFailed:(BOOL)failed;	// 0x335035dc
// declared property setter: - (void)setHttpStatusCode:(int)code;	// 0x335035b0
// declared property setter: - (void)setIgnore:(BOOL)ignore;	// 0x3350374c
// declared property setter: - (void)setLock:(id)lock;	// 0x3350370c
// declared property setter: - (void)setM3u8ChunkRatio:(float)ratio;	// 0x3350339c
// declared property setter: - (void)setMovieAverageBandwidth:(int)bandwidth;	// 0x33503400
// declared property setter: - (void)setMovieDuration:(int)duration;	// 0x33503450
// declared property setter: - (void)setMoviePeakBandwidth:(int)bandwidth;	// 0x33503428
- (void)setMoviePlaylist:(id)playlist;	// 0x33503b40
// declared property setter: - (void)setNsError:(id)error;	// 0x33503a08
// declared property setter: - (void)setParseKeyEndTime:(double)time;	// 0x33503480
// declared property setter: - (void)setParseKeyStartTime:(double)time;	// 0x335034b4
// declared property setter: - (void)setPlaylistGenerateEndTime:(double)time;	// 0x335034e8
// declared property setter: - (void)setPlaylistGenerateStartTime:(double)time;	// 0x3350351c
- (void)setRedirectedUrl:(id)url;	// 0x33503ac0
// declared property setter: - (void)setSortedIndex:(unsigned)index;	// 0x335036a4
// declared property setter: - (void)setState:(int)state;	// 0x33503640
// declared property getter: - (unsigned)sortedIndex;	// 0x33503690
// declared property getter: - (int)state;	// 0x3350362c
// declared property getter: - (id)url;	// 0x33503668
@end

