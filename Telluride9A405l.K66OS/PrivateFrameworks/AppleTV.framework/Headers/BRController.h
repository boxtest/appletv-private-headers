/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRControllerStack, BRContextMenuControl, NSMutableDictionary;

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
}
@property(assign) BOOL depthLimited;	// G=0x35db00a1; S=0x35db0091; converted property
@property(retain) BRControllerStack *stack;	// G=0x35daff91; S=0x35daff81; converted property
@property(copy, nonatomic) id wasBuriedBlock;	// G=0x35db0135; S=0x35db0145; @synthesize=_wasBuriedBlock
@property(copy, nonatomic) id wasExhumedBlock;	// G=0x35db0169; S=0x35db0179; @synthesize=_wasExhumedBlock
@property(copy, nonatomic) id wasPoppedBlock;	// G=0x35db0101; S=0x35db0111; @synthesize=_wasPoppedBlock
@property(copy, nonatomic) id wasPushedBlock;	// G=0x35db00cd; S=0x35db00dd; @synthesize=_wasPushedBlock
+ (id)controllerWithContentControl:(id)contentControl;	// 0x35daf9e1
- (id)init;	// 0x35dafa1d
- (void)_contextMenuCancelItemSelected:(id)selected;	// 0x35db0359
- (void)addLabel:(id)label;	// 0x35daffd5
- (BOOL)brEventAction:(id)action;	// 0x35dafb69
- (BOOL)canBeRemovedFromStack;	// 0x35daffd1
- (int)contextMenuDimOption;	// 0x35db0221
- (BOOL)contextMenuIsVisible;	// 0x35db01a9
- (id)controlForContextMenuPositioning;	// 0x35db01a1
- (id)controlForContextMenuStart;	// 0x35db01a5
- (id)controlToDim;	// 0x35db021d
- (void)controlWasDeactivated;	// 0x35dafb29
- (void)dealloc;	// 0x35dafa79
// converted property getter: - (BOOL)depthLimited;	// 0x35db00a1
- (id)description;	// 0x35dafe4d
- (void)dismissContextMenu;	// 0x35db01d5
- (long)errorNumberForNoContent;	// 0x35db00b5
- (BOOL)isLabelled:(id)labelled;	// 0x35db0059
- (BOOL)isNetworkDependent;	// 0x35db0089
- (BOOL)isValidAfterDataUpdate;	// 0x35db00b1
- (id)providersForContextMenu;	// 0x35db019d
- (BOOL)recreateOnReselect;	// 0x35db008d
- (void)removeLabel:(id)label;	// 0x35db0039
// converted property setter: - (void)setDepthLimited:(BOOL)limited;	// 0x35db0091
// converted property setter: - (void)setStack:(id)stack;	// 0x35daff81
// declared property setter: - (void)setWasBuriedBlock:(id)block;	// 0x35db0145
// declared property setter: - (void)setWasExhumedBlock:(id)block;	// 0x35db0179
// declared property setter: - (void)setWasPoppedBlock:(id)block;	// 0x35db0111
// declared property setter: - (void)setWasPushedBlock:(id)block;	// 0x35db00dd
// converted property getter: - (id)stack;	// 0x35daff91
- (BOOL)topOfStack;	// 0x35daffa1
- (id)transitionType;	// 0x35db00bd
- (void)wasBuried;	// 0x35db0305
// declared property getter: - (id)wasBuriedBlock;	// 0x35db0135
- (void)wasExhumed;	// 0x35db0339
// declared property getter: - (id)wasExhumedBlock;	// 0x35db0169
- (void)wasPopped;	// 0x35db028d
// declared property getter: - (id)wasPoppedBlock;	// 0x35db0101
- (void)wasPushed;	// 0x35db0225
// declared property getter: - (id)wasPushedBlock;	// 0x35db00cd
@end

