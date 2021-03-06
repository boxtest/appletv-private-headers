/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSFileSecurity.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCopying, NSCoding> {
}
+ (id)immutablePlaceholder;	// 0x3568e6d1
+ (void)initialize;	// 0x3568e655
- (id)init;	// 0x3568e711
- (id)initWithCoder:(id)coder;	// 0x3568e751
- (id)initWithFileSec:(filesec *)fileSec;	// 0x3568e6e1
- (id)copyWithZone:(NSZone *)zone;	// 0x3568e99d
- (void)dealloc;	// 0x3568e74d
- (void)encodeWithCoder:(id)coder;	// 0x3568e91d
- (oneway void)release;	// 0x3568e741
- (id)retain;	// 0x3568e73d
- (unsigned)retainCount;	// 0x3568e745
@end

