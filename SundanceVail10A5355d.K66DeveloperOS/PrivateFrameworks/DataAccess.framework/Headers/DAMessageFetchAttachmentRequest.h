/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject {
	NSString *_messageID;	// 4 = 0x4
	NSString *_attachmentName;	// 8 = 0x8
}
@property(readonly, retain) NSString *attachmentName;	// G=0x336517c5; converted property
@property(readonly, retain) NSString *messageID;	// G=0x336517b5; converted property
- (id)initWithAttachmentName:(id)attachmentName andMessageServerID:(id)anId;	// 0x33651511
// converted property getter: - (id)attachmentName;	// 0x336517c5
- (void)dealloc;	// 0x33651751
- (id)description;	// 0x336516d9
- (unsigned)hash;	// 0x33651589
- (BOOL)isEqual:(id)equal;	// 0x33651615
// converted property getter: - (id)messageID;	// 0x336517b5
@end

