/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "CFXPreferencesSource.h"


__attribute__((visibility("hidden")))
@interface CFXPreferencesCompatibilitySource : CFXPreferencesSource {
@private
	opaque_pthread_mutex_t accessLock;	// 16 = 0x10
}
- (id)init;	// 0x352fbab1
- (CFDictionaryRef)copyDictionary;	// 0x352fc7d9
- (CFArrayRef)copyKeyList;	// 0x352fc78d
- (void)dealloc;	// 0x352fbb6d
- (void)finalize;	// 0x352fbb2d
- (void *)getValueForKey:(CFStringRef)key;	// 0x352fbbad
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x352fc739
- (unsigned char)synchronize;	// 0x352fc73d
@end
