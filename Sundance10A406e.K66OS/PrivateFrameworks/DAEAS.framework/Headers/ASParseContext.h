/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSFileHandle, NSMutableArray, NSString;

@interface ASParseContext : NSObject {
	NSMutableArray *_dataBuffers;	// 4 = 0x4
	unsigned _offsetIntoFirstData;	// 8 = 0x8
	long long _curOffset;	// 12 = 0xc
	int _codePage;	// 20 = 0x14
	NSString *_parseErrorReason;	// 24 = 0x18
	BOOL _moreDataExpected;	// 28 = 0x1c
	int _dataGeneration;	// 32 = 0x20
	long long _expectedTotalBytesCount;	// 36 = 0x24
	long long _currentBytesReceivedCount;	// 44 = 0x2c
	unsigned _lastFoundBufferWithoutLineEnding;	// 52 = 0x34
	unsigned _numTokensInBuffersWithoutLineEndings;	// 56 = 0x38
	BOOL _lastLookedAtBufferHadStringEndPrefix;	// 60 = 0x3c
	BOOL _keepPreviousData;	// 61 = 0x3d
	NSMutableArray *_bypassedDataBuffers;	// 64 = 0x40
	NSFileHandle *_logFileHandle;	// 68 = 0x44
	NSString *_logFilePath;	// 72 = 0x48
	int _streamingState;	// 76 = 0x4c
}
@property(assign) int codePage;	// G=0x36c606c1; S=0x36c606d5; @synthesize=_codePage
@property(readonly, assign) long long curOffset;	// G=0x36c6068d; @synthesize=_curOffset
@property(readonly, assign) long long currentBytesReceivedCount;	// G=0x36c607d5; @synthesize=_currentBytesReceivedCount
@property(assign) int dataGeneration;	// G=0x36c60741; S=0x36c60755; @synthesize=_dataGeneration
@property(assign) long long expectedTotalBytesCount;	// G=0x36c6076d; S=0x36c607a1; @synthesize=_expectedTotalBytesCount
@property(assign) BOOL keepPreviousData;	// G=0x36c60829; S=0x36c60841; @synthesize=_keepPreviousData
@property(assign) BOOL moreDataExpected;	// G=0x36c60711; S=0x36c60729; @synthesize=_moreDataExpected
@property(retain) NSString *parseErrorReason;	// G=0x36c606ed; S=0x36c60701; @synthesize=_parseErrorReason
@property(assign, nonatomic) int streamingState;	// G=0x36c60809; S=0x36c60819; @synthesize=_streamingState
+ (id)_logQueue;	// 0x36c5f0a9
- (id)init;	// 0x36c5f0d5
- (void)_logBlobChunk:(id)chunk;	// 0x36c5ff91
- (void)_moveLogFileContentsAtPath:(id)path;	// 0x36c5f2c1
- (int)_numTokensForNextOpaqueDataCheckNumTokens:(BOOL)nextOpaqueDataCheckNumTokens;	// 0x36c604c9
- (void)addData:(id)data;	// 0x36c600e1
- (BOOL)advanceOffsetByAmount:(unsigned)amount;	// 0x36c5fe61
- (BOOL)advanceOffsetByAmount:(unsigned)amount retainLastToken:(BOOL)token;	// 0x36c5fc95
- (char *)bufferForLength:(unsigned)length shouldFree:(BOOL *)free;	// 0x36c5fae5
- (id)bufferWithAllData;	// 0x36c5f9e1
- (unsigned char)byteAtOffsetFromCurrentByte:(unsigned)currentByte;	// 0x36c60345
// declared property getter: - (int)codePage;	// 0x36c606c1
// declared property getter: - (long long)curOffset;	// 0x36c6068d
- (unsigned char)currentByte;	// 0x36c601b9
// declared property getter: - (long long)currentBytesReceivedCount;	// 0x36c607d5
// declared property getter: - (int)dataGeneration;	// 0x36c60741
- (void)dealloc;	// 0x36c5f4d5
// declared property getter: - (long long)expectedTotalBytesCount;	// 0x36c6076d
- (long)goodSizeForBuffer;	// 0x36c5f961
- (BOOL)hasNumberOfTokensRemaining:(unsigned)tokensRemaining;	// 0x36c5f589
- (void)invalidateBuffers;	// 0x36c60615
// declared property getter: - (BOOL)keepPreviousData;	// 0x36c60829
// declared property getter: - (BOOL)moreDataExpected;	// 0x36c60711
- (unsigned char)nextByte;	// 0x36c6043d
- (int)numTokensForNextOpaqueData;	// 0x36c60599
- (int)numTokensForNextString;	// 0x36c60455
- (int)numTokensStreamableForNextStringSizeOfTerminator:(int *)terminator;	// 0x36c605ad
- (int)numberOfBytesUntilStringEnd:(char *)bytesUntilStringEnd searchStringLength:(int)length acceptingBufferBits:(BOOL)bits;	// 0x36c5f649
// declared property getter: - (id)parseErrorReason;	// 0x36c606ed
- (void)resetToZeroOffset;	// 0x36c5fe79
// declared property setter: - (void)setCodePage:(int)page;	// 0x36c606d5
// declared property setter: - (void)setDataGeneration:(int)generation;	// 0x36c60755
// declared property setter: - (void)setExpectedTotalBytesCount:(long long)count;	// 0x36c607a1
// declared property setter: - (void)setKeepPreviousData:(BOOL)data;	// 0x36c60841
// declared property setter: - (void)setMoreDataExpected:(BOOL)expected;	// 0x36c60729
// declared property setter: - (void)setParseErrorReason:(id)reason;	// 0x36c60701
- (void)setShouldLog:(BOOL)log;	// 0x36c5f121
// declared property setter: - (void)setStreamingState:(int)state;	// 0x36c60819
// declared property getter: - (int)streamingState;	// 0x36c60809
@end

