/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPStartDataPacket : NSObject {
	unsigned _transactionID;	// 4 = 0x4
	unsigned _totalDataSize;	// 8 = 0x8
}
@property(assign) unsigned long totalDataSize;	// G=0x332d1801; S=0x332d1811; converted property
@property(assign) unsigned long transactionID;	// G=0x332d17e1; S=0x332d17f1; converted property
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x332d1951
- (id)initWithTransactionID:(unsigned long)transactionID totalDataSize:(unsigned long)size;	// 0x332d1821
- (id)contentForTCP;	// 0x332d18c5
- (id)description;	// 0x332d1869
// converted property setter: - (void)setTotalDataSize:(unsigned long)size;	// 0x332d1811
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x332d17f1
// converted property getter: - (unsigned long)totalDataSize;	// 0x332d1801
// converted property getter: - (unsigned long)transactionID;	// 0x332d17e1
@end
