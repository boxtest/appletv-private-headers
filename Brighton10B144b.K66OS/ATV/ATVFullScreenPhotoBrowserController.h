/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "AppleTV-Structs.h"
#import "ATVCarouselViewDataSource.h"

@class NSMutableDictionary, NSDate, NSTimer, NSArray, ATVPhotoDetailView, ATVPhotoMetadataViewConfigurator;

__attribute__((visibility("hidden")))
@interface ATVFullScreenPhotoBrowserController : BRViewController <ATVCarouselViewDataSource> {
	NSDate *_photoMetadataViewRedisplayTime;	// 104 = 0x68
	int _type;	// 108 = 0x6c
	id _onLikeSelection;	// 112 = 0x70
	NSArray *_photos;	// 116 = 0x74
	id _photoMetadataDetails;	// 120 = 0x78
	NSTimer *_photoMetadataViewRedisplayTimer;	// 124 = 0x7c
	id _onPhotoSelection;	// 128 = 0x80
	id _onContextMenu;	// 132 = 0x84
	ATVFullScreenPhotoSelectionMemento _photoSelectionMemento;	// 136 = 0x88
	int _selectedIndex;	// 148 = 0x94
	NSMutableDictionary *_transitioningInfo;	// 152 = 0x98
	id _onMetadataRequiresUpdate;	// 156 = 0x9c
	id _photoAssetDetails;	// 160 = 0xa0
	id _onMarkCommentsAsViewed;	// 164 = 0xa4
	id _photoDetails;	// 168 = 0xa8
}
@property(copy, nonatomic) id onContextMenu;	// G=0x3cad5d; S=0x3cad71; @synthesize=_onContextMenu
@property(copy, nonatomic) id onLikeSelection;	// G=0x3cacad; S=0x3cacc1; @synthesize=_onLikeSelection
@property(copy, nonatomic) id onMarkCommentsAsViewed;	// G=0x3cae51; S=0x3cae65; @synthesize=_onMarkCommentsAsViewed
@property(copy, nonatomic) id onMetadataRequiresUpdate;	// G=0x3cae09; S=0x3cae1d; @synthesize=_onMetadataRequiresUpdate
@property(copy, nonatomic) id onPhotoSelection;	// G=0x3cad39; S=0x3cad4d; @synthesize=_onPhotoSelection
@property(copy, nonatomic) id photoAssetDetails;	// G=0x3cae2d; S=0x3cae41; @synthesize=_photoAssetDetails
@property(readonly, assign, nonatomic) ATVPhotoDetailView *photoDetailView;	// G=0x3c7001; 
@property(copy, nonatomic) id photoDetails;	// G=0x3cae75; S=0x3cae89; @synthesize=_photoDetails
@property(copy, nonatomic) id photoMetadataDetails;	// G=0x3cacf5; S=0x3cad09; @synthesize=_photoMetadataDetails
@property(readonly, assign, nonatomic) ATVPhotoMetadataViewConfigurator *photoMetadataView;	// G=0x3c7011; 
@property(retain, nonatomic) NSDate *photoMetadataViewRedisplayTime;	// G=0x3cac55; S=0x3cac65; @synthesize=_photoMetadataViewRedisplayTime
@property(assign, nonatomic) __weak NSTimer *photoMetadataViewRedisplayTimer;	// G=0x3cad19; S=0x3c9909; @synthesize=_photoMetadataViewRedisplayTimer
@property(assign, nonatomic) ATVFullScreenPhotoSelectionMemento photoSelectionMemento;	// G=0x3cad81; S=0x3cada1; @synthesize=_photoSelectionMemento
@property(copy, nonatomic) NSArray *photos;	// G=0x3cacd1; S=0x3cace5; @synthesize=_photos
@property(assign, nonatomic) int selectedIndex;	// G=0x3cadc1; S=0x3c7059; @synthesize=_selectedIndex
@property(readonly, assign, nonatomic) id selectedPhoto;	// G=0x3c7205; 
@property(retain, nonatomic) NSMutableDictionary *transitioningInfo;	// G=0x3cadd1; S=0x3cade1; @synthesize=_transitioningInfo
@property(assign, nonatomic) int type;	// G=0x3cac8d; S=0x3cac9d; @synthesize=_type
- (id)init;	// 0x3c6dd1
- (id)initWithType:(int)type;	// 0x3c6df9
- (void).cxx_destruct;	// 0x3cae99
- (id)_accessibilityLikeTextControl;	// 0x3ca4d5
- (void)_clearPhotoMetadataView;	// 0x3c9a49
- (CGSize)_commentsScreenImageSize;	// 0x3ca26d
- (CGSize)_fullScreenSize;	// 0x3ca1f1
- (BOOL)_handleLikeSelection:(id)selection;	// 0x3ca355
- (void)_handlePhotoMetadataViewRedisplayTimer:(id)timer;	// 0x3ca459
- (void)_hidePhotoMetadataViewOnSelectionChange;	// 0x3c9b41
- (void)_updateHeaderWithLiked:(id)liked likeStatus:(id)status commentsBadgeCount:(unsigned)count;	// 0x3c9db9
- (int)_updatePhotoSelectionTimestamp;	// 0x3c9971
- (id)accessibilityHint;	// 0x3caa39
- (id)accessibilityLabel;	// 0x3ca669
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x3cab8d
- (id)accessibilityRangeString;	// 0x3cab91
- (id)accessibilitySecondaryLabel;	// 0x3caac1
- (BOOL)brEventAction:(id)action;	// 0x3c8341
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0x3c8781
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0x3c8745
// declared property getter: - (id)onContextMenu;	// 0x3cad5d
// declared property getter: - (id)onLikeSelection;	// 0x3cacad
// declared property getter: - (id)onMarkCommentsAsViewed;	// 0x3cae51
// declared property getter: - (id)onMetadataRequiresUpdate;	// 0x3cae09
// declared property getter: - (id)onPhotoSelection;	// 0x3cad39
// declared property getter: - (id)photoAssetDetails;	// 0x3cae2d
// declared property getter: - (id)photoDetailView;	// 0x3c7001
// declared property getter: - (id)photoDetails;	// 0x3cae75
// declared property getter: - (id)photoMetadataDetails;	// 0x3cacf5
// declared property getter: - (id)photoMetadataView;	// 0x3c7011
// declared property getter: - (id)photoMetadataViewRedisplayTime;	// 0x3cac55
// declared property getter: - (id)photoMetadataViewRedisplayTimer;	// 0x3cad19
// declared property getter: - (ATVFullScreenPhotoSelectionMemento)photoSelectionMemento;	// 0x3cad81
// declared property getter: - (id)photos;	// 0x3cacd1
- (id)providersForContextMenu;	// 0x3c8669
- (void)reloadPhotoMetadata;	// 0x3c73e9
- (void)reloadPhotoMetadataHeader;	// 0x3c798d
// declared property getter: - (int)selectedIndex;	// 0x3cadc1
// declared property getter: - (id)selectedPhoto;	// 0x3c7205
// declared property setter: - (void)setOnContextMenu:(id)menu;	// 0x3cad71
// declared property setter: - (void)setOnLikeSelection:(id)selection;	// 0x3cacc1
// declared property setter: - (void)setOnMarkCommentsAsViewed:(id)viewed;	// 0x3cae65
// declared property setter: - (void)setOnMetadataRequiresUpdate:(id)update;	// 0x3cae1d
// declared property setter: - (void)setOnPhotoSelection:(id)selection;	// 0x3cad4d
// declared property setter: - (void)setPhotoAssetDetails:(id)details;	// 0x3cae41
// declared property setter: - (void)setPhotoDetails:(id)details;	// 0x3cae89
// declared property setter: - (void)setPhotoMetadataDetails:(id)details;	// 0x3cad09
// declared property setter: - (void)setPhotoMetadataViewRedisplayTime:(id)time;	// 0x3cac65
// declared property setter: - (void)setPhotoMetadataViewRedisplayTimer:(id)timer;	// 0x3c9909
// declared property setter: - (void)setPhotoSelectionMemento:(ATVFullScreenPhotoSelectionMemento)memento;	// 0x3cada1
// declared property setter: - (void)setPhotos:(id)photos;	// 0x3cace5
- (void)setPhotos:(id)photos initialIndex:(int)index;	// 0x3c72b9
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x3c7059
// declared property setter: - (void)setTransitioningInfo:(id)info;	// 0x3cade1
// declared property setter: - (void)setType:(int)type;	// 0x3cac9d
// declared property getter: - (id)transitioningInfo;	// 0x3cadd1
// declared property getter: - (int)type;	// 0x3cac8d
- (void)wasPopped;	// 0x3c820d
- (void)wasPushed;	// 0x3c7acd
@end
