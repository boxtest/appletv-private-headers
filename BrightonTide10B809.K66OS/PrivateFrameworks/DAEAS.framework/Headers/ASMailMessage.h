/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAMailMessage.h> // Unknown library

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {
	ASEmailItem *_ASEmailItem;	// 4 = 0x4
}
- (id)initWithASEmailItem:(id)asemailItem;	// 0x33a1edc9
- (id)initWithCoder:(id)coder;	// 0x33a1f56d
- (id)attachments;	// 0x33a1f2bd
- (id)body;	// 0x33a1f1ed
- (int)bodySize;	// 0x33a1f20d
- (int)bodyTruncated;	// 0x33a1f279
- (id)cc;	// 0x33a1f0c5
- (id)conversationId;	// 0x33a1f36d
- (id)conversationIndex;	// 0x33a1f38d
- (id)date;	// 0x33a1f125
- (void)dealloc;	// 0x33a1ed7d
- (id)description;	// 0x33a1ee1d
- (id)displayTo;	// 0x33a1f165
- (void)encodeWithCoder:(id)coder;	// 0x33a1f66d
- (BOOL)flagged;	// 0x33a1f1c9
- (BOOL)flaggedIsSet;	// 0x33a1f451
- (id)folderID;	// 0x33a1f3ed
- (id)from;	// 0x33a1f0e5
- (int)importance;	// 0x33a1f185
- (int)lastVerb;	// 0x33a1f40d
- (id)longID;	// 0x33a1f3cd
- (BOOL)meetingRequestIsActionable;	// 0x33a1f31d
- (id)meetingRequestMetaData;	// 0x33a1f2fd
- (id)meetingRequestUUID;	// 0x33a1f2dd
- (id)messageClass;	// 0x33a1f29d
- (BOOL)read;	// 0x33a1f1a5
- (BOOL)readIsSet;	// 0x33a1f42d
- (id)remoteID;	// 0x33a1f3ad
- (id)replyTo;	// 0x33a1f105
- (id)rfc822Data;	// 0x33a1f509
- (int)smimeType;	// 0x33a1f499
- (id)subject;	// 0x33a1f145
- (id)threadTopic;	// 0x33a1f34d
- (id)to;	// 0x33a1f0a5
- (BOOL)verbIsSet;	// 0x33a1f475
@end

