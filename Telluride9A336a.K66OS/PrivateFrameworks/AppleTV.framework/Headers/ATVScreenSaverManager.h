/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSTimer, BRWindow, ATVScreenSaverPrefetchTask;

@interface ATVScreenSaverManager : BRSingleton {
@private
	NSTimer *_timer;	// 4 = 0x4
	double _interval;	// 8 = 0x8
	BRWindow *_window;	// 16 = 0x10
	long _state;	// 20 = 0x14
	BOOL _enabled;	// 24 = 0x18
	BOOL _screenSaverPosted;	// 25 = 0x19
	BOOL _handlingTimeoutChangeNotification;	// 26 = 0x1a
	ATVScreenSaverPrefetchTask *_prefetchTask;	// 28 = 0x1c
	BOOL _screenSaverAutoFired;	// 32 = 0x20
}
+ (id)screenSaverFaces;	// 0x339a1bb9
+ (id)screenSaverFacesCachePath;	// 0x339a1b69
+ (void)setSingleton:(id)singleton;	// 0x339a1c01
+ (id)singleton;	// 0x339a1bf1
- (id)init;	// 0x339a1c11
- (BOOL)_allowedToLoadPrincipalClassNamed:(id)loadPrincipalClassNamed;	// 0x339a3521
- (void)_createTimer;	// 0x339a2779
- (void)_dismissScreenSaver:(id)saver;	// 0x339a2c21
- (void)_fadeFinished;	// 0x339a2441
- (void)_prefetchComplete:(id)complete;	// 0x339a33b1
- (void)_screenSaverArchiveChanged:(id)changed;	// 0x339a2eed
- (void)_screenSaverControllerActivate:(id)activate;	// 0x339a2ca1
- (void)_screenSaverControllerDeactivate:(id)deactivate;	// 0x339a2ce9
- (void)_screenSaverFired:(id)fired;	// 0x339a2875
- (void)_screenSaverIntervalChanged:(id)changed;	// 0x339a2d3d
- (id)_screenSaverPlugInControl;	// 0x339a2935
- (void)_serverStatusChanged:(id)changed;	// 0x339a3059
- (void)_startOneTimePrefetchTask:(id)task;	// 0x339a3195
- (void)_startRepeatingPrefetchTask;	// 0x339a32a1
- (void)_stopPrefetchTask;	// 0x339a33e1
- (void)_updateActivity:(id)activity;	// 0x339a2bad
- (BOOL)_validateBundleAtPath:(id)path;	// 0x339a3479
- (void)dealloc;	// 0x339a1e2d
- (void)enable;	// 0x339a1ef1
- (id)screenSaverPathsFromDirectory:(id)directory;	// 0x339a2255
- (BOOL)screenSaverPrefetchActive;	// 0x339a241d
- (BOOL)screenSaverRequiresPrefetch;	// 0x339a23ad
- (void)showScreenSaver;	// 0x339a1f21
@end

