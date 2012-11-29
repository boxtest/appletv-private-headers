/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString, ATVFeedTableElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedBaseballLineScorePreviewElement : ATVFeedElement {
	NSArray *_banners;	// 4 = 0x4
	NSString *_leftLabel;	// 8 = 0x8
	NSString *_rightLabel;	// 12 = 0xc
	ATVFeedTableElement *_teamsTable;	// 16 = 0x10
	ATVFeedTableElement *_inningsTable;	// 20 = 0x14
	ATVFeedTableElement *_summaryTable;	// 24 = 0x18
}
@property(retain, nonatomic) NSArray *banners;	// G=0x15e4bd; S=0x15e4cd; @synthesize=_banners
@property(retain, nonatomic) ATVFeedTableElement *inningsTable;	// G=0x15e53d; S=0x15e54d; @synthesize=_inningsTable
@property(retain, nonatomic) NSString *leftLabel;	// G=0x15e4dd; S=0x15e4ed; @synthesize=_leftLabel
@property(retain, nonatomic) NSString *rightLabel;	// G=0x15e4fd; S=0x15e50d; @synthesize=_rightLabel
@property(retain, nonatomic) ATVFeedTableElement *summaryTable;	// G=0x15e55d; S=0x15e56d; @synthesize=_summaryTable
@property(retain, nonatomic) ATVFeedTableElement *teamsTable;	// G=0x15e51d; S=0x15e52d; @synthesize=_teamsTable
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15e161
// declared property getter: - (id)banners;	// 0x15e4bd
- (void)dealloc;	// 0x15e409
// declared property getter: - (id)inningsTable;	// 0x15e53d
// declared property getter: - (id)leftLabel;	// 0x15e4dd
// declared property getter: - (id)rightLabel;	// 0x15e4fd
// declared property setter: - (void)setBanners:(id)banners;	// 0x15e4cd
// declared property setter: - (void)setInningsTable:(id)table;	// 0x15e54d
// declared property setter: - (void)setLeftLabel:(id)label;	// 0x15e4ed
// declared property setter: - (void)setRightLabel:(id)label;	// 0x15e50d
// declared property setter: - (void)setSummaryTable:(id)table;	// 0x15e56d
// declared property setter: - (void)setTeamsTable:(id)table;	// 0x15e52d
// declared property getter: - (id)summaryTable;	// 0x15e55d
// declared property getter: - (id)teamsTable;	// 0x15e51d
@end
