/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject {
	WebScriptWorldPrivate *_private;	// 4 = 0x4
}
+ (id)findOrCreateWorld:(DOMWrapperWorld *)world;	// 0x367dbc01
+ (id)scriptWorldForGlobalContext:(OpaqueJSContext *)globalContext;	// 0x367dbbe5
+ (id)standardWorld;	// 0x367dba2d
+ (id)world;	// 0x3678427d
- (id)init;	// 0x367842b5
- (id)initWithWorld:(PassRefPtr<WebCore::DOMWrapperWorld>)world;	// 0x367843fd
- (void)dealloc;	// 0x367849e1
- (void)unregisterWorld;	// 0x367849c1
@end

