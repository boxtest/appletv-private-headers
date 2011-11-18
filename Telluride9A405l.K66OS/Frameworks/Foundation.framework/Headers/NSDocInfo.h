/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library


@interface NSDocInfo : NSObject <NSCopying> {
	long time;	// 4 = 0x4
	unsigned short mode;	// 8 = 0x8
	struct {
		unsigned isDir : 1;
		unsigned isSingleFile : 1;
		unsigned isSoftLink : 1;
		unsigned _pad : 13;
	} flags;	// 10 = 0xa
}
- (id)initFromInfo:(stat *)info;	// 0x3035001d
- (id)initWithFileAttributes:(id)fileAttributes;	// 0x303500c5
- (id)copy;	// 0x30350251
- (id)copyWithZone:(NSZone *)zone;	// 0x30350249
@end

