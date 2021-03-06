/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableSet, BRContextMenuControl, NSString, BRControllerStack;

__attribute__((visibility("hidden")))
@interface BRController : BRControl {
	NSMutableSet *_labels;	// 84 = 0x54
	BRControllerStack *_stack;	// 88 = 0x58
	BOOL _depthLimited;	// 92 = 0x5c
	BRContextMenuControl *_contextMenu;	// 96 = 0x60
	BOOL _showsHeader;	// 100 = 0x64
	NSString *_title;	// 104 = 0x68
	id _wasPushedBlock;	// 108 = 0x6c
	id _wasPoppedBlock;	// 112 = 0x70
	id _wasBuriedBlock;	// 116 = 0x74
	id _wasExhumedBlock;	// 120 = 0x78
	int _maxDepthLimit;	// 124 = 0x7c
	NSString *_depthLimitLabel;	// 128 = 0x80
}
@property(retain, nonatomic) NSString *depthLimitLabel;	// G=0x310a19; S=0x310a29; @synthesize=_depthLimitLabel
@property(assign) BOOL depthLimited;	// G=0x31084d; S=0x310805; converted property
@property(assign, nonatomic) int maxDepthLimit;	// G=0x3109f9; S=0x310a09; @synthesize=_maxDepthLimit
@property(assign, nonatomic) BOOL showsHeader;	// G=0x310a39; S=0x310a49; @synthesize=_showsHeader
@property(retain) BRControllerStack *stack;	// G=0x310705; S=0x3106f5; converted property
@property(copy, nonatomic) NSString *title;	// G=0x310945; S=0x310959; @synthesize=_title
@property(copy, nonatomic) id wasBuriedBlock;	// G=0x3109b1; S=0x3109c5; @synthesize=_wasBuriedBlock
@property(copy, nonatomic) id wasExhumedBlock;	// G=0x3109d5; S=0x3109e9; @synthesize=_wasExhumedBlock
@property(copy, nonatomic) id wasPoppedBlock;	// G=0x31098d; S=0x3109a1; @synthesize=_wasPoppedBlock
@property(copy, nonatomic) id wasPushedBlock;	// G=0x310969; S=0x31097d; @synthesize=_wasPushedBlock
+ (id)controllerWithContentControl:(id)contentControl;	// 0x310339
- (id)init;	// 0x310375
- (void)_contextMenuCancelItemSelected:(id)selected;	// 0x310cad
- (void)_handleWindowMaxBoundsChanged;	// 0x31087d
- (BOOL)_showContextMenu;	// 0x310ce9
- (void)addLabel:(id)label;	// 0x310749
- (BOOL)brEventAction:(id)action;	// 0x3105b1
- (BOOL)canBeRemovedFromStack;	// 0x310745
- (id)cancelProviderForContextMenu;	// 0x310a5d
- (int)contextMenuDimOption;	// 0x310c01
- (BOOL)contextMenuIsVisible;	// 0x310b8d
- (id)controlForContextMenuPositioning;	// 0x310b1d
- (id)controlForContextMenuStart;	// 0x310b21
- (id)controlToDim;	// 0x310bfd
- (void)controlWasDeactivated;	// 0x310571
- (void)dealloc;	// 0x310469
// declared property getter: - (id)depthLimitLabel;	// 0x310a19
// converted property getter: - (BOOL)depthLimited;	// 0x31084d
- (id)description;	// 0x310649
- (void)dismissContextMenu;	// 0x310bb9
- (long)errorNumberForNoContent;	// 0x310861
- (BOOL)isLabelled:(id)labelled;	// 0x3107d5
- (BOOL)isNetworkDependent;	// 0x3107fd
- (BOOL)isValidAfterDataUpdate;	// 0x31085d
// declared property getter: - (int)maxDepthLimit;	// 0x3109f9
- (id)providersForContextMenu;	// 0x310a59
- (BOOL)recreateOnReselect;	// 0x310801
- (void)removeLabel:(id)label;	// 0x3107b5
// declared property setter: - (void)setDepthLimitLabel:(id)label;	// 0x310a29
// converted property setter: - (void)setDepthLimited:(BOOL)limited;	// 0x310805
// declared property setter: - (void)setMaxDepthLimit:(int)limit;	// 0x310a09
// declared property setter: - (void)setShowsHeader:(BOOL)header;	// 0x310a49
// converted property setter: - (void)setStack:(id)stack;	// 0x3106f5
// declared property setter: - (void)setTitle:(id)title;	// 0x310959
// declared property setter: - (void)setWasBuriedBlock:(id)block;	// 0x3109c5
// declared property setter: - (void)setWasExhumedBlock:(id)block;	// 0x3109e9
// declared property setter: - (void)setWasPoppedBlock:(id)block;	// 0x3109a1
// declared property setter: - (void)setWasPushedBlock:(id)block;	// 0x31097d
- (void)showDetailContextMenuWithProvider:(id)provider initialSelection:(long)selection;	// 0x310b25
// declared property getter: - (BOOL)showsHeader;	// 0x310a39
// converted property getter: - (id)stack;	// 0x310705
- (BOOL)suppressAutoDismissableDialogs;	// 0x310879
// declared property getter: - (id)title;	// 0x310945
- (BOOL)topOfStack;	// 0x310715
- (id)transitionType;	// 0x310869
- (void)wasBuried;	// 0x310c59
// declared property getter: - (id)wasBuriedBlock;	// 0x3109b1
- (void)wasExhumed;	// 0x310c91
// declared property getter: - (id)wasExhumedBlock;	// 0x3109d5
- (void)wasPopped;	// 0x310c21
// declared property getter: - (id)wasPoppedBlock;	// 0x31098d
- (void)wasPushed;	// 0x310c05
// declared property getter: - (id)wasPushedBlock;	// 0x310969
@end

