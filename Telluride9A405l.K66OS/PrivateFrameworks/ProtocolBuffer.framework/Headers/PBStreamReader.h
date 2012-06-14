/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import "PBDataReader.h"

@class NSInputStream;

@interface PBStreamReader : PBDataReader {
	NSInputStream *_stream;	// 20 = 0x14
}
@property(retain) NSInputStream *stream;	// G=0x31036529; S=0x3103653d; @synthesize=_stream
+ (id)readProtoBuffersOfClass:(Class)aClass fromFile:(id)file error:(id *)error;	// 0x310362e1
- (id)initWithStream:(id)stream;	// 0x310360ad
- (void)dealloc;	// 0x3103610d
- (int)read:(const char *)read maxLength:(unsigned)length;	// 0x310361a1
- (id)readBytes:(unsigned)bytes;	// 0x31036231
- (id)readProtoBuffer;	// 0x31036151
- (BOOL)seekToOffset:(unsigned)offset;	// 0x310362c5
// declared property setter: - (void)setStream:(id)stream;	// 0x3103653d
// declared property getter: - (id)stream;	// 0x31036529
@end
