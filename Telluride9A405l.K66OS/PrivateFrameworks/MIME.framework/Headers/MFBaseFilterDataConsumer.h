/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MFDataConsumer.h"

@class NSArray, NSMutableArray;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {
	NSMutableArray *_consumers;	// 4 = 0x4
	BOOL _serialAppend;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *consumers;	// G=0x311fe53d; @synthesize=_consumers
@property(assign, nonatomic, getter=isSerialAppend) BOOL serialAppend;	// G=0x311fe54d; S=0x311fe55d; @synthesize=_serialAppend
+ (id)filterWithConsumer:(id)consumer;	// 0x311fe8bd
+ (id)filterWithConsumers:(id)consumers;	// 0x311fe881
- (id)initWithConsumer:(id)consumer;	// 0x311fe621
- (id)initWithConsumers:(id)consumers;	// 0x311fe5e1
- (int)appendData:(id)data;	// 0x311fe68d
// declared property getter: - (id)consumers;	// 0x311fe53d
- (void)dealloc;	// 0x311fe9ad
- (void)done;	// 0x311fe9f9
// declared property getter: - (BOOL)isSerialAppend;	// 0x311fe54d
// declared property setter: - (void)setSerialAppend:(BOOL)append;	// 0x311fe55d
@end

