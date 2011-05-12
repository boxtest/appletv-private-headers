/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSArray, NSMutableArray;

@interface ASMoveItemsTask : ASTask {
	NSMutableArray *_moveItems;	// 104 = 0x68
	NSArray *_pushedMoveRequests;	// 108 = 0x6c
}
@property(retain) NSArray *pushedMoveRequests;	// G=0x3032f38d; S=0x3032f3a5; @synthesize=_pushedMoveRequests
- (void)addSourceID:(id)anId sourceFolder:(id)folder destinatonFolder:(id)folder3;	// 0x3032e969
- (int)commandCode;	// 0x3032e955
- (void)dealloc;	// 0x3032ea55
- (void)finishWithError:(id)error;	// 0x3032eab1
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x3032e959
- (BOOL)processContext:(id)context;	// 0x3032eca9
// declared property getter: - (id)pushedMoveRequests;	// 0x3032f38d
- (id)requestBody;	// 0x3032f159
// declared property setter: - (void)setPushedMoveRequests:(id)requests;	// 0x3032f3a5
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x3032f311
@end
