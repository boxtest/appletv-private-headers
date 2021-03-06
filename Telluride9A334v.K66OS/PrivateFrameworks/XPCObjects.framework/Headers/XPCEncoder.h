/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import "XPCObjects-Structs.h"
#import <NSCoder.h> // Unknown library


@interface XPCEncoder : NSCoder {
	void *_encoding;	// 4 = 0x4
	void *_currentObject;	// 8 = 0x8
	CFDictionaryRef _encodedObjects;	// 12 = 0xc
	CFDictionaryRef _conditionalObjects;	// 16 = 0x10
	unsigned _nextConditionalObjectID;	// 20 = 0x14
	CFDictionaryRef _replacementObjects;	// 24 = 0x18
}
@property(readonly, assign) void *encoding;	// G=0x30b495f1; converted property
+ (void *)newEncodingForRootObject:(id)rootObject;	// 0x30b496c1
- (id)init;	// 0x30b49629
- (void)_fixUpConditionalObjects;	// 0x30b49741
- (id)_replacementObjectForObject:(id)object;	// 0x30b49821
- (void)_verifyCurrentObject;	// 0x30b49c45
- (BOOL)allowsKeyedCoding;	// 0x30b49601
- (void)dealloc;	// 0x30b49cc9
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x30b49a05
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x30b49895
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x30b49a55
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x30b498e1
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x30b4992d
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x30b499c5
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x30b49959
- (void)encodeInt:(int)int forKey:(id)key;	// 0x30b499e5
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x30b499a5
- (void)encodeObject:(id)object forKey:(id)key;	// 0x30b49b19
- (void)encodeRootObject:(id)object;	// 0x30b49c99
// converted property getter: - (void *)encoding;	// 0x30b495f1
- (int)versionForClassName:(id)className;	// 0x30b4986d
@end

