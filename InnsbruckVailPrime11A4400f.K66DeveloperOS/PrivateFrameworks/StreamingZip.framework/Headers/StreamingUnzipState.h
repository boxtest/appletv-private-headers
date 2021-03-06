/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

#import "StreamingZip-Structs.h"
#import </libobjc.A.h>

@class NSDictionary, NSMutableData, NSString, NSArray;

@interface StreamingUnzipState : NSObject {
	z_stream_s _zlibState;	// 4 = 0x4
	unsigned long long _lastResumptionSavedOffset;	// 60 = 0x3c
	unsigned long long _hashedChunkSize;	// 68 = 0x44
	unsigned long long _bytesHashedInChunk;	// 76 = 0x4c
	unsigned long long _uncompressedBytesOutput;	// 84 = 0x54
	NSString *_unzipPath;	// 92 = 0x5c
	NSArray *_md5Hashes;	// 96 = 0x60
	unsigned long _currentLFRecordAllocationSize;	// 100 = 0x64
	CC_MD5state_st _md5Context;	// 104 = 0x68
	NSDictionary *_streamInfoDict;	// 196 = 0xc4
	NSString *_lastChunkPartialHash;	// 200 = 0xc8
	NSMutableData *_unsureData;	// 204 = 0xcc
	NSMutableData *_incompleteData;	// 208 = 0xd0
	NSMutableData *_unfinishedCompressedData;	// 212 = 0xd4
	XXStruct_689K1A *_currentLFRecord;	// 216 = 0xd8
	unsigned long long _thisStageBytesComplete;	// 220 = 0xdc
	unsigned long long _currentOffset;	// 228 = 0xe4
	unsigned long long _outputFileOffsetAtLastBlockEnd;	// 236 = 0xec
	unsigned long long _recordsProcessed;	// 244 = 0xf4
	unsigned long long _totalRecordCount;	// 252 = 0xfc
	unsigned long _currentCRC32;	// 260 = 0x104
	int _currentOutputFD;	// 264 = 0x108
	unsigned short _currentLFMode;	// 268 = 0x10c
	unsigned char _streamState;	// 270 = 0x10e
	unsigned char _lastBlockEndNumUnusedBits;	// 271 = 0x10f
	unsigned char _lastBlockEndLastByte;	// 272 = 0x110
	BOOL _currentLFIsStreamMetadata;	// 273 = 0x111
}
@property(readonly, assign, nonatomic) unsigned long long bytesHashedInChunk;	// G=0x328eec51; @synthesize=_bytesHashedInChunk
@property(assign, nonatomic) unsigned long currentCRC32;	// G=0x328eeb79; S=0x328eeb89; @synthesize=_currentCRC32
@property(assign, nonatomic) BOOL currentLFIsStreamMetadata;	// G=0x328eec31; S=0x328eec41; @synthesize=_currentLFIsStreamMetadata
@property(assign, nonatomic) unsigned short currentLFMode;	// G=0x328eec01; S=0x328eec11; @synthesize=_currentLFMode
@property(assign, nonatomic) XXStruct_689K1A *currentLFRecord;	// G=0x328eeae1; S=0x328eeaf1; @synthesize=_currentLFRecord
@property(assign, nonatomic) unsigned long currentLFRecordAllocationSize;	// G=0x328eeb01; S=0x328eeb11; @synthesize=_currentLFRecordAllocationSize
@property(assign, nonatomic) unsigned long long currentOffset;	// G=0x328eeb4d; S=0x328eeb65; @synthesize=_currentOffset
@property(assign, nonatomic) int currentOutputFD;	// G=0x328eeb99; S=0x328eb609; @synthesize=_currentOutputFD
@property(readonly, assign, nonatomic) unsigned long long hashedChunkSize;	// G=0x328eec69; @synthesize=_hashedChunkSize
@property(retain, nonatomic) NSMutableData *incompleteData;	// G=0x328eea71; S=0x328eea81; @synthesize=_incompleteData
@property(retain, nonatomic) NSString *lastChunkPartialHash;	// G=0x328eea01; S=0x328eea11; @synthesize=_lastChunkPartialHash
@property(assign, nonatomic) unsigned long long recordsProcessed;	// G=0x328eeba9; S=0x328eebc1; @synthesize=_recordsProcessed
@property(retain, nonatomic) NSDictionary *streamInfoDict;	// G=0x328ee9c9; S=0x328ee9d9; @synthesize=_streamInfoDict
@property(assign, nonatomic) unsigned char streamState;	// G=0x328eec21; S=0x328eb62d; @synthesize=_streamState
@property(assign, nonatomic) unsigned long long thisStageBytesComplete;	// G=0x328eeb21; S=0x328eeb39; @synthesize=_thisStageBytesComplete
@property(assign, nonatomic) unsigned long long totalRecordCount;	// G=0x328eebd5; S=0x328eebed; @synthesize=_totalRecordCount
@property(assign, nonatomic) unsigned long long uncompressedBytesOutput;	// G=0x328eec81; S=0x328eec99; @synthesize=_uncompressedBytesOutput
@property(retain, nonatomic) NSMutableData *unfinishedCompressedData;	// G=0x328eeaa9; S=0x328eeab9; @synthesize=_unfinishedCompressedData
@property(retain, nonatomic) NSMutableData *unsureData;	// G=0x328eea39; S=0x328eea49; @synthesize=_unsureData
@property(readonly, assign, nonatomic) NSString *unzipPath;	// G=0x328ee9b9; @synthesize=_unzipPath
@property(readonly, assign, nonatomic) z_stream_s *zlibState;	// G=0x328eb5e9; 
+ (id)unzipStateWithPath:(id)path md5Hashes:(id)hashes hashedChunkSize:(unsigned long long)size error:(id *)error;	// 0x328ee8fd
- (id)init;	// 0x328eb559
- (id)initWithPath:(id)path md5Hashes:(id)hashes hashedChunkSize:(unsigned long long)size error:(id *)error;	// 0x328ecb7d
- (void).cxx_destruct;	// 0x328eecad
- (id)_checkHashForOffset:(unsigned long long)offset;	// 0x328ec345
- (void)_internalSetStreamState:(unsigned char)state;	// 0x328eb5f9
// declared property getter: - (unsigned long long)bytesHashedInChunk;	// 0x328eec51
- (id)checkLastChunkPartialHash;	// 0x328ec6ad
- (void)clearSavedState;	// 0x328eb8e1
// declared property getter: - (unsigned long)currentCRC32;	// 0x328eeb79
// declared property getter: - (BOOL)currentLFIsStreamMetadata;	// 0x328eec31
// declared property getter: - (unsigned short)currentLFMode;	// 0x328eec01
// declared property getter: - (XXStruct_689K1A *)currentLFRecord;	// 0x328eeae1
// declared property getter: - (unsigned long)currentLFRecordAllocationSize;	// 0x328eeb01
// declared property getter: - (unsigned long long)currentOffset;	// 0x328eeb4d
// declared property getter: - (int)currentOutputFD;	// 0x328eeb99
- (void)dealloc;	// 0x328eb581
- (id)finishStream;	// 0x328ecaad
// declared property getter: - (unsigned long long)hashedChunkSize;	// 0x328eec69
// declared property getter: - (id)incompleteData;	// 0x328eea71
// declared property getter: - (id)lastChunkPartialHash;	// 0x328eea01
- (void)markResumptionPoint;	// 0x328eb975
- (void)markResumptionPointWithLastCompressedByte:(unsigned char)lastCompressedByte;	// 0x328eb979
// declared property getter: - (unsigned long long)recordsProcessed;	// 0x328eeba9
- (id)serializeState;	// 0x328eba25
// declared property setter: - (void)setCurrentCRC32:(unsigned long)a32;	// 0x328eeb89
// declared property setter: - (void)setCurrentLFIsStreamMetadata:(BOOL)metadata;	// 0x328eec41
// declared property setter: - (void)setCurrentLFMode:(unsigned short)mode;	// 0x328eec11
// declared property setter: - (void)setCurrentLFRecord:(XXStruct_689K1A *)record;	// 0x328eeaf1
// declared property setter: - (void)setCurrentLFRecordAllocationSize:(unsigned long)size;	// 0x328eeb11
// declared property setter: - (void)setCurrentOffset:(unsigned long long)offset;	// 0x328eeb65
// declared property setter: - (void)setCurrentOutputFD:(int)fd;	// 0x328eb609
// declared property setter: - (void)setIncompleteData:(id)data;	// 0x328eea81
// declared property setter: - (void)setLastChunkPartialHash:(id)hash;	// 0x328eea11
// declared property setter: - (void)setRecordsProcessed:(unsigned long long)processed;	// 0x328eebc1
// declared property setter: - (void)setStreamInfoDict:(id)dict;	// 0x328ee9d9
// declared property setter: - (void)setStreamState:(unsigned char)state;	// 0x328eb62d
// declared property setter: - (void)setThisStageBytesComplete:(unsigned long long)complete;	// 0x328eeb39
// declared property setter: - (void)setTotalRecordCount:(unsigned long long)count;	// 0x328eebed
// declared property setter: - (void)setUncompressedBytesOutput:(unsigned long long)output;	// 0x328eec99
// declared property setter: - (void)setUnfinishedCompressedData:(id)data;	// 0x328eeab9
// declared property setter: - (void)setUnsureData:(id)data;	// 0x328eea49
// declared property getter: - (id)streamInfoDict;	// 0x328ee9c9
// declared property getter: - (unsigned char)streamState;	// 0x328eec21
// declared property getter: - (unsigned long long)thisStageBytesComplete;	// 0x328eeb21
// declared property getter: - (unsigned long long)totalRecordCount;	// 0x328eebd5
// declared property getter: - (unsigned long long)uncompressedBytesOutput;	// 0x328eec81
// declared property getter: - (id)unfinishedCompressedData;	// 0x328eeaa9
// declared property getter: - (id)unsureData;	// 0x328eea39
// declared property getter: - (id)unzipPath;	// 0x328ee9b9
- (id)updateMD5HashFromOffset:(unsigned long long)offset withBytes:(const void *)bytes length:(unsigned long)length;	// 0x328eca81
- (id)updateMD5HashFromOffset:(unsigned long long)offset withBytes:(const void *)bytes length:(unsigned long)length onlyFinishCurrentChunk:(BOOL)chunk;	// 0x328ec845
// declared property getter: - (z_stream_s *)zlibState;	// 0x328eb5e9
@end

