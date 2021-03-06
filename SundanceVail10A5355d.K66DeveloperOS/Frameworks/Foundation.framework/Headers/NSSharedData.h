/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSData.h> // Unknown library


@interface NSSharedData : NSData {
	unsigned _dataLength;	// 4 = 0x4
	unsigned _memLength;	// 8 = 0x8
	char *_mem;	// 12 = 0xc
	BOOL _allowWrite;	// 16 = 0x10
}
+ (BOOL)supportsSecureCoding;	// 0x346a05c9
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x346a04e5
- (id)initWithBytes:(const void *)bytes length:(unsigned)length allowWrite:(BOOL)write;	// 0x346a03bd
- (id)initWithCoder:(id)coder;	// 0x346a05cd
- (BOOL)_allowsDirectEncoding;	// 0x346a05a9
- (const void *)bytes;	// 0x346a03ad
- (Class)classForCoder;	// 0x346a05ad
- (void)dealloc;	// 0x346a0509
- (void)encodeWithCoder:(id)coder;	// 0x346a0875
- (void)finalize;	// 0x346a0559
- (unsigned)length;	// 0x346a039d
@end

