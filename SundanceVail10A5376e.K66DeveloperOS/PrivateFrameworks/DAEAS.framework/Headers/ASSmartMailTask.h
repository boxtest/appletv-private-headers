/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASSendMailTask.h"

@class NSString;

@interface ASSmartMailTask : ASSendMailTask {
	int _messageType;	// 116 = 0x74
	NSString *_originalMessageId;	// 120 = 0x78
	NSString *_originalFolderId;	// 124 = 0x7c
	NSString *_originalLongId;	// 128 = 0x80
	BOOL _retryWithoutReferences;	// 132 = 0x84
}
- (id)initWithMessage:(id)message messageID:(id)anId messageType:(int)type originalMessageID:(id)anId4 originalFolderID:(id)anId5 originalLongID:(id)anId6;	// 0x322c612d
- (id)command;	// 0x322c6681
- (int)commandCode;	// 0x322c65b9
- (id)contentType;	// 0x322c66ed
- (void)dealloc;	// 0x322c61cd
- (BOOL)expectsWBXML;	// 0x322c66f9
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x322c66fd
- (void)handleTopLevelErrorStatus:(id)status;	// 0x322c676d
- (id)parameterData;	// 0x322c660d
- (BOOL)processContext:(id)context;	// 0x322c68bd
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x322c6245
@end
