/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class SSMutableURLRequestProperties;

__attribute__((visibility("hidden")))
@interface ATVJSURLRequestProperties : XXUnknownSuperclass {
	OpaqueJSValue *_jsObjectRef;	// 4 = 0x4
	SSMutableURLRequestProperties *_requestProperties;	// 8 = 0x8
}
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x3c6085; S=0x3c6095; @synthesize=_jsObjectRef
@property(retain, nonatomic) SSMutableURLRequestProperties *requestProperties;	// G=0x3c60a5; S=0x3c60b5; @synthesize=_requestProperties
- (id)initWithContext:(OpaqueJSContext *)context requestProperties:(id)properties;	// 0x3c5c91
- (void)dealloc;	// 0x3c6039
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x3c6085
// declared property getter: - (id)requestProperties;	// 0x3c60a5
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x3c6095
// declared property setter: - (void)setRequestProperties:(id)properties;	// 0x3c60b5
@end
