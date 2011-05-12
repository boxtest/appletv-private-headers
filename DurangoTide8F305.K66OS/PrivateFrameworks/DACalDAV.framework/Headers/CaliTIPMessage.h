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
@property(readonly, retain) NSData *data;	// G=0x340b6d85; converted property
@property(readonly, retain) ICSDocument *document;	// G=0x340b70e5; converted property
@property(readonly, retain) ICSEvent *event;	// G=0x340b727d; converted property
@property(readonly, retain) NSString *filename;	// G=0x340b6da5; converted property
@property(readonly, retain) CalDAVScheduleChangesProperty *scheduleChanges;	// G=0x340b6d95; converted property
- (id)initWithData:(id)data filename:(id)filename;	// 0x340b7145
- (id)initWithData:(id)data filename:(id)filename scheduleChanges:(id)changes;	// 0x340b71f9
- (id)allOccurrences;	// 0x340b6fe1
- (id)calendar;	// 0x340b70c1
- (int)compare:(id)compare;	// 0x340b6ec5
// converted property getter: - (id)data;	// 0x340b6d85
- (void)dealloc;	// 0x340b7169
- (id)description;	// 0x340b6db5
// converted property getter: - (id)document;	// 0x340b70e5
// converted property getter: - (id)event;	// 0x340b727d
// converted property getter: - (id)filename;	// 0x340b6da5
- (id)masterEvent;	// 0x340b708d
- (id)occurrences;	// 0x340b6f7d
// converted property getter: - (id)scheduleChanges;	// 0x340b6d95
@end
