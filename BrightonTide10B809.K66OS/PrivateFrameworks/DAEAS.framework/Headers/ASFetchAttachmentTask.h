/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASFetchAttachmentTaskProtocol.h"
#import "ASTask.h"

@class NSString;

@interface ASFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol> {
	NSString *_messageServerID;	// 108 = 0x6c
	NSString *_attachmentName;	// 112 = 0x70
}
@property(readonly, retain) NSString *attachmentName;	// G=0x339da895; converted property
- (id)initForMessageServerID:(id)messageServerID andAttachmentName:(id)name;	// 0x339da8b5
// converted property getter: - (id)attachmentName;	// 0x339da895
- (id)command;	// 0x339da645
- (int)commandCode;	// 0x339da585
- (int)connectionActionForResponse:(id)response;	// 0x339da581
- (id)contentType;	// 0x339da6b5
- (void)dealloc;	// 0x339da92d
- (BOOL)expectsWBXML;	// 0x339da57d
- (void)finishWithError:(id)error;	// 0x339da3fd
- (id)messageID;	// 0x339da8a5
- (id)parameterData;	// 0x339da589
- (BOOL)processContext:(id)context;	// 0x339da6b9
- (id)requestBody;	// 0x339da579
- (BOOL)shouldLogIncomingData;	// 0x339da991
@end
