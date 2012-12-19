/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSArray, ASMailMessage;

@interface ASItemOperationsTask : ASTask {
	NSArray *_commands;	// 108 = 0x6c
	int _numReplacedItems;	// 112 = 0x70
	int _bodyTruncationBytes;	// 116 = 0x74
	int _mimeSupport;	// 120 = 0x78
	ASMailMessage *_streamingMailMessage;	// 124 = 0x7c
}
@property(retain) NSArray *commands;	// G=0x33bca639; S=0x33bca649; converted property
@property(readonly, assign) int mimeSupport;	// G=0x33bca5f1; converted property
@property(retain) ASMailMessage *streamingMailMessage;	// G=0x33bcb339; S=0x33bcb349; converted property
- (id)init;	// 0x33bca5a1
- (int)_mimeSupportCode;	// 0x33bca68d
- (int)bodyType;	// 0x33bca611
- (int)commandCode;	// 0x33bca539
// converted property getter: - (id)commands;	// 0x33bca639
- (void)dealloc;	// 0x33bca53d
- (void)finishWithError:(id)error;	// 0x33bcb031
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x33bcac21
- (int)handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x33bcaa41
// converted property getter: - (int)mimeSupport;	// 0x33bca5f1
- (BOOL)processContext:(id)context;	// 0x33bcac35
- (id)replacementObjectForEmailItem:(id)emailItem;	// 0x33bcabb5
- (id)requestBody;	// 0x33bca6c9
- (void)setBodyTruncationBytes:(int)bytes;	// 0x33bca629
// converted property setter: - (void)setCommands:(id)commands;	// 0x33bca649
- (void)setMIMESupport:(int)support;	// 0x33bca601
// converted property setter: - (void)setStreamingMailMessage:(id)message;	// 0x33bcb349
// converted property getter: - (id)streamingMailMessage;	// 0x33bcb339
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x33bcb2b1
@end
