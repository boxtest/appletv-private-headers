/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class BRWindow, ATVScreenSaverPrefetchTask, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVScreenSaverManager : BRSingleton {
	NSTimer *_timer;	// 4 = 0x4
	double _interval;	// 8 = 0x8
	BRWindow *_window;	// 16 = 0x10
	long _state;	// 20 = 0x14
	BOOL _enabled;	// 24 = 0x18
	BOOL _screenSaverPosted;	// 25 = 0x19
	BOOL _handlingTimeoutChangeNotification;	// 26 = 0x1a
	ATVScreenSaverPrefetchTask *_prefetchTask;	// 28 = 0x1c
	BOOL _screenSaverAutoFired;	// 32 = 0x20
	BOOL _postTopMenuEventOnDismiss;	// 33 = 0x21
}
@property(assign, nonatomic) BOOL postTopMenuEventOnDismiss;	// G=0x216bc5; S=0x216bd5; @synthesize=_postTopMenuEventOnDismiss
+ (id)screenSaverFaces;	// 0x2163fd
+ (id)screenSaverFacesCachePath;	// 0x2163ad
+ (void)setSingleton:(id)singleton;	// 0x216445
+ (id)singleton;	// 0x216435
- (id)init;	// 0x216459
- (void)_createTimer;	// 0x216f91
- (void)_dismissScreenSaver:(id)saver;	// 0x217379
- (void)_fadeFinished;	// 0x216be5
- (void)_prefetchComplete:(id)complete;	// 0x217bb1
- (void)_screenSaverArchiveChanged:(id)changed;	// 0x217651
- (void)_screenSaverControllerActivate:(id)activate;	// 0x2173f5
- (void)_screenSaverControllerDeactivate:(id)deactivate;	// 0x217439
- (void)_screenSaverControllerDeactivateWithTopMenuEvent:(id)topMenuEvent;	// 0x21748d
- (void)_screenSaverFired:(id)fired;	// 0x217061
- (void)_screenSaverIntervalChanged:(id)changed;	// 0x2174b1
- (id)_screenSaverPlugInControl;	// 0x217101
- (void)_serverStatusChanged:(id)changed;	// 0x21780d
- (void)_startOneTimePrefetchTask:(id)task;	// 0x217981
- (void)_startRepeatingPrefetchTask;	// 0x217a99
- (void)_stopPrefetchTask;	// 0x217be1
- (void)_updateActivity:(id)activity;	// 0x217305
- (void)dealloc;	// 0x216691
- (void)enable;	// 0x216751
// declared property getter: - (BOOL)postTopMenuEventOnDismiss;	// 0x216bc5
- (BOOL)screenSaverPrefetchActive;	// 0x216ba1
- (BOOL)screenSaverRequiresPrefetch;	// 0x216ac1
// declared property setter: - (void)setPostTopMenuEventOnDismiss:(BOOL)dismiss;	// 0x216bd5
- (void)showScreenSaver;	// 0x216779
@end
