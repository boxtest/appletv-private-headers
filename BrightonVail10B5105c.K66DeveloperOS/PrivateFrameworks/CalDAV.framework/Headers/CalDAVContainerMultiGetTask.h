/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainerMultiGetTask.h> // Unknown library


@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask {
	BOOL _getScheduleTags;	// 176 = 0xb0
	BOOL _getScheduleChanges;	// 177 = 0xb1
}
@property(assign) BOOL getScheduleChanges;	// G=0x34218e31; S=0x34218e49; @synthesize=_getScheduleChanges
@property(assign) BOOL getScheduleTags;	// G=0x34218e01; S=0x34218e19; @synthesize=_getScheduleTags
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes;	// 0x34218b51
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes appSpecificCalendarItemClass:(Class)aClass;	// 0x34218a49
- (id)copyAdditionalPropElements;	// 0x34218b9d
// declared property getter: - (BOOL)getScheduleChanges;	// 0x34218e31
// declared property getter: - (BOOL)getScheduleTags;	// 0x34218e01
- (void)setAdditionalProperties:(id)properties onDataItem:(id)item;	// 0x34218d05
// declared property setter: - (void)setGetScheduleChanges:(BOOL)changes;	// 0x34218e49
// declared property setter: - (void)setGetScheduleTags:(BOOL)tags;	// 0x34218e19
@end

