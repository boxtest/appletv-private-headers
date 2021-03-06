/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTTrickPlayAsset.h"
#import "AppleTV-Structs.h"

@class NSString, NSMutableIndexSet, NSArray;

__attribute__((visibility("hidden")))
@interface LTImageTrickPlayAsset : LTTrickPlayAsset {
	NSArray *_frames;	// 12 = 0xc
	double _frameTimeDifferenceInSeconds;	// 16 = 0x10
	NSString *_frameFileNameFormat;	// 24 = 0x18
	float _frameCountMultipler;	// 28 = 0x1c
	BOOL _isEncrypted;	// 32 = 0x20
	BOOL _isReady;	// 33 = 0x21
	int _preloadedFilesOnEitherEnd;	// 36 = 0x24
	NSMutableIndexSet *_mutableActiveRequestsIndexSet;	// 40 = 0x28
	opaque_pthread_mutex_t _activeImageRequestMutex;	// 44 = 0x2c
}
@property(readonly, assign) double frameTimeDifferenceInSeconds;	// G=0x53d89; converted property
@property(readonly, assign) BOOL isReady;	// G=0x53425; converted property
- (id)initWithAsset:(id)asset;	// 0x531fd
- (id)initWithAsset:(id)asset andMerchant:(id)merchant;	// 0x53225
- (void).cxx_destruct;	// 0x53da1
- (id)URLForTime:(double)time;	// 0x534fd
- (id)URLsForTime:(double)time;	// 0x53581
- (id)URLsForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x535d5
- (id)URLsForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount atInterval:(int)interval;	// 0x53601
- (id)URLsForTime:(double)time withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x535b1
- (void)_fetchTrackConfigFileAtURL:(id)url forMerchant:(id)merchant;	// 0x53de9
- (id)_loadImageURLsForCount:(unsigned)count forBaseURL:(id)baseURL;	// 0x54699
- (id)_loadImageURLsForCount:(unsigned)count forBaseURL:(id)baseURL isOneBasedNamingScheme:(BOOL)scheme;	// 0x546bd
- (void)_setTrackConfig:(id)config;	// 0x5410d
- (void)_trackConfigFileReady:(id)ready;	// 0x53f6d
- (void)cancelPriorImageLoadsFromTime:(double)time direction:(int)direction;	// 0x53769
- (void)dealloc;	// 0x53161
- (id)firstImageFromURLs:(id)urls;	// 0x539e1
// converted property getter: - (double)frameTimeDifferenceInSeconds;	// 0x53d89
- (id)imageForTime:(double)time;	// 0x53911
- (id)imageForTime:(double)time direction:(int)direction;	// 0x53959
- (id)imageForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x53989
- (id)imageForTime:(double)time withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x53935
- (unsigned)indexForTime:(double)time;	// 0x53435
// converted property getter: - (BOOL)isReady;	// 0x53425
@end

