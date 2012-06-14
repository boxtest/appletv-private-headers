/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCopying.h"

@class NSDocInfo, NSString;

@interface NSLeafProxy <NSCopying> {
	Class isa;	// 0 = 0x0
	NSString *dir;	// 4 = 0x4
	NSString *file;	// 8 = 0x8
	NSDocInfo *docInfo;	// 12 = 0xc
	int refCount;	// 16 = 0x10
	id realObject;	// 20 = 0x14
}
+ (id)alloc;	// 0x3035055d
+ (id)allocWithZone:(NSZone *)zone;	// 0x3035053d
+ (void)forwardInvocation:(id)invocation;	// 0x30350571
- (id)initDir:(id)dir file:(id)file docInfo:(id)info;	// 0x30350771
- (BOOL)_isDeallocating;	// 0x303508e5
- (BOOL)_tryRetain;	// 0x303508e1
- (id)autorelease;	// 0x303508e9
- (id)copy;	// 0x30350815
- (id)copyWithZone:(NSZone *)zone;	// 0x303507d1
- (void)dealloc;	// 0x30350921
- (void)forwardInvocation:(id)invocation;	// 0x303505bd
- (BOOL)isProxy;	// 0x30350955
- (id)methodSignatureForSelector:(SEL)selector;	// 0x30350729
- (void)reallyDealloc;	// 0x30350829
- (void)release;	// 0x303508ad
- (id)retain;	// 0x30350899
- (unsigned)retainCount;	// 0x30350911
@end
