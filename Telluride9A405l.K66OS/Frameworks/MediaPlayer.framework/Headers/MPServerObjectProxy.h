/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library


@interface MPServerObjectProxy : NSObject {
	unsigned _didPrepareForRemoteSelectorInvocation : 1;	// 4 = 0x4
	unsigned _lastPrepareForRemoteSelectorInvocationTimedOut : 1;	// 4 = 0x4
	double _lastPrepareAttemptTime;	// 8 = 0x8
}
+ (id)_center;	// 0x33c09905
- (id)init;	// 0x33c09489
- (void)_messagingCenterDied:(id)died;	// 0x33c0999d
- (BOOL)_performRemoteSelector:(SEL)selector userInfo:(id)info timeout:(double)timeout;	// 0x33c099ed
- (id)_performRemoteSelectorAndReceiveReply:(SEL)reply userInfo:(id)info timeout:(double)timeout;	// 0x33c09b25
- (void)_serverConnectionDied;	// 0x33c099c9
- (void)dealloc;	// 0x33c09531
- (void)didPrepareForRemoteSelectorInvocation;	// 0x33c098fd
- (void)forwardInvocation:(id)invocation;	// 0x33c095c5
- (BOOL)prepareForRemoteSelectorInvocation;	// 0x33c0979d
- (BOOL)prepareForRemoteSelectorInvocationWithTimeout:(double *)timeout;	// 0x33c097a1
- (void)serverConnectionDied;	// 0x33c09901
@end

