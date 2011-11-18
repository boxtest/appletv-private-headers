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
+ (id)immutablePlaceholder;	// 0x3533873d
+ (void)initialize;	// 0x353386c1
- (id)init;	// 0x35338785
- (id)initWithCoder:(id)coder;	// 0x353387c1
- (id)initWithFileSec:(filesec *)fileSec;	// 0x3533874d
- (id)copyWithZone:(NSZone *)zone;	// 0x353389e5
- (void)dealloc;	// 0x353387bd
- (void)encodeWithCoder:(id)coder;	// 0x35338965
- (oneway void)release;	// 0x353387b1
- (id)retain;	// 0x353387ad
- (unsigned)retainCount;	// 0x353387b5
@end

