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
- (id)initWithMessage:(id)message messageID:(id)anId messageType:(int)type originalMessageID:(id)anId4 originalFolderID:(id)anId5 originalLongID:(id)anId6;	// 0x33c17011
- (id)command;	// 0x33c17565
- (int)commandCode;	// 0x33c1749d
- (id)contentType;	// 0x33c175d1
- (void)dealloc;	// 0x33c170b1
- (BOOL)expectsWBXML;	// 0x33c175dd
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x33c175e1
- (void)handleTopLevelErrorStatus:(id)status;	// 0x33c17651
- (id)parameterData;	// 0x33c174f1
- (BOOL)processContext:(id)context;	// 0x33c177a1
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x33c17129
@end

