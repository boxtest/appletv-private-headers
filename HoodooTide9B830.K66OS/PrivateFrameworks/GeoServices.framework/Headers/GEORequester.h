/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequester.h> // Unknown library

@class NSThread;

@interface GEORequester : PBRequester {
	BOOL _disableReplay;	// 87 = 0x57
	NSThread *_thread;	// 88 = 0x58
}
@property(assign) BOOL disableReplay;	// G=0x35f4509d; S=0x35f450ad; @synthesize=_disableReplay
+ (void)replayRequests;	// 0x35f44d55
+ (void)stopAllRequests;	// 0x35f44d15
- (id)initWithURL:(id)url andDelegate:(id)delegate;	// 0x35f44d95
- (void)_applicationDidStopAllRequests:(id)_application;	// 0x35f44ed5
- (void)_applicationWantsToReplayRequests:(id)replayRequests;	// 0x35f44f51
- (void)_handleResumeOnThread;	// 0x35f44fc5
- (void)_handleSuspendOnThread;	// 0x35f44f11
- (void)dealloc;	// 0x35f44e79
// declared property getter: - (BOOL)disableReplay;	// 0x35f4509d
// declared property setter: - (void)setDisableReplay:(BOOL)replay;	// 0x35f450ad
- (void)start;	// 0x35f44fd5
@end
