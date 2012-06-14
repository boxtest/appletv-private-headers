/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface PBDataWriter : NSObject {
	NSMutableData *_data;	// 4 = 0x4
}
@property(readonly, retain) NSMutableData *data;	// G=0x300cc4a9; converted property
- (id)init;	// 0x300cc3f9
// converted property getter: - (id)data;	// 0x300cc4a9
- (void)dealloc;	// 0x300cc45d
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x300ccabd
- (void)writeBOOL:(BOOL)aBool forTag:(unsigned short)tag;	// 0x300cc999
- (void)writeBareVarint:(long long)varint;	// 0x300cc621
- (void)writeBigEndianFixed16:(unsigned short)a16;	// 0x300cc4b9
- (void)writeBigEndianFixed32:(unsigned)a32;	// 0x300cc4e1
- (void)writeBigEndianShortThenString:(id)string;	// 0x300cc505
- (BOOL)writeData:(id)data;	// 0x300cca6d
- (void)writeData:(id)data forTag:(unsigned short)tag;	// 0x300cca09
- (void)writeDouble:(double)aDouble forTag:(unsigned short)tag;	// 0x300cc6a5
- (void)writeFixed32:(unsigned)a32 forTag:(unsigned short)tag;	// 0x300cc891
- (void)writeFixed64:(unsigned long long)a64 forTag:(unsigned short)tag;	// 0x300cc8cd
- (void)writeFloat:(float)aFloat forTag:(unsigned short)tag;	// 0x300cc6ed
- (void)writeInt32:(int)a32 forTag:(unsigned short)tag;	// 0x300cc729
- (void)writeInt64:(long long)a64 forTag:(unsigned short)tag;	// 0x300cc761
- (void)writeInt8:(BOOL)a8;	// 0x300cc5fd
- (void)writeProtoBuffer:(id)buffer;	// 0x300cc589
- (void)writeSfixed32:(int)a32 forTag:(unsigned short)tag;	// 0x300cc915
- (void)writeSfixed64:(long long)a64 forTag:(unsigned short)tag;	// 0x300cc951
- (void)writeSint32:(int)a32 forTag:(unsigned short)tag;	// 0x300cc811
- (void)writeSint64:(long long)a64 forTag:(unsigned short)tag;	// 0x300cc84d
- (void)writeString:(id)string forTag:(unsigned short)tag;	// 0x300cc9d1
- (void)writeTag:(unsigned short)tag andType:(unsigned char)type;	// 0x300cc679
- (void)writeUint32:(unsigned)a32 forTag:(unsigned)tag;	// 0x300cc79d
- (void)writeUint64:(unsigned long long)a64 forTag:(unsigned long long)tag;	// 0x300cc7d5
@end
