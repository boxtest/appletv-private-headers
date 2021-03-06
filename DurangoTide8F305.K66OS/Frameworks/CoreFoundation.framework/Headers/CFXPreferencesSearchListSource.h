/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CFXPreferencesSource.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface CFXPreferencesSearchListSource : CFXPreferencesSource {
@private
	CFArrayRef _sourceList;	// 16 = 0x10
}
- (id)init;	// 0x32e3b77d
- (void)addSource:(id)source;	// 0x32e3bb29
- (CFDictionaryRef)copyDictionary;	// 0x32e3ec0d
- (CFArrayRef)copyKeyList;	// 0x32e3ed75
- (void)dealloc;	// 0x32ea08f9
- (void)finalize;	// 0x32ea08ad
- (long)generationCount;	// 0x32e3ed01
- (void *)getValueForKey:(CFStringRef)key;	// 0x32e19af5
- (void)removeSource:(id)source;	// 0x32ea1ccd
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x32ea0625
- (unsigned char)synchronize;	// 0x32e29969
@end

