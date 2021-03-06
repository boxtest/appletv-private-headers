/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

#import <NSObject.h> // Unknown library
#import "AKActor.h"

@class AKMailbox;

@protocol AKActor
- (id)mailbox;
- (id)send;
@end

@interface AKActor : NSObject <AKActor> {
@private
	AKMailbox *_mailbox;	// 4 = 0x4
}
@property(readonly, retain) AKMailbox *mailbox;	// G=0x35fa8a39; converted property
- (id)init;	// 0x35fa8b9d
- (void)dealloc;	// 0x35fa8a49
- (id)deferredReply;	// 0x35fa8b65
// converted property getter: - (id)mailbox;	// 0x35fa8a39
- (id)send;	// 0x35fa8a29
- (id)startMigrantDispatchQueue;	// 0x35fa8b09
- (id)startThreadDispatchQueue;	// 0x35fa8aad
@end

