/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSConditionLock;
@protocol VSRecognitionResultHandlingThreadDelegate;

@interface VSRecognitionResultHandlingThread : NSObject {
	id<VSRecognitionResultHandlingThreadDelegate> _delegate;	// 4 = 0x4
	NSMutableArray *_requests;	// 8 = 0x8
	NSConditionLock *_lock;	// 12 = 0xc
	struct {
		unsigned running : 1;
		unsigned delegateDidHandleResults : 1;
		unsigned valid : 1;
	} _resultHandlingFlags;	// 16 = 0x10
}
- (id)init;	// 0x35c2607d
- (void)_handleRequests;	// 0x35c263dd
- (void)_notifyRequestHandled:(id)handled;	// 0x35c26361
- (void)dealloc;	// 0x35c26101
- (void)handleResults:(id)results withHandler:(id)handler;	// 0x35c261bd
- (void)invalidate;	// 0x35c26305
- (void)setDelegate:(id)delegate;	// 0x35c26165
@end

