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
- (id)initWithASEmailItem:(id)asemailItem;	// 0x33a1ddc9
- (id)initWithCoder:(id)coder;	// 0x33a1e56d
- (id)attachments;	// 0x33a1e2bd
- (id)body;	// 0x33a1e1ed
- (int)bodySize;	// 0x33a1e20d
- (int)bodyTruncated;	// 0x33a1e279
- (id)cc;	// 0x33a1e0c5
- (id)conversationId;	// 0x33a1e36d
- (id)conversationIndex;	// 0x33a1e38d
- (id)date;	// 0x33a1e125
- (void)dealloc;	// 0x33a1dd7d
- (id)description;	// 0x33a1de1d
- (id)displayTo;	// 0x33a1e165
- (void)encodeWithCoder:(id)coder;	// 0x33a1e66d
- (BOOL)flagged;	// 0x33a1e1c9
- (BOOL)flaggedIsSet;	// 0x33a1e451
- (id)folderID;	// 0x33a1e3ed
- (id)from;	// 0x33a1e0e5
- (int)importance;	// 0x33a1e185
- (int)lastVerb;	// 0x33a1e40d
- (id)longID;	// 0x33a1e3cd
- (BOOL)meetingRequestIsActionable;	// 0x33a1e31d
- (id)meetingRequestMetaData;	// 0x33a1e2fd
- (id)meetingRequestUUID;	// 0x33a1e2dd
- (id)messageClass;	// 0x33a1e29d
- (BOOL)read;	// 0x33a1e1a5
- (BOOL)readIsSet;	// 0x33a1e42d
- (id)remoteID;	// 0x33a1e3ad
- (id)replyTo;	// 0x33a1e105
- (id)rfc822Data;	// 0x33a1e509
- (int)smimeType;	// 0x33a1e499
- (id)subject;	// 0x33a1e145
- (id)threadTopic;	// 0x33a1e34d
- (id)to;	// 0x33a1e0a5
- (BOOL)verbIsSet;	// 0x33a1e475
@end
