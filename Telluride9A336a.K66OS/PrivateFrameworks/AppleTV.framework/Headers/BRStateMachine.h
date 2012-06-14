/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSTimer, NSRunLoop, NSString, NSMutableDictionary;

@interface BRStateMachine : NSObject {
@private
	NSRunLoop *_runloop;	// 4 = 0x4
	NSTimer *_timer;	// 8 = 0x8
	NSMutableArray *_events;	// 12 = 0xc
	NSMutableDictionary *_handlers;	// 16 = 0x10
	NSMutableDictionary *_defaultHandlers;	// 20 = 0x14
	BOOL shouldProcessEvents;	// 24 = 0x18
	NSString *_currentState;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	BOOL _immediate;	// 36 = 0x24
	BOOL _ignoreRecursiveEvents;	// 37 = 0x25
}
@property(readonly, assign) NSString *currentState;	// G=0x33b65e79; @synthesize=_currentState
@property(assign, nonatomic) BOOL ignoreRecursiveEvents;	// G=0x33b65eb1; S=0x33b65ec1; @synthesize=_ignoreRecursiveEvents
@property(readonly, assign) BOOL immediate;	// G=0x33b65ea1; @synthesize=_immediate
@property(readonly, assign) NSString *name;	// G=0x33b65e8d; @synthesize=_name
@property(assign, nonatomic) BOOL shouldProcessEvents;	// G=0x33b65e59; S=0x33b65e69; @synthesize
+ (void)deregisterStateMachine:(id)machine;	// 0x33b650a5
+ (void)initialize;	// 0x33b64f85
+ (void)registerStateMachine:(id)machine;	// 0x33b64fd9
+ (id)stateMachineWithName:(id)name;	// 0x33b6519d
- (id)initWithName:(id)name initialState:(id)state immediateMode:(BOOL)mode;	// 0x33b65281
- (id)_eventHandlerForEvent:(id)event;	// 0x33b66269
- (void)_processNextEvent;	// 0x33b65ed1
// declared property getter: - (id)currentState;	// 0x33b65e79
- (void)dealloc;	// 0x33b653b5
- (void)deregisterHandlers;	// 0x33b65a6d
// declared property getter: - (BOOL)ignoreRecursiveEvents;	// 0x33b65eb1
// declared property getter: - (BOOL)immediate;	// 0x33b65ea1
- (void)logUnhandledEvents;	// 0x33b65aa9
// declared property getter: - (id)name;	// 0x33b65e8d
- (void)postEvent:(id)event withContext:(id)context;	// 0x33b65525
- (void)postEvent:(id)event withContext:(id)context userInfo:(id)info;	// 0x33b65549
- (void)purgeEventQueue;	// 0x33b65871
- (void)registerDefaultHandlerForEvent:(id)event withBlock:(id)block;	// 0x33b659f1
- (void)registerHandlerForEvent:(id)event onState:(id)state withBlock:(id)block;	// 0x33b65929
// declared property setter: - (void)setIgnoreRecursiveEvents:(BOOL)events;	// 0x33b65ec1
// declared property setter: - (void)setShouldProcessEvents:(BOOL)processEvents;	// 0x33b65e69
// declared property getter: - (BOOL)shouldProcessEvents;	// 0x33b65e59
@end
