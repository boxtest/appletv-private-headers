/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacParserDelegate.h"

@class NSDate, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVDotMacAlbumDelegate : ATVDotMacParserDelegate {
@private
	NSString *_keyImageID;	// 24 = 0x18
	NSArray *_imageOrder;	// 28 = 0x1c
	NSDate *_modDate;	// 32 = 0x20
	NSDictionary *_startSelectors;	// 36 = 0x24
	NSDictionary *_endSelectors;	// 40 = 0x28
}
@property(readonly, retain) NSDictionary *endSelectors;	// G=0x35cc2129; converted property
@property(readonly, retain) NSDate *modDate;	// G=0x35cc2441; converted property
@property(readonly, retain) NSDictionary *startSelectors;	// G=0x35cc2119; converted property
- (id)init;	// 0x35cc1995
- (void)__atv_end_dotmac_keyImagePath;	// 0x35cc1dad
- (void)__atv_end_dotmac_largeImagePath;	// 0x35cc1f0d
- (void)__atv_end_dotmac_moviePath;	// 0x35cc204d
- (void)__atv_end_dotmac_title;	// 0x35cc1ecd
- (void)__atv_end_dotmac_userHidden;	// 0x35cc1f8d
- (void)__atv_end_dotmac_useritemguid;	// 0x35cc1fcd
- (void)__atv_end_dotmac_userorder;	// 0x35cc1df1
- (void)__atv_end_dotmac_videoDuration;	// 0x35cc208d
- (void)__atv_end_dotmac_viewIdentifier;	// 0x35cc1e4d
- (void)__atv_end_dotmac_webImagePath;	// 0x35cc1f4d
- (void)__atv_end_iphoto_photoDate;	// 0x35cc200d
- (void)__atv_end_title;	// 0x35cc1e8d
- (void)__atv_end_updated;	// 0x35cc20cd
- (id)albumID;	// 0x35cc23f9
- (id)albumName;	// 0x35cc2451
- (void)dealloc;	// 0x35cc1d11
// converted property getter: - (id)endSelectors;	// 0x35cc2129
- (int)imageCount;	// 0x35cc23d1
- (id)itemInfos;	// 0x35cc2139
- (id)keyImageInfo;	// 0x35cc2315
// converted property getter: - (id)modDate;	// 0x35cc2441
- (id)sortedItemInfos;	// 0x35cc22bd
// converted property getter: - (id)startSelectors;	// 0x35cc2119
@end
