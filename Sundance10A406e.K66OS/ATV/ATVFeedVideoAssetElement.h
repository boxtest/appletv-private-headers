/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString, ATVFeedImageElement, BRXMLElement;

__attribute__((visibility("hidden")))
@interface ATVFeedVideoAssetElement : ATVFeedElement {
	NSString *_url;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_description;	// 12 = 0xc
	NSString *_rating;	// 16 = 0x10
	ATVFeedImageElement *_image;	// 20 = 0x14
	float _bookmarkTimeSec;	// 24 = 0x18
	BRXMLElement *_xml;	// 28 = 0x1c
	NSString *_secondScreenURL;	// 32 = 0x20
}
@property(assign, nonatomic) float bookmarkTimeSec;	// G=0x3da839; S=0x3da849; @synthesize=_bookmarkTimeSec
@property(copy, nonatomic) NSString *description;	// G=0x3da7b9; S=0x3da7cd; @synthesize=_description
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x3da801; S=0x3da811; @synthesize=_image
@property(copy, nonatomic) NSString *rating;	// G=0x3da7dd; S=0x3da7f1; @synthesize=_rating
@property(copy, nonatomic) NSString *secondScreenURL;	// G=0x3da869; S=0x3da87d; @synthesize=_secondScreenURL
@property(copy, nonatomic) NSString *title;	// G=0x3da795; S=0x3da7a9; @synthesize=_title
@property(copy, nonatomic) NSString *url;	// G=0x3da771; S=0x3da785; @synthesize=_url
@property(readonly, assign, nonatomic) BRXMLElement *xml;	// G=0x3da859; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3da471
- (void).cxx_destruct;	// 0x3da88d
// declared property getter: - (float)bookmarkTimeSec;	// 0x3da839
// declared property getter: - (id)description;	// 0x3da7b9
// declared property getter: - (id)image;	// 0x3da801
// declared property getter: - (id)rating;	// 0x3da7dd
// declared property getter: - (id)secondScreenURL;	// 0x3da869
// declared property setter: - (void)setBookmarkTimeSec:(float)sec;	// 0x3da849
// declared property setter: - (void)setDescription:(id)description;	// 0x3da7cd
// declared property setter: - (void)setImage:(id)image;	// 0x3da811
// declared property setter: - (void)setRating:(id)rating;	// 0x3da7f1
// declared property setter: - (void)setSecondScreenURL:(id)url;	// 0x3da87d
// declared property setter: - (void)setTitle:(id)title;	// 0x3da7a9
// declared property setter: - (void)setUrl:(id)url;	// 0x3da785
// declared property getter: - (id)title;	// 0x3da795
// declared property getter: - (id)url;	// 0x3da771
// declared property getter: - (id)xml;	// 0x3da859
@end
