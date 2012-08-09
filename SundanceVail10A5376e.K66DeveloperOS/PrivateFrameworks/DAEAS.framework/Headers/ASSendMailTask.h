/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSString, NSData;

@interface ASSendMailTask : ASTask {
	NSData *_mimeMessage;	// 108 = 0x6c
	NSString *_messageID;	// 112 = 0x70
}
- (id)initWithMessage:(id)message messageID:(id)anId;	// 0x322bb685
- (id)command;	// 0x322bbec5
- (int)commandCode;	// 0x322bbe81
- (int)connectionActionForResponse:(id)response;	// 0x322bbfcd
- (id)contentType;	// 0x322bbf41
- (void)dealloc;	// 0x322bb705
- (BOOL)expectsWBXML;	// 0x322bbf95
- (void)finishWithError:(id)error;	// 0x322bb7d1
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x322bbfd1
- (id)parameterData;	// 0x322bbe85
- (BOOL)processContext:(id)context;	// 0x322bbfe5
- (id)requestBody;	// 0x322bbd0d
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x322bba69
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x322bb769
@end
