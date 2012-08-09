/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRPanelControl, NSArray;

__attribute__((visibility("hidden")))
@interface ATVPhotoMetadataView : BRControl {
	XXStruct_qlg9jA _preferredHeaderHeight;	// 84 = 0x54
	NSArray *_photoBadgeViews;	// 88 = 0x58
	BRControl *_actionsView;	// 92 = 0x5c
	BRControl *_commentsView;	// 96 = 0x60
	BRPanelControl *__badgesPanel;	// 100 = 0x64
	XXStruct_40SSZC _imageRenderSize;	// 104 = 0x68
	double _fadeTransitionDuration;	// 112 = 0x70
	BOOL _enableFadeTransition;	// 120 = 0x78
	BOOL _disableDisplay;	// 121 = 0x79
}
@property(retain, nonatomic) BRPanelControl *_badgesPanel;	// G=0x1132b5; S=0x1132c5; @synthesize=__badgesPanel
@property(retain, nonatomic) BRControl *actionsView;	// G=0x113295; S=0x112d05; @synthesize=_actionsView
@property(retain, nonatomic) BRControl *commentsView;	// G=0x1132a5; S=0x112da1; @synthesize=_commentsView
@property(assign, nonatomic) BOOL disableDisplay;	// G=0x113329; S=0x112a39; @synthesize=_disableDisplay
@property(assign, nonatomic) BOOL enableFadeTransition;	// G=0x113319; S=0x112955; @synthesize=_enableFadeTransition
@property(assign, nonatomic) double fadeTransitionDuration;	// G=0x1132ed; S=0x113305; @synthesize=_fadeTransitionDuration
@property(assign, nonatomic) XXStruct_40SSZC imageRenderSize;	// G=0x1132d5; S=0x112909; @synthesize=_imageRenderSize
@property(retain, nonatomic) NSArray *photoBadgeViews;	// G=0x113285; S=0x112b3d; @synthesize=_photoBadgeViews
@property(assign, nonatomic) XXStruct_qlg9jA preferredHeaderHeight;	// G=0x113259; S=0x113275; @synthesize=_preferredHeaderHeight
- (id)init;	// 0x11280d
// declared property getter: - (id)_badgesPanel;	// 0x1132b5
// declared property getter: - (id)actionsView;	// 0x113295
- (BOOL)brEventAction:(id)action;	// 0x113205
// declared property getter: - (id)commentsView;	// 0x1132a5
- (void)dealloc;	// 0x112891
// declared property getter: - (BOOL)disableDisplay;	// 0x113329
// declared property getter: - (BOOL)enableFadeTransition;	// 0x113319
// declared property getter: - (double)fadeTransitionDuration;	// 0x1132ed
// declared property getter: - (XXStruct_40SSZC)imageRenderSize;	// 0x1132d5
- (void)layoutSubcontrols;	// 0x112e3d
// declared property getter: - (id)photoBadgeViews;	// 0x113285
// declared property getter: - (XXStruct_qlg9jA)preferredHeaderHeight;	// 0x113259
// declared property setter: - (void)setActionsView:(id)view;	// 0x112d05
// declared property setter: - (void)setCommentsView:(id)view;	// 0x112da1
// declared property setter: - (void)setDisableDisplay:(BOOL)display;	// 0x112a39
// declared property setter: - (void)setEnableFadeTransition:(BOOL)transition;	// 0x112955
// declared property setter: - (void)setFadeTransitionDuration:(double)duration;	// 0x113305
// declared property setter: - (void)setImageRenderSize:(XXStruct_40SSZC)size;	// 0x112909
// declared property setter: - (void)setPhotoBadgeViews:(id)views;	// 0x112b3d
// declared property setter: - (void)setPreferredHeaderHeight:(XXStruct_qlg9jA)height;	// 0x113275
// declared property setter: - (void)set_badgesPanel:(id)panel;	// 0x1132c5
@end
