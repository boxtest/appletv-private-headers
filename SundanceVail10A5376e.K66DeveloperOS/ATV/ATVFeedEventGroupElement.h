/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSString, NSDate, BRXMLElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedEventGroupElement : ATVFeedRootElement {
	NSString *_title;	// 8 = 0x8
	int _refreshIntervalSec;	// 12 = 0xc
	NSDate *_startDate;	// 16 = 0x10
	BOOL _beginPlaybackAtStartDate;	// 20 = 0x14
	NSArray *_events;	// 24 = 0x18
	BOOL _showChapterMarkers;	// 28 = 0x1c
	BOOL _showDescriptionOnChapterSkip;	// 29 = 0x1d
	BRXMLElement *_xml;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL beginPlaybackAtStartDate;	// G=0x150fb9; S=0x150fc9; @synthesize=_beginPlaybackAtStartDate
@property(retain, nonatomic) NSArray *events;	// G=0x150fd9; S=0x150fe9; @synthesize=_events
@property(assign, nonatomic) int refreshIntervalSec;	// G=0x150f79; S=0x150f89; @synthesize=_refreshIntervalSec
@property(assign, nonatomic) BOOL showChapterMarkers;	// G=0x150ff9; S=0x151009; @synthesize=_showChapterMarkers
@property(assign, nonatomic) BOOL showDescriptionOnChapterSkip;	// G=0x151019; S=0x151029; @synthesize=_showDescriptionOnChapterSkip
@property(retain, nonatomic) NSDate *startDate;	// G=0x150f99; S=0x150fa9; @synthesize=_startDate
@property(copy, nonatomic) NSString *title;	// G=0x150f55; S=0x150f69; @synthesize=_title
@property(readonly, assign, nonatomic) BRXMLElement *xml;	// G=0x151039; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x150b5d
// declared property getter: - (BOOL)beginPlaybackAtStartDate;	// 0x150fb9
- (void)dealloc;	// 0x150ec9
// declared property getter: - (id)events;	// 0x150fd9
// declared property getter: - (int)refreshIntervalSec;	// 0x150f79
// declared property setter: - (void)setBeginPlaybackAtStartDate:(BOOL)startDate;	// 0x150fc9
// declared property setter: - (void)setEvents:(id)events;	// 0x150fe9
// declared property setter: - (void)setRefreshIntervalSec:(int)sec;	// 0x150f89
// declared property setter: - (void)setShowChapterMarkers:(BOOL)markers;	// 0x151009
// declared property setter: - (void)setShowDescriptionOnChapterSkip:(BOOL)skip;	// 0x151029
// declared property setter: - (void)setStartDate:(id)date;	// 0x150fa9
// declared property setter: - (void)setTitle:(id)title;	// 0x150f69
// declared property getter: - (BOOL)showChapterMarkers;	// 0x150ff9
// declared property getter: - (BOOL)showDescriptionOnChapterSkip;	// 0x151019
// declared property getter: - (id)startDate;	// 0x150f99
// declared property getter: - (id)title;	// 0x150f55
// declared property getter: - (id)xml;	// 0x151039
@end

