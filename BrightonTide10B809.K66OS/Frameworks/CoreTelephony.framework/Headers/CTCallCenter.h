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
@property(copy, nonatomic) id callEventHandler;	// G=0x3173d94d; S=0x3173d95d; 
@property(retain) NSSet *currentCalls;	// G=0x3173de95; S=0x3173dee9; @dynamic
- (id)init;	// 0x3173d7f5
- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)failureLogMessage;	// 0x3173e251
- (BOOL)calculateCallStateChanges:(id)changes;	// 0x3173dadd
// declared property getter: - (id)callEventHandler;	// 0x3173d94d
- (void)cleanUpServerConnection;	// 0x3173d7d1
// declared property getter: - (id)currentCalls;	// 0x3173de95
- (void)dealloc;	// 0x3173d8d9
- (id)description;	// 0x3173e3f1
- (BOOL)getCurrentCallSetFromServer:(id)server;	// 0x3173da09
- (void)handleNotificationFromConnection:(void *)connection ofType:(id)type withInfo:(id)info;	// 0x3173df25
// declared property setter: - (void)setCallEventHandler:(id)handler;	// 0x3173d95d
// declared property setter: - (void)setCurrentCalls:(id)calls;	// 0x3173dee9
- (BOOL)setUpServerConnection;	// 0x3173d641
@end

