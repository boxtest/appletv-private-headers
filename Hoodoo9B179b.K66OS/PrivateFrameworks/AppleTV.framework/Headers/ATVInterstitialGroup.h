/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ATVFeedDocument, ATVFeedInterstitialGroupElement, NSArray, NSDictionary;

@interface ATVInterstitialGroup : NSObject {
@private
	ATVFeedDocument *_feedDocument;	// 4 = 0x4
	NSDictionary *_feedDictionary;	// 8 = 0x8
	ATVFeedInterstitialGroupElement *_feedElement;	// 12 = 0xc
	NSArray *_interstitials;	// 16 = 0x10
	NSArray *_collapsedInterstitials;	// 20 = 0x14
	NSArray *_netTimeChapters;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSArray *collapsedInterstitials;	// G=0x30384fd9; @synthesize=_collapsedInterstitials
@property(readonly, assign, nonatomic) NSDictionary *feedDictionary;	// G=0x30384fa9; @synthesize=_feedDictionary
@property(readonly, assign, nonatomic) ATVFeedInterstitialGroupElement *feedElement;	// G=0x30384fb9; @synthesize=_feedElement
@property(readonly, assign, nonatomic) NSArray *interstitials;	// G=0x30384fc9; @synthesize=_interstitials
@property(retain, nonatomic) NSArray *netTimeChapters;	// G=0x30384fe9; S=0x30384ff9; @synthesize=_netTimeChapters
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x30384859
- (id)initWithFeedElement:(id)feedElement;	// 0x30384475
- (id)collapsedInterstitialForGrossTime:(double)grossTime;	// 0x30384edd
// declared property getter: - (id)collapsedInterstitials;	// 0x30384fd9
- (void)dealloc;	// 0x30384be1
// declared property getter: - (id)feedDictionary;	// 0x30384fa9
// declared property getter: - (id)feedElement;	// 0x30384fb9
- (double)grossTimeForNetTime:(double)netTime;	// 0x30384dcd
// declared property getter: - (id)interstitials;	// 0x30384fc9
// declared property getter: - (id)netTimeChapters;	// 0x30384fe9
- (double)netTimeForGrossTime:(double)grossTime;	// 0x30384c91
// declared property setter: - (void)setNetTimeChapters:(id)chapters;	// 0x30384ff9
@end
