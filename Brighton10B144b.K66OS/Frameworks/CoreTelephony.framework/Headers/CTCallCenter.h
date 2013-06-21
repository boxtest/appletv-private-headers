/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <NSObject.h> // Unknown library

@class NSSet;

@interface CTCallCenter : NSObject {
	void *_server;	// 4 = 0x4
	NSSet *_currentCalls;	// 8 = 0x8
	id _callEventHandler;	// 12 = 0xc
}
@property(copy, nonatomic) id callEventHandler;	// G=0x3173d955; S=0x3173d965; 
@property(retain) NSSet *currentCalls;	// G=0x3173de9d; S=0x3173def1; @dynamic
- (id)init;	// 0x3173d7fd
- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)failureLogMessage;	// 0x3173e259
- (BOOL)calculateCallStateChanges:(id)changes;	// 0x3173dae5
// declared property getter: - (id)callEventHandler;	// 0x3173d955
- (void)cleanUpServerConnection;	// 0x3173d7d9
// declared property getter: - (id)currentCalls;	// 0x3173de9d
- (void)dealloc;	// 0x3173d8e1
- (id)description;	// 0x3173e3f9
- (BOOL)getCurrentCallSetFromServer:(id)server;	// 0x3173da11
- (void)handleNotificationFromConnection:(void *)connection ofType:(id)type withInfo:(id)info;	// 0x3173df2d
// declared property setter: - (void)setCallEventHandler:(id)handler;	// 0x3173d965
// declared property setter: - (void)setCurrentCalls:(id)calls;	// 0x3173def1
- (BOOL)setUpServerConnection;	// 0x3173d649
@end
