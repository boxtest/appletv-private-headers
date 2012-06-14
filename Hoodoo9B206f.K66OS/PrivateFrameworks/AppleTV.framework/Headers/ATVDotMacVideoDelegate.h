/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacParserDelegate.h"

@class NSDate, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVDotMacVideoDelegate : ATVDotMacParserDelegate {
@private
	NSDate *_modDate;	// 24 = 0x18
	NSDictionary *_startSelectors;	// 28 = 0x1c
	NSDictionary *_endSelectors;	// 32 = 0x20
}
@property(readonly, retain) NSDictionary *endSelectors;	// G=0x3656a79d; converted property
@property(readonly, retain) NSDate *modDate;	// G=0x3656a7ad; converted property
@property(readonly, retain) NSDictionary *startSelectors;	// G=0x3656a78d; converted property
- (id)init;	// 0x3656a0bd
- (void)__atv_end_dotmac_description;	// 0x3656a501
- (void)__atv_end_dotmac_posterPath;	// 0x3656a581
- (void)__atv_end_dotmac_title;	// 0x3656a4c1
- (void)__atv_end_dotmac_videoDurationLrg;	// 0x3656a701
- (void)__atv_end_dotmac_videoDurationMed;	// 0x3656a681
- (void)__atv_end_dotmac_videoDurationSmall;	// 0x3656a601
- (void)__atv_end_dotmac_videoPathLrg;	// 0x3656a6c1
- (void)__atv_end_dotmac_videoPathMed;	// 0x3656a641
- (void)__atv_end_dotmac_videoPathSmall;	// 0x3656a5c1
- (void)__atv_end_dotmac_webImagePath;	// 0x3656a541
- (void)__atv_end_title;	// 0x3656a481
- (void)__atv_end_updated;	// 0x3656a741
- (void)dealloc;	// 0x3656a40d
// converted property getter: - (id)endSelectors;	// 0x3656a79d
// converted property getter: - (id)modDate;	// 0x3656a7ad
// converted property getter: - (id)startSelectors;	// 0x3656a78d
- (id)videoName;	// 0x3656a7bd
@end
