/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import </libobjc.A.h>

@class NSMutableArray, NSProtocolChecker, Protocol;

@interface IMInvocationQueue : NSObject {
	BOOL _holdQueue;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	id _target;	// 12 = 0xc
	NSMutableArray *_queue;	// 16 = 0x10
	NSMutableArray *_options;	// 20 = 0x14
	NSProtocolChecker *_protocolChecker;	// 24 = 0x18
	double _dequeueRate;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x31212f75; 
@property(assign) id delegate;	// G=0x31213009; S=0x3121301d; @synthesize=_delegate
@property(assign, nonatomic) double dequeueRate;	// G=0x31213061; S=0x31211f85; @synthesize=_dequeueRate
@property(readonly, assign, nonatomic) BOOL holdQueue;	// G=0x312130a9; @synthesize=_holdQueue
@property(readonly, assign, nonatomic) BOOL isEmpty;	// G=0x31212f95; 
@property(readonly, assign, nonatomic) NSMutableArray *options;	// G=0x31213089; @synthesize=_options
@property(retain, nonatomic) Protocol *protocol;	// G=0x31211f65; S=0x31211f01; 
@property(readonly, assign, nonatomic) NSProtocolChecker *protocolChecker;	// G=0x31213099; @synthesize=_protocolChecker
@property(readonly, assign, nonatomic) NSMutableArray *queue;	// G=0x31213079; @synthesize=_queue
@property(assign) id target;	// G=0x31213035; S=0x31213049; @synthesize=_target
- (id)init;	// 0x31211cdd
- (BOOL)_acceptsOptions:(unsigned)options;	// 0x3121262d
- (void)_checkQueue;	// 0x31212259
- (id)_dequeueInvocation;	// 0x31212bf9
- (int)_enqueueInvocation:(id)invocation options:(unsigned)options;	// 0x31212a3d
- (void)_holdQueueNotification:(id)notification;	// 0x31211ff5
- (BOOL)_insertInvocation:(id)invocation options:(unsigned)options;	// 0x31212849
- (BOOL)_invokeInvocation:(id)invocation;	// 0x31212181
- (int)_maxQueueLimitSize;	// 0x312125fd
- (int)_numberOfLimitedMessagesInQueue;	// 0x312124c9
- (unsigned)_optionsForInvocation:(id)invocation;	// 0x31212461
- (void)_releaseQueueNotification:(id)notification;	// 0x31212071
- (BOOL)_replaceSimilarInvocation:(id)invocation;	// 0x3121269d
- (void)_setQueueTimer;	// 0x312120cd
- (void)_stepQueueNotification:(id)notification;	// 0x31211fa9
// declared property getter: - (unsigned)count;	// 0x31212f75
- (void)dealloc;	// 0x31211d7d
// declared property getter: - (id)delegate;	// 0x31213009
// declared property getter: - (double)dequeueRate;	// 0x31213061
- (void)forwardInvocation:(id)invocation;	// 0x31211df5
// declared property getter: - (BOOL)holdQueue;	// 0x312130a9
- (void)invokeAll;	// 0x31212f0d
// declared property getter: - (BOOL)isEmpty;	// 0x31212f95
- (id)methodSignatureForSelector:(SEL)selector;	// 0x31211eb5
// declared property getter: - (id)options;	// 0x31213089
- (id)peek;	// 0x31212fc5
// declared property getter: - (id)protocol;	// 0x31211f65
// declared property getter: - (id)protocolChecker;	// 0x31213099
// declared property getter: - (id)queue;	// 0x31213079
- (void)removeAllInvocations;	// 0x31212da1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3121301d
// declared property setter: - (void)setDequeueRate:(double)rate;	// 0x31211f85
// declared property setter: - (void)setProtocol:(id)protocol;	// 0x31211f01
// declared property setter: - (void)setTarget:(id)target;	// 0x31213049
// declared property getter: - (id)target;	// 0x31213035
@end

