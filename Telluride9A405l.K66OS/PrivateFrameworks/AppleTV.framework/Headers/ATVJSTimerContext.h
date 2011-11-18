/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVJSTimerContext : NSObject {
@private
	ATVJSContext *_context;	// 4 = 0x4
	OpaqueJSValue *_callback;	// 8 = 0x8
	OpaqueJSValue *_thisObject;	// 12 = 0xc
	const OpaqueJSValue **_args;	// 16 = 0x10
	unsigned long _argCount;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) unsigned long argCount;	// G=0x35d9ed35; @synthesize=_argCount
@property(readonly, assign, nonatomic) const OpaqueJSValue **args;	// G=0x35d9ed25; @synthesize=_args
@property(readonly, assign, nonatomic) OpaqueJSValue *callback;	// G=0x35d9ed05; @synthesize=_callback
@property(readonly, assign) ATVJSContext *context;	// G=0x35d9ecf1; @synthesize=_context
@property(readonly, assign, nonatomic) OpaqueJSValue *thisObject;	// G=0x35d9ed15; @synthesize=_thisObject
- (id)initWithContext:(id)context callback:(OpaqueJSValue *)callback thisObject:(OpaqueJSValue *)object args:(const OpaqueJSValue **)args argCount:(unsigned long)count;	// 0x35d9e9a1
// declared property getter: - (unsigned long)argCount;	// 0x35d9ed35
// declared property getter: - (const OpaqueJSValue **)args;	// 0x35d9ed25
// declared property getter: - (OpaqueJSValue *)callback;	// 0x35d9ed05
// declared property getter: - (id)context;	// 0x35d9ecf1
- (void)dealloc;	// 0x35d9eb59
// declared property getter: - (OpaqueJSValue *)thisObject;	// 0x35d9ed15
@end

