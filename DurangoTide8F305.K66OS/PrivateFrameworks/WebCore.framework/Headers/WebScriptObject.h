/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"

@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject {
@private
	WebScriptObjectPrivate *_private;	// 4 = 0x4
}
+ (id)_convertValueToObjcValue:(JSValue)objcValue originRootObject:(RootObject *)object rootObject:(RootObject *)object3;	// 0x31970fa1
+ (void)initialize;	// 0x313f716d
+ (id)scriptObjectForJSObject:(OpaqueJSValue *)jsobject originRootObject:(RootObject *)object rootObject:(RootObject *)object3;	// 0x314b7cf9
+ (BOOL)throwException:(id)exception;	// 0x31971241
- (OpaqueJSValue *)JSObject;	// 0x31971251
- (BOOL)_hasImp;	// 0x314b87fd
- (JSObject *)_imp;	// 0x314b909d
- (id)_init;	// 0x314616e5
- (id)_initWithJSObject:(JSObject *)jsobject originRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object rootObject:(PassRefPtr<JSC::Bindings::RootObject>)object3;	// 0x31972c01
- (void)_initializeScriptDOMNodeImp;	// 0x316997c5
- (BOOL)_isSafeScript;	// 0x314b8f95
- (RootObject *)_originRootObject;	// 0x31970e7d
- (RootObject *)_rootObject;	// 0x314b9005
- (void)_setImp:(JSObject *)imp originRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object rootObject:(PassRefPtr<JSC::Bindings::RootObject>)object3;	// 0x314b8821
- (void)_setOriginRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object andRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object2;	// 0x3155cf39
- (id)callWebScriptMethod:(id)method withArguments:(id)arguments;	// 0x31972695
- (void)dealloc;	// 0x31468661
- (id)evaluateWebScript:(id)script;	// 0x31972231
- (void)finalize;	// 0x31970ed5
- (BOOL)hasWebScriptKey:(id)key;	// 0x319717c5
- (id)objectAtIndex:(unsigned)index;	// 0x31972e91
- (void)removeWebScriptKey:(id)key;	// 0x31971b31
- (void)setException:(id)exception;	// 0x31971281
- (void)setValue:(id)value forKey:(id)key;	// 0x314b8c85
- (void)setWebScriptValueAtIndex:(unsigned)index value:(id)value;	// 0x319712bd
- (id)stringRepresentation;	// 0x31971675
- (id)valueForKey:(id)key;	// 0x31971e91
- (id)webScriptValueAtIndex:(unsigned)index;	// 0x31971441
@end

