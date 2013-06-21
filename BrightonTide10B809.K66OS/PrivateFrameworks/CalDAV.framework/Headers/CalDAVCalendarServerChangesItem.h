/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem {
	NSMutableSet *_changedProperties;	// 28 = 0x1c
}
@property(retain) NSMutableSet *changedProperties;	// G=0x33592ed5; S=0x33592ee9; @synthesize=_changedProperties
- (id)init;	// 0x33592c9d
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x33592cc9
- (void)addChangedProperty:(id)property;	// 0x33592da5
// declared property getter: - (id)changedProperties;	// 0x33592ed5
- (id)copyParseRules;	// 0x33592dd1
- (void)dealloc;	// 0x33592d35
- (id)description;	// 0x33592d79
// declared property setter: - (void)setChangedProperties:(id)properties;	// 0x33592ee9
@end
