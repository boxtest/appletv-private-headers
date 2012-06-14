/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray, ATVFeedEventGroupElement, NSDate, NSDictionary, ATVFeedDocument, NSString;

@interface BRChapterGroup : NSObject {
@private
	ATVFeedDocument *_feedDocument;	// 4 = 0x4
	NSString *_groupName;	// 8 = 0x8
	NSArray *_chapters;	// 12 = 0xc
	NSString *_refreshURL;	// 16 = 0x10
	unsigned _refreshIntervalInSeconds;	// 20 = 0x14
	NSDate *_startDate;	// 24 = 0x18
	BOOL _showChapterMarkers;	// 28 = 0x1c
	BOOL _showDescriptionOnChapterSkip;	// 29 = 0x1d
	NSDictionary *_feedDictionary;	// 32 = 0x20
	ATVFeedEventGroupElement *_feedElement;	// 36 = 0x24
}
@property(readonly, assign) NSArray *chapters;	// G=0x367428cd; @synthesize=_chapters
@property(readonly, assign) NSDictionary *feedDictionary;	// G=0x36742955; @synthesize=_feedDictionary
@property(readonly, assign) ATVFeedEventGroupElement *feedElement;	// G=0x36742965; @synthesize=_feedElement
@property(readonly, assign) NSString *groupName;	// G=0x367428bd; @synthesize=_groupName
@property(readonly, assign) unsigned refreshIntervalInSeconds;	// G=0x36742915; @synthesize=_refreshIntervalInSeconds
@property(retain) NSString *refreshURL;	// G=0x367428dd; S=0x367428f1; @synthesize=_refreshURL
@property(readonly, assign) BOOL showChapterMarkers;	// G=0x36742935; @synthesize=_showChapterMarkers
@property(readonly, assign) BOOL showDescriptionOnChapterSkip;	// G=0x36742945; @synthesize=_showDescriptionOnChapterSkip
@property(readonly, assign) NSDate *startDate;	// G=0x36742925; @synthesize=_startDate
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x36742791
- (id)initWithFeedElement:(id)feedElement;	// 0x36742489
- (id)initWithGroupName:(id)groupName feedDictionary:(id)dictionary;	// 0x367425e5
- (id)_chaptersFromFeedDictionary:(id)feedDictionary;	// 0x36742975
- (id)_chaptersFromFeedElement:(id)feedElement;	// 0x36742c01
- (unsigned)chapterCount;	// 0x36742895
// declared property getter: - (id)chapters;	// 0x367428cd
- (void)dealloc;	// 0x367427d1
// declared property getter: - (id)feedDictionary;	// 0x36742955
// declared property getter: - (id)feedElement;	// 0x36742965
// declared property getter: - (id)groupName;	// 0x367428bd
// declared property getter: - (unsigned)refreshIntervalInSeconds;	// 0x36742915
// declared property getter: - (id)refreshURL;	// 0x367428dd
// declared property setter: - (void)setRefreshURL:(id)url;	// 0x367428f1
// declared property getter: - (BOOL)showChapterMarkers;	// 0x36742935
// declared property getter: - (BOOL)showDescriptionOnChapterSkip;	// 0x36742945
// declared property getter: - (id)startDate;	// 0x36742925
@end
