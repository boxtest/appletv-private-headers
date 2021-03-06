/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRContextMenuControl, NSMutableDictionary, BRControllerStack;
@protocol BRSubControllerHosting;

@interface BRController : BRControl {
@private
	NSMutableDictionary *_labels;	// 48 = 0x30
	BRControllerStack *_stack;	// 52 = 0x34
	BOOL _depthLimited;	// 56 = 0x38
	BRContextMenuControl *_contextMenu;	// 60 = 0x3c
	id _wasPushedBlock;	// 64 = 0x40
	id _wasPoppedBlock;	// 68 = 0x44
	id _wasBuriedBlock;	// 72 = 0x48
	id _wasExhumedBlock;	// 76 = 0x4c
	BRController<BRSubControllerHosting> *_hostingController;	// 80 = 0x50
}
@property(assign) BOOL depthLimited;	// G=0x3298c795; S=0x3298c785; converted property
@property(assign, nonatomic) BRController<BRSubControllerHosting> *hostingController;	// G=0x3298c931; S=0x3298c20d; @synthesize=_hostingController
@property(retain) BRControllerStack *stack;	// G=0x3298c685; S=0x3298c675; converted property
@property(copy, nonatomic) id wasBuriedBlock;	// G=0x3298c8c9; S=0x3298c8d9; @synthesize=_wasBuriedBlock
@property(copy, nonatomic) id wasExhumedBlock;	// G=0x3298c8fd; S=0x3298c90d; @synthesize=_wasExhumedBlock
@property(copy, nonatomic) id wasPoppedBlock;	// G=0x3298c895; S=0x3298c8a5; @synthesize=_wasPoppedBlock
@property(copy, nonatomic) id wasPushedBlock;	// G=0x3298c861; S=0x3298c871; @synthesize=_wasPushedBlock
+ (id)controllerWithContentControl:(id)contentControl;	// 0x3298c049
- (id)init;	// 0x3298c085
- (void)_contextMenuCancelItemSelected:(id)selected;	// 0x3298cafd
- (void)_handleWindowMaxBoundsChanged;	// 0x3298c7c1
- (void)addLabel:(id)label;	// 0x3298c6c9
- (BOOL)brEventAction:(id)action;	// 0x3298c25d
- (BOOL)canBeRemovedFromStack;	// 0x3298c6c5
- (int)contextMenuDimOption;	// 0x3298c9c5
- (BOOL)contextMenuIsVisible;	// 0x3298c94d
- (id)controlForContextMenuPositioning;	// 0x3298c945
- (id)controlForContextMenuStart;	// 0x3298c949
- (id)controlToDim;	// 0x3298c9c1
- (void)controlWasDeactivated;	// 0x3298c21d
- (void)dealloc;	// 0x3298c131
// converted property getter: - (BOOL)depthLimited;	// 0x3298c795
- (id)description;	// 0x3298c541
- (void)dismissContextMenu;	// 0x3298c979
- (long)errorNumberForNoContent;	// 0x3298c7a9
// declared property getter: - (id)hostingController;	// 0x3298c931
- (BOOL)isLabelled:(id)labelled;	// 0x3298c74d
- (BOOL)isNetworkDependent;	// 0x3298c77d
- (BOOL)isValidAfterDataUpdate;	// 0x3298c7a5
- (id)providersForContextMenu;	// 0x3298c941
- (BOOL)recreateOnReselect;	// 0x3298c781
- (void)removeLabel:(id)label;	// 0x3298c72d
// converted property setter: - (void)setDepthLimited:(BOOL)limited;	// 0x3298c785
// declared property setter: - (void)setHostingController:(id)controller;	// 0x3298c20d
// converted property setter: - (void)setStack:(id)stack;	// 0x3298c675
// declared property setter: - (void)setWasBuriedBlock:(id)block;	// 0x3298c8d9
// declared property setter: - (void)setWasExhumedBlock:(id)block;	// 0x3298c90d
// declared property setter: - (void)setWasPoppedBlock:(id)block;	// 0x3298c8a5
// declared property setter: - (void)setWasPushedBlock:(id)block;	// 0x3298c871
// converted property getter: - (id)stack;	// 0x3298c685
- (BOOL)topOfStack;	// 0x3298c695
- (id)transitionType;	// 0x3298c7b1
- (void)wasBuried;	// 0x3298caa9
// declared property getter: - (id)wasBuriedBlock;	// 0x3298c8c9
- (void)wasExhumed;	// 0x3298cadd
// declared property getter: - (id)wasExhumedBlock;	// 0x3298c8fd
- (void)wasPopped;	// 0x3298ca31
// declared property getter: - (id)wasPoppedBlock;	// 0x3298c895
- (void)wasPushed;	// 0x3298c9c9
// declared property getter: - (id)wasPushedBlock;	// 0x3298c861
@end

