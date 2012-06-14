/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSString;

@interface ASItemOperationsFetchAttachmentFetchResult : ASItem {
	NSNumber *_status;	// 40 = 0x28
	NSString *_fileReference;	// 44 = 0x2c
}
@property(retain) NSString *fileReference;	// G=0x34212b81; S=0x34212b95; @synthesize=_fileReference
@property(retain) NSNumber *status;	// G=0x34212b49; S=0x34212b5d; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x34212791
+ (BOOL)frontingBasicTypes;	// 0x3421288d
+ (BOOL)notifyOfUnknownTokens;	// 0x342128e1
+ (BOOL)parsingLeafNode;	// 0x342127e5
+ (BOOL)parsingWithSubItems;	// 0x34212839
- (id)asParseRules;	// 0x34212935
// declared property getter: - (id)fileReference;	// 0x34212b81
// declared property setter: - (void)setFileReference:(id)reference;	// 0x34212b95
// declared property setter: - (void)setStatus:(id)status;	// 0x34212b5d
// declared property getter: - (id)status;	// 0x34212b49
@end
