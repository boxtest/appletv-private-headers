/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSubtitleProvider.h"
#import "BRMediaAssetDerivesMediaURL.h"
#import "BRRSSMediaAsset.h"

@class BRTimer, ATVSubtitleOption, NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SedonaMediaAsset : BRRSSMediaAsset <ATVSubtitleProvider, BRMediaAssetDerivesMediaURL> {
@private
	BOOL _playlistURLDetermined;	// 13 = 0xd
	BOOL _hasBeenPlayed;	// 14 = 0xe
	BOOL _isPaused;	// 15 = 0xf
	BOOL _isStalled;	// 16 = 0x10
	double _lastNotedPlaybackPosition;	// 20 = 0x14
	unsigned long _statusCount;	// 28 = 0x1c
	BRTimer *_bufferingTimer;	// 32 = 0x20
	BOOL _endSent;	// 36 = 0x24
	BOOL _startSent;	// 37 = 0x25
	NSArray *_subtitleOptions;	// 40 = 0x28
	ATVSubtitleOption *_subtitleOptionBeingLoaded;	// 44 = 0x2c
	NSMutableDictionary *_subtitleSampleSets;	// 48 = 0x30
	id _completionHandler;	// 52 = 0x34
}
@property(readonly, retain) NSArray *subtitleOptions;	// G=0x33143785; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x33142b29
- (id)_ISOLanguageCodeFromBCP47:(id)bcp47;	// 0x3314433d
- (id)_parseItalics:(id)italics;	// 0x3314439d
- (id)_parseSubtitleSamples:(id)samples;	// 0x33144715
- (void)_playbackEnded:(id)ended;	// 0x33143e75
- (void)_playbackProgressChanged:(id)changed;	// 0x33143da9
- (void)_playerEnd:(double)end reason:(id)reason;	// 0x33143c99
- (void)_playerStart:(double)start;	// 0x33143b85
- (void)_playerStateChanged:(id)changed;	// 0x33143ee5
- (void)_stallDuringPlayback:(id)playback;	// 0x33144195
- (void)_subtitleLoadDidFail:(id)_subtitleLoad;	// 0x331442e1
- (void)_subtitleLoadDidSucceed:(id)_subtitleLoad;	// 0x33144209
- (void)dealloc;	// 0x33142cc1
- (BOOL)forceHDCPProtection;	// 0x33142e75
- (void)loadSubtitleSamplesForOption:(id)option completionHandler:(id)handler;	// 0x33143795
- (id)resolveMediaURL;	// 0x33142e79
- (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x33142e55
- (void)setBookmarkTimeInSeconds:(unsigned)seconds;	// 0x33142e39
// converted property getter: - (id)subtitleOptions;	// 0x33143785
- (id)subtitleSamplesForOption:(id)option;	// 0x33143b41
@end

