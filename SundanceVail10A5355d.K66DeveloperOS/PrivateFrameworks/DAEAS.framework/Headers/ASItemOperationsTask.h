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
@property(retain) NSArray *commands;	// G=0x34b636e1; S=0x34b636f1; converted property
@property(readonly, assign) int mimeSupport;	// G=0x34b63699; converted property
@property(retain) ASMailMessage *streamingMailMessage;	// G=0x34b643e1; S=0x34b643f1; converted property
- (id)init;	// 0x34b63649
- (int)_mimeSupportCode;	// 0x34b63735
- (int)bodyType;	// 0x34b636b9
- (int)commandCode;	// 0x34b635e1
// converted property getter: - (id)commands;	// 0x34b636e1
- (void)dealloc;	// 0x34b635e5
- (void)finishWithError:(id)error;	// 0x34b640d9
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x34b63cc9
- (int)handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x34b63ae9
// converted property getter: - (int)mimeSupport;	// 0x34b63699
- (BOOL)processContext:(id)context;	// 0x34b63cdd
- (id)replacementObjectForEmailItem:(id)emailItem;	// 0x34b63c5d
- (id)requestBody;	// 0x34b63771
- (void)setBodyTruncationBytes:(int)bytes;	// 0x34b636d1
// converted property setter: - (void)setCommands:(id)commands;	// 0x34b636f1
- (void)setMIMESupport:(int)support;	// 0x34b636a9
// converted property setter: - (void)setStreamingMailMessage:(id)message;	// 0x34b643f1
// converted property getter: - (id)streamingMailMessage;	// 0x34b643e1
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x34b64359
@end

