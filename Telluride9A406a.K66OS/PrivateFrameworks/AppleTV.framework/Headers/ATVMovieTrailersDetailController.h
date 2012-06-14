/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class BRBoxControl, BRDetailedMediaControl, BRMovieTrailerCollection, BRMovieTrailersProvider, BRMediaShelfView;

__attribute__((visibility("hidden")))
@interface ATVMovieTrailersDetailController : BRController {
@private
	BRMovieTrailersProvider *_provider;	// 80 = 0x50
	BRMovieTrailerCollection *_trailer;	// 84 = 0x54
	BRDetailedMediaControl *_detailedControl;	// 88 = 0x58
	BRBoxControl *_relatedBox;	// 92 = 0x5c
	BRMediaShelfView *_relatedShelf;	// 96 = 0x60
}
@property(readonly, retain) BRMovieTrailerCollection *trailer;	// G=0x32ff930d; converted property
- (id)initWithProvider:(id)provider trailer:(id)trailer;	// 0x32ff9121
- (void)_setActionControl;	// 0x32ff96e1
- (void)_setCopyrightText;	// 0x32ff9b51
- (void)_setImageProxy;	// 0x32ff9659
- (void)_setMetadataControl;	// 0x32ff9a81
- (void)_setRelatedContent;	// 0x32ff9bd9
- (void)_setupDetailControls;	// 0x32ff95f5
- (id)accessibilityScreenContent;	// 0x32ffa46d
- (BOOL)brEventAction:(id)action;	// 0x32ff945d
- (void)dealloc;	// 0x32ff9271
- (BOOL)handleSelectionForActionShelf:(id)actionShelf;	// 0x32ffa2f1
- (BOOL)handleSelectionForRelatedShelf:(id)relatedShelf;	// 0x32ffa1d1
- (void)layoutSubcontrols;	// 0x32ff931d
// converted property getter: - (id)trailer;	// 0x32ff930d
@end
