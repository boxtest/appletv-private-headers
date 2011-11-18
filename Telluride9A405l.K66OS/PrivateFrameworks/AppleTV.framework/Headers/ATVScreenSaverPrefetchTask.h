/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBackgroundTask.h"

@class NSMutableArray, NSTimer, NSArray, NSMutableDictionary;

@interface ATVScreenSaverPrefetchTask : BRBackgroundTask {
@private
	int _index;	// 44 = 0x2c
	NSArray *_assets;	// 48 = 0x30
	NSMutableArray *_loadingIDs;	// 52 = 0x34
	NSMutableDictionary *_faces;	// 56 = 0x38
	NSTimer *_timer;	// 60 = 0x3c
	int _loadAttemptCount;	// 64 = 0x40
}
- (void)_imageLoadFailed:(id)failed;	// 0x35d370cd
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x35d37055
- (void)_prefetch;	// 0x35d36df5
- (void)_reset;	// 0x35d36a05
- (void)_screenSaverDataReady:(id)ready;	// 0x35d36b19
- (void)_startPrefetchForItems:(id)items;	// 0x35d36c69
- (void)_updateFacesCacheWithFaces:(id)faces;	// 0x35d37149
- (void)dealloc;	// 0x35d366bd
- (BOOL)isActive;	// 0x35d369e1
- (BOOL)perform:(id)perform;	// 0x35d36761
- (void)stop;	// 0x35d36985
@end

