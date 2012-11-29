/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library

@protocol OS_xpc_object;

@interface BKSXPCReply : NSObject {
	NSObject<OS_xpc_object> *_message;	// 4 = 0x4
}
+ (id)messageWithReply:(id)reply;	// 0x315e4e71
- (id)initWithReply:(id)reply;	// 0x315e4eb9
- (void)dealloc;	// 0x315e4f01
- (id)message;	// 0x315e4f6d
- (long long)messageKind;	// 0x315e4f45
- (void)sendReply:(id)reply;	// 0x315e4f7d
@end
