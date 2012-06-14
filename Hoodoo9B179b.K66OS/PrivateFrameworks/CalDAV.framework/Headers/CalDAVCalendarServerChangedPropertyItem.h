/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSString, NSMutableSet;

@interface CalDAVCalendarServerChangedPropertyItem : CoreDAVItem {
	NSMutableSet *_changedParameters;	// 24 = 0x18
	NSString *_nameAttribute;	// 28 = 0x1c
}
@property(retain) NSMutableSet *changedParameters;	// G=0x35a913bd; S=0x35a91399; @synthesize=_changedParameters
@property(retain) NSString *nameAttribute;	// G=0x35a913f9; S=0x35a913d5; @synthesize=_nameAttribute
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x35a91315
- (void)addChangedParameter:(id)parameter;	// 0x35a9151d
// declared property getter: - (id)changedParameters;	// 0x35a913bd
- (id)copyParseRules;	// 0x35a91411
- (void)dealloc;	// 0x35a91631
// declared property getter: - (id)nameAttribute;	// 0x35a913f9
- (void)parserFoundAttributes:(id)attributes;	// 0x35a91549
// declared property setter: - (void)setChangedParameters:(id)parameters;	// 0x35a91399
// declared property setter: - (void)setNameAttribute:(id)attribute;	// 0x35a913d5
@end
