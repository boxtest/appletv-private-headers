/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class ICSDocument, ICSEvent, NSString, NSData, CalDAVScheduleChangesProperty;

@interface CaliTIPMessage : NSObject {
	NSData *_data;	// 4 = 0x4
	CalDAVScheduleChangesProperty *_scheduleChanges;	// 8 = 0x8
	NSString *_filename;	// 12 = 0xc
	ICSDocument *_document;	// 16 = 0x10
	ICSEvent *_event;	// 20 = 0x14
}
@property(readonly, retain) NSData *data;	// G=0x32d09d85; converted property
@property(readonly, retain) ICSDocument *document;	// G=0x32d0a0e5; converted property
@property(readonly, retain) ICSEvent *event;	// G=0x32d0a27d; converted property
@property(readonly, retain) NSString *filename;	// G=0x32d09da5; converted property
@property(readonly, retain) CalDAVScheduleChangesProperty *scheduleChanges;	// G=0x32d09d95; converted property
- (id)initWithData:(id)data filename:(id)filename;	// 0x32d0a145
- (id)initWithData:(id)data filename:(id)filename scheduleChanges:(id)changes;	// 0x32d0a1f9
- (id)allOccurrences;	// 0x32d09fe1
- (id)calendar;	// 0x32d0a0c1
- (int)compare:(id)compare;	// 0x32d09ec5
// converted property getter: - (id)data;	// 0x32d09d85
- (void)dealloc;	// 0x32d0a169
- (id)description;	// 0x32d09db5
// converted property getter: - (id)document;	// 0x32d0a0e5
// converted property getter: - (id)event;	// 0x32d0a27d
// converted property getter: - (id)filename;	// 0x32d09da5
- (id)masterEvent;	// 0x32d0a08d
- (id)occurrences;	// 0x32d09f7d
// converted property getter: - (id)scheduleChanges;	// 0x32d09d95
@end

